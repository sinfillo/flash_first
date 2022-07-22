#include <iostream>
#include <vector>
#include <fstream>

int main() {

    //считываем входные данные
    std::fstream file("gifts_A.txt");
    int N;
    file >> N;
    std::vector<long long> cost(N);
    for (int i = 0; i < N; ++i)
        file >> cost[i];

    long long max_sum = -1e18; //здесь будет ответ - максимальная сумма
    for (int i = 0; i < N; ++i) { //перебираем левую границу отрезка
        for (int j = i; j < N; ++j) { //перебираем правую границу отрезка
            long long cur_sum = 0; //здесь будет сумма на отрезке
            int cnt_5 = 0; //здесь будет количество чисел, кратных 5, на отрезке
            for (int k = i; k <= j; ++k) {
                cur_sum += cost[k]; //считаем сумму на отрезке
                if (cost[k] % 5 == 0) 
                    ++cnt_5; //считаем количество чисел, кратных 5, на отрезке
            }
            if (cnt_5 % 2 == 0) //если условие на четное количество выполняется, то обновляем ответ
                max_sum = std::max(max_sum, cur_sum);
        }
    }

    //выводим ответ
    std::cout << max_sum;
    return 0;
}

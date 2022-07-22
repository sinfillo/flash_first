#include <iostream>
#include <vector>
#include <fstream>

int main() {

    //считываем входные данные
    std::fstream file("tourist_A.txt");
    int L, N;
    file >> L >> N;
    std::vector<int> road(N);
    for (int i = 0; i < N; ++i) 
        file >> road[i];
    int max = -1; //здесь будет лежать ответ - максимальное из расстояний
    //рассматриваем каждую пару отелей
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int right = road[j] - road[i]; //считаем расстояние по часовой стрелке
            int left = L - road[j] + road[i]; //считаем расстояние против часовой стрелки 
            int dist = std::min(right, left); //выбираем нужное нам расстояние - минимальное
            max = std::max(max, dist); //обновляем ответ
        }
    }

    //выводим ответ
    std::cout << max;
    return 0;
}
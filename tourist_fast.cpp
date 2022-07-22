#include <iostream>
#include <vector>
#include <fstream>

int main() {

    //считываем входные данные
    std::fstream file("tourist_B.txt");
    int L, N;
    file >> L >> N;
    std::vector<int> road(N);
    for (int i = 0; i < N; ++i) 
        file >> road[i];

    int j = 0;
    int max = -1;
    for (int i = 0; i < N; ++i) {
        while (j < N && road[j] - road[i] < L / 2) ++j;
        if (j == N) break;
        int left = 0, right = 0;
        left = L - road[j] + road[i];
        right = road[j - 1] - road[i];
        max = std::max(max, std::max(left, right));
    }
    std::cout << max;
    return 0;
}

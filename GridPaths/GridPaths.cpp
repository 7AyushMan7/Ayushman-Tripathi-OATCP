#include <iostream>
#include <vector>

using namespace std;

int calculatePaths(int size, vector<vector<char>>& map) {
    vector<vector<int>> paths(size, vector<int>(size, 0));

    paths[0][0] = (map[0][0] == '.') ? 1 : 0;

    for (int i = 1; i < size; ++i) {
        if (map[i][0] == '.') {
            paths[i][0] = paths[i - 1][0];
        }
    }
    for (int j = 1; j < size; ++j) {
        if (map[0][j] == '.') {
            paths[0][j] = paths[0][j - 1];
        }
    }
    for (int i = 1; i < size; ++i) {
        for (int j = 1; j < size; ++j) {
            if (map[i][j] == '.') {
                paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
            }
        }
    }
    return paths[size - 1][size - 1];
}

int main() {
    int size;
    cin >> size; 
    vector<vector<char>> map(size, vector<char>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> map[i][j];
        }
    }
    cout << "Number of paths: " << calculatePaths(size, map) << endl;
    return 0;
}

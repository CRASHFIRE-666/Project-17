#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    
    cout << "Введите N";
    
    cin >> n;
    
    int** arr = new int* [n];
    
    
    for (int i = 0; i < n; i++){
        arr[i] = new int [2];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    
    int max_x = 0;
    int max_y = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 1; j++){
            if (arr[i][j] < 0 && arr[i][j + 1] > 0 && arr[i][j] >= max_x && arr[i][j + 1] <= max_y && arr[i][j] != 0 && arr[i][j] != 0){
                max_x = arr[i][j];
                max_y = arr[i][j + 1];
            }
        }
    }
    
    cout << max_x << " " << max_y << endl;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    
    cout << "Введите N";
    
    do{
        cin >> n;
    }while(n <= 2);
    
    int** arr = new int* [n];
    
    
    for (int i = 0; i < n; i++){
        arr[i] = new int [2];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    
    double prm;
    double prm_max = INT_MIN;
    int p1, p2, p3;
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                prm = 0;
                prm += sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
                prm += sqrt(pow(arr[i][0] - arr[k][0], 2) + pow(arr[i][1] - arr[k][1], 2));
                prm += sqrt(pow(arr[j][0] - arr[k][0], 2) + pow(arr[j][1] - arr[k][1], 2));
                if (prm >= prm_max){
                    prm_max = prm;
                    p1 = i;
                    p2 = j;
                    p3 = k;
                }
            }
        }
    }
    
    cout << arr[p1][0] << " " << arr[p1][1] << endl;
    cout << arr[p2][0] << " " << arr[p2][1] << endl;
    cout << arr[p3][0] << " " << arr[p3][1] << endl;
    
}

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, s;
    
    cout << "Введите S";
    
    cin >> s;
    
    if (s <= 0){
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ";
        return 0;
    }
    
    cout << "Введите размер массива";
    
    cin >> n;
    
    int* arr = new int [n];
    int* arr2 = new int [n];
    
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int counter = 0;
    int index_s = 0;
    int length_s;
    int number_s;
    
    for (int i = 0; i < n; i++){
        length_s = 1;
        for (int j = i + 1; j < n; j++){
            if (arr[j] == arr[j - 1]){
                length_s++;
            }
            else{
                counter++;
                if (length_s > 1){
                    i += length_s - 1;
                }
                break;
            }
        }
        if (counter == s){
            index_s = i - length_s + 1;
            number_s = arr[i];
            break;
        }
    }
    int number_last = arr[n - 1];
    int length_last = 1;
    
    for (int i = n - 1; i > index_k; i--){
        if (arr[i] == arr[i - 1]){
            length_last++;
        }
        else{
            break;
        }
    }
    
    
    
    
    for(int i = 0; i < index_s; i++){
        arr2[i] = arr[i];
    }
    for (int i = index_s; i < index_s + length_last; i++){
        arr2[i] = number_last;
    }
    
    int p = index_k + length_k;
    for (int i = index_k + length_last; i < n - length_k; i++){
        arr2[i] = arr[p];
        p++;
    }
    for(int i = n - length_s; i < n; i++){
        arr2[i] = number_s;
    }
    
    for (int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}

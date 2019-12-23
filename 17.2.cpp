#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int s, l;
    
    cout << "Введите L";
    
    cin >> l;
    
    cout << "Введите размер массива";
    
    cin >> s;
    
    int* arr = new int [s];
    int* arr2 = new int [s];
    
    for (int i = 0; i < s; i++){
        cin >> arr[i];
    }
    
    int k = 0;
    for (int i = 0; i < s; i++){
        
        int length = 1;
        
        for (int j = i + 1; j < s; j++){
            if (arr[j] == arr[i]){
                length++;
            }
            else{
                break;
            }
        }
        
        if (length > l){
            arr2[k] = arr[i];
            k++;
            i += length - 1;
        }
        else{
            arr2[k] = arr[i];
            k++;
        }
    }
    
    for (int i = 0; i < k; i++){
        cout << arr2[i] << " ";
    }
    
    
    return 0;
}

#include <iostream>
using namespace std;


int main()
{
    int n, i, s, counter, length, k;
    
    cin >> n;
    
    int* a = new int[n];
    
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    
    counter = 1;
    for (i = 1; i < n; i++){
        if (a[i] == a[i - 1]){
            continue;
        }
        else{
            counter++;
        }
    }
    
    
    
    
    int* b = new int[counter];
    int* c = new int[counter];
    
    k = 0;
    b[k] = 1;
    c[k] = a[k];
    
    
    for (i = 1; i < n; i++){
        if(a[i] == a[i - 1]){
            b[k]++;
        }
        else{
            k++;
            b[k] = 1;
            c[k] = a[i];
        }
    }
    
    for (i = 0; i < counter; i++){
        cout << c[i] << " - " << b[i] << endl;
    }
    
    return 0;
}

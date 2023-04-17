#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[254];
    int size = 0;
    int max=0;

    for(int j = 0 ; j<n; j++){
        int tmp;
        cin>>tmp;
        arr[j] = tmp;
        size++;
    }

    for(int i = 0 ; i < size-2; i++)
        for(int j = i+1; j< size-1; j++)
            for(int k = j+1; k < size; k++){
                if(m - (arr[i]+arr[k]+arr[j]) < m - max & (arr[i]+arr[k]+arr[j]) <= m )
                    max = arr[i]+arr[k]+arr[j];
            }

    cout << max << endl;




    return 0;
}

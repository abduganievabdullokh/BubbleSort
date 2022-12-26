#include <iostream>
using namespace std;

void BubbleSort(int arr[], int maxSize){
    int i, j, temp;
    for(i=0; i<maxSize-1;i++){
        for(j=0; j<maxSize-i-1; j++){
            if(arr[j]>arr[j+1]){
                //swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int myArray[] = {22, 1, 4, 6, 2, 6, 8, 9, 12, 35, 44};
    cout << "Before sorting: ";
    for(int i=0; i<11; i++){
        cout << myArray[i] << "   ";
    }
    BubbleSort(myArray, 11);
    cout << endl << endl;
    cout << "After sorting: ";
    for(int i=0; i< 11; i++){
        cout << myArray[i] << "   ";
    }
}

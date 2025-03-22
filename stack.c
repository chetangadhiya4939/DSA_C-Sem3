#include <stdio.h>

void pop(int arr[], int size, int n){
    // int arr[]={1,2,3,4,5,6};
    

}


void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);

return 0;
}
//     isFull();
//     isEmpty();
//     pop();
//     push();
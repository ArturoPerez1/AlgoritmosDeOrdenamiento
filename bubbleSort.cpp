#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    
    int array[] = {11,10,10,8,9,4,3,2};    
    int j,i,aux;

    for(i= 0; i<8; i++){    
        for(j = 0; j<8; j++){

            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }


    cout<<"Array Ordenado = ";
    for(i =0; i<8; i++){
        cout<<array[i]<<" ";
    } 

    
    return 0;
}
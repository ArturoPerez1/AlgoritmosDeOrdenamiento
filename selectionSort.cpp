#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    
    int array[] = {11,10,10,8,9,4,3,2};    
    int i, j, aux, min;

    for(i=0; i<9; i++){
        min = i;
        for (j = i+1; j<9; j++){
            if(array[j] < array[min]){
               min = j;  
            }            
        }
        aux = array[i];
        array[i] =  array[min];
        array[min] = aux;    
    }
    


    cout<<"Array Ordenado = ";
    for(i =0; i<8; i++){
        cout<<array[i]<<" ";
    } 

    
    return 0;
}
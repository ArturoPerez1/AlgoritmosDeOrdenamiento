#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char nada[30];


    int array[] = {11,10,10,8,9,4,3,2};   
    int i, pos, aux;

    for(i =0; i<9; i++){
        pos = i;
        aux =  array[i];

        while((pos > 0) && (array[pos-1] > aux)){
            array[pos] = array[pos-1];
            pos--;
        }
        array[pos] = aux;    
    }


    cout<<"Array Ordenado = ";
    for(i =0; i<8; i++){
        cout<<array[i]<<" ";
    } 

    
    return 0;
}
#include<stdio.h>
int main (){
int arr[7][5]={{10,15,46,48,70},
{10,15,46,48,60},
{10,15,42,45,70},
{10,15,46,48,70},
{10,20,46,48,100},
{10,15,46,48,70},
{10,20,46,48,70}};

for(int i=0;i<7;i++){

    int largest=arr[i][0];
    for(int j=1;j<=5;j++){

        if(arr[i][j] > largest){

            largest=arr[i][j];
        }
    }
    printf("the higest mark of %d student is= %d\n",i+1,largest);
}







return 0;
}

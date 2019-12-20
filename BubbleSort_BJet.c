#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j, n=100, rn[100];
    time_t t;
    srand((unsigned) time(&t));

    //Generating 100 random numbers
    printf("Unsorted Numbers: ");
    for(i=0;i<n;i++){
        rn[i] = rand() % n;
        printf("%d    ",rn[i]);
    }

    //Sorting procedure starts here
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(rn[j]>rn[j+1]){
                swap(rn,j);
            }
        }
    }

    //Printing sorted numbers
    printf("\n\nSorted Numbers: ");
    for(i=0;i<n;i++){
        printf("%d    ",rn[i]);
    }
    printf("\n");

    return 0;

}
void swap(int arr[], int location){

    int temp = arr[location];
    arr[location] = arr[location+1];
    arr[location+1] = temp;

}


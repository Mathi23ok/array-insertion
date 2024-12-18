//sum of array 
#include <stdio.h>
int main(){
    int n;
    int p,num;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[100];
    //initializing an array
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    //insertion
    printf("Enter the position :\n");
    scanf("%d",&p);
    printf("Enter the number to be inserted :");
    scanf("%d",&num);
    
    //check whether the position is valid 
    if(p>n || p<0){
        printf("Invalid position");
    }
    //changing the index of the array and making the space 
    for(int i=n;i>p;i--){
        arr[i]=arr[i - 1];
    }
    //assigning the number to the position which will be empty due to changing of index and incrementing the total no.of elements in an array 
        arr[p]=num;
        n++;
    //printing the inserted array
     for(int i=0;i<n;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
        }
}

//two dimensional array
#include <stdio.h>
int main(){
    int m,n,p,q,k;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the rows and cols of a :");
    scanf("%d %d",&m,&n);
    printf("Enter the rows and cols of b :");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix cannot be multiplied \n");
        
    }
    printf("Enter the elements of a :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the elements of b :");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k =0;k<n;k++){
                c[i][j] += a[i][k] *b[k][j];
            }
        }
    }
//display the Matrix
 printf("Display matrix a :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
            printf("\n");
            
        }
    }

 printf("Display matrix b :");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",b[i][j]);
            printf("\n");
        }
    }

 printf("Display matrix c :");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
}

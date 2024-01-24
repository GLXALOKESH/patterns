#include <stdio.h>
int main(){
int n = 2;
int l =n;
for (int i=1;i<=n;i++){
int k =n;
    for (int j=1;j<=n;j++){
        
    
    for (int j=1;j<=l;j++){
        printf("%d ",k);
    }
    k--;
    }
    printf("\n");
    l--;
}
return(0);
}
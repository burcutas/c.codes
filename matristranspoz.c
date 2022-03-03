#include <stdio.h>
#include <stdlib.h>
#define max_size 10
int main()
{
    int matris[max_size][max_size],i,j,n,sum1=0,sum2=0,k,matris1[max_size][max_size];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matris[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    if(i==j){
        sum1+=matris[i][j];
    }
        }
    }
    printf("ilk kosegen toplami:%d",sum1);
                                             //147  02 11 20
                                             //258
                                             //369
    printf("\n");
    
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                matris1[i][j]=matris[j][i];
                printf("%d ",matris1[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j)==n-1){
                    sum2+=matris1[i][j];
                }
            }
        }
    printf("ikinci kosegenin toplami:%d",sum2);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#define max_size 10
int main()
{
    int i,j,n,sum1=0,sum2=0,k;
    int matris[max_size][max_size], matris1[max_size][max_size];
    scanf("%d",&n);
    
    //matris=(int*) malloc(n * sizeof(int));
    //matris1=(int*) malloc(n * sizeof(int));
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",(matris[i]+j));
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(matris[i]+j));
        }
        printf("\n");
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    if(i==j){
        sum1+=*(matris[i]+j);
    }
        }
    }
    printf("ilk kosegen toplami:%d",sum1);
                                             //147  02 11 20
                                             //258
                                             //369
    printf("\n");
    
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                *(matris1[i]+j)=*(matris[j]+i);
                printf("%d ",*(matris1[i]+j));
            }
            printf("\n");
        }
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j)==n-1){
                    sum2+=*(matris1[i]+j);
                }
            }
        }
    printf("ikinci kosegenin toplami:%d",sum2);

    return 0;
}

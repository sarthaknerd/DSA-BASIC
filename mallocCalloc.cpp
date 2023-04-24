#include <iostream>

using namespace std;

int main()
{
//malloc
    int n = 5;
    int *ptr = (int *) malloc (n * sizeof(int));
    for(int i =0;i<n;i++){
        ptr[i] = i*2;
    }
    
    for(int i =0;i<n;i++){
        cout<<ptr[i]<<endl;
    }
    free(ptr)
;


// calloc
    int *ptr2 = (int *)calloc(5,sizeof(int));
    for(int i =0;i<5;i++){
        cout<<ptr2[i]<<endl;
    }
    free(ptr2);

return 0;
}

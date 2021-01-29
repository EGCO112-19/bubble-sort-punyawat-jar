#ifndef swap_h
#define swap_h
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

#endif /* swap_h */

// Factorial 


long Factorial_Loop(unsigned int *num)
{
    long fact=1;
    while(*num)
    {
        printf("%d",*num);
        fact=fact*(*num);
        (*num)--;
    }
    
    printf("\n%d\n",fact);
    return fact;
}

int main()
{
    unsigned int num;
    unsigned long fact=1;
    
    while(1)
    {
        scanf("%d",&num);
        fact=Factorial_Loop(&num);
       
    }


    return 0;
}

/*==============================*/

// factorial recursive

long fact_rec(int *n)
{
    int num=*n;
    if(*n==0)
    {
        return 1;
    }
    printf("%d",*n);
    (*n)--;
    return num*fact_rec(n);
}

int main()
{
    unsigned int num;
    unsigned long fact=1;

    while(1)
    {
        scanf("%d",&num);
        fact=fact_rec(&num);
         printf("\n%d\n",fact);

    }


    return 0;
}

/***************************************************************/
// sorting array 

void Sorting_Ascending (int *arr,int*size)// for array
{
    int i=0,j=0;
    int st=0;
    int ind;
    int swap;
    int min=arr[0];

    for(i=0;i<(*size)-1;i++)
    {
        for(j=st;j<(*size);j++)
        {
           if(min>arr[j])
           {
               min=arr[j];
               ind=j;
           }
        }
        swap=arr[st];
        arr[st]=arr[ind];
        arr[ind]=swap;

        st++;
        min=arr[st];
        ind=st;
    }
    return ;
}

int main()
{
    int arr[7]={5,1,3,4,2,10,8};
    int size=7;

    Sorting_Ascending(arr,&size);

    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }


    return 0;
}


/*==============================*/


void Sorting_Descending (int *arr,int*size)// for array
{
    int i=0,j=0;
    int st=0;
    int ind;
    int swap;
    int max=arr[0];

    for(i=0;i<(*size)-1;i++)
    {
        for(j=st;j<(*size);j++)
        {
           if(max<arr[j])
           {
               max=arr[j];
               ind=j;
           }
        }
        swap=arr[st];
        arr[st]=arr[ind];
        arr[ind]=swap;

        st++;
        max=arr[st];
        ind=st;
    }
    return ;
}

int main()
{
    int arr[7]={5,1,3,4,2,10,8};
    int size=7;

    Sorting_Descending(arr,&size);

    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }


    return 0;
}

/***********************************************************/


// reverse number digits

void Reverse_digits (int *num)
{
    int new_n=0;
    int old_n=*num;
    int rem;
    while(old_n)
    {
        rem=old_n%10;
        old_n=old_n-rem;
        old_n=old_n/10;
        new_n=new_n*10+rem;
    }
    *num=new_n;
}

int main()
{
    int arr[7]={5,1,3,4,2,10,8};
    int size=1235;
    printf("%d\t",size);
    Reverse_digits(&size);


        printf("%d\t",size);



    return 0;
}

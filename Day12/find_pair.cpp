bool findPair(int a[], int size, int n){
    sort(a,a+size);
    int i=0,j=0;
    while(i<size&&j<size)
    {
        if(a[j]-a[i]==n&&i!=j)return 1;
        else if(a[j]-a[i]<n)j++;
        else i++;
    }
    return 0;
}
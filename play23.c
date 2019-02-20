void main()
{
    int n,i,rem,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
    }
    
    }
    printf("%d",sum);
    
}

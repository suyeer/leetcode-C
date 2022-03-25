int reverse(int x){

    long rev=0;
    while(x!=0)
    {
        if((x%10+rev*10+2147483648)<0||(x%10+rev*10)>2147483648)
            return 0;
        else
        {
            rev=(long)x%10+rev*10;
            x=(x-x%10)/10;
        }
    }
    
    return rev;
}
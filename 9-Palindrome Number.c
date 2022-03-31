

bool isPalindrome(int x){
    
    bool isTure=true;

    if(x<0)
        return false;
    if(x>=0&&x<=9)
        return true;
    
    int s[10];
    int i=0;
    while(x!=0)
    {
        s[i++]=x%10;
        x=(x-x%10)/10;
    }
    
    for(int j=0;j<=i-1;j++)
        if(s[j]!=s[i-1-j])
            return false;
    return isTure;
    
}
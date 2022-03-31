
int myAtoi(char * s){
    long inter=0;
    int i=0;
    int flag=0;
    int sign=1;
    
    while(s[i]!='\0')
    {
        if(s[i]==' '&&i>0&&s[i-1]!=' ')
            return 0;
            
        if(s[i]=='-'||s[i]=='+'&&s[i+1]>='0'&&s[i+1]<='9'&&flag==0)
        {
            if(s[i]=='-')
                sign=-1;
            if(s[i]=='+')
                sign=1;
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            if(i>=2&&s[i-2]!=' '&flag==0)
                return 0;
            
            if((inter*10+s[i]-'0')*sign>=2147483648)
                return 2147483647;
            else if(2147483648+sign*(inter*10+s[i]-'0')<0)
                return -2147483648;
            else
                inter=inter*10+s[i]-'0';
            if(s[i+1]=='\0'||s[i+1]>'9'||s[i+1]<'0')
                return inter*sign;
            flag++;
        }
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='.')
            return 0;
        i++;
    }
    
    return inter*sign;

}
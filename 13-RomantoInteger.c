

int romanToInt(char * s){
    int sum=0;
    while(*s!='\0')
    {
        if(s[0]=='I')
        {
            if(s[1]=='V')
            {
                sum=sum+4;
                s++;
                s++;
            }else if(s[1]=='X')
            {
                sum=sum+9;
                s++;
                s++;
            }else
            {
                sum=sum+1;
                s++;
            }
        }
        if(s[0]=='V')
        {
            sum=sum+5;
            s++;
        }
        if(s[0]=='X')
        {
            if(s[1]=='L')
            {
                sum=sum+40;
                s++;
                s++;
            }else if(s[1]=='C')
            {
                sum=sum+90;
                s++;
                s++;
            }else
            {
                sum=sum+10;
                s++;
            }
        }
        if(s[0]=='L')
        {
            sum=sum+50;
            s++;
        }
        if(s[0]=='C')
        {
            if(s[1]=='D')
            {
                sum=sum+400;
                s++;
                s++;
            }else if(s[1]=='M')
            {
                sum=sum+900;
                s++;
                s++;
            }else
            {
                sum=sum+100;
                s++;
            }
        }
        if(s[0]=='D')
        {
            sum=sum+500;
            s++;
        }
        if(s[0]=='M')
        {
            sum=sum+1000;
            s++;
        }
            
    }

    return sum;
}
char * convert(char * s, int numRows){
    char zigzag[numRows][1000];
    
    for(int o=0; o<numRows;o++)
        for(int u=0;u<1000;u++)
            zigzag[o][u]='0';
    
    // zigzag[0][0]=s[0];
    int i=0;
    int j=0;
    int down=0;
    int up;
    
    if(numRows == 1)
        return s;
    while(s[i]!='\0')
    {
        while(down<=numRows-1&&s[i]!='\0')
        {
            zigzag[down][j]=s[i++];
            down++;
        }
        down=0;
        j++;
        up=numRows-2;
        while(up>0&&s[i]!='\0')
        {
            zigzag[up][j]=s[i++];
            up--;
        }
        j++;
    }

    if(i<=numRows)
        return s;
    char *con=(char*)malloc(sizeof(char)*(i+1));
    int m=0;
    // char match;
    for(int n=0;n<j;n=n+2)
    {
        // match=zigzag[0][n];
        if(zigzag[0][n]>='A'&&zigzag[0][n]<='Z'||zigzag[0][n]>='a'&&zigzag[0][n]<='z'||zigzag[0][n]==','||zigzag[0][n]=='.')
        {
            con[m++]=zigzag[0][n];
        }
    }
    for(int n=1; n<numRows-1;n++)
    {
        for(int k=0;k<j;k++)
        {
            // match = zigzag[n][k];
            if(zigzag[n][k]>='A'&&zigzag[n][k]<='Z'||zigzag[n][k]>='a'&&zigzag[n][k]<='z'||zigzag[n][k]==','||zigzag[n][k]=='.')
            {
                con[m++]=zigzag[n][k];
            }
        }
    }
    for(int n=0;n<j;n=n+2)
    {
        // match = zigzag[numRows-1][n];
        if(zigzag[numRows-1][n]>='A'&&zigzag[numRows-1][n]<='Z'||zigzag[numRows-1][n]>='a'&&zigzag[numRows-1][n]<='z'||zigzag[numRows-1][n]==','||zigzag[numRows-1][n]=='.')
        {
            con[m++]=zigzag[numRows-1][n];
        }
    }
    con[m]='\0';
    // m=0;
    
    return con;
}
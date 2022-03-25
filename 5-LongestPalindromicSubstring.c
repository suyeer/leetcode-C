int charCompare(char * s, int length)
{
    // printf("charCompare:\n");
    int compare=1;
    for(int i=0;i<=length/2;i++)
    {
        if(s[i]!=s[length-i])
        {
            compare=0;
            return compare;
        }
    }
    // printf("substr is %s, ",s);
    return compare;
}

char * longestPalindrome(char * s){

    int left=0;
    int right=0;
    int length=0;
    int index=0;
    int longindex;

    // printf("longestPalindrome:\n");
    
    while(s[left]!='\0')
    {
        index=charCompare(&s[left],right-left);
        // printf("left is %d, right is %d.\n", left, right);
        if(index==1)
        {
            if(right-left>length)
            {
                length=right-left;
                longindex=left;
                // printf("length is %d, longindex is %d\n", length, longindex);
            }
        }
        right++;
        if(s[right]=='\0')
        {
            left++;
            if(left+length<right)
                right=left+length;
            else
                break;
        }
    }
    
    // char*sub = "s";
    char*sub=(char*)malloc(sizeof(char)*(length+2));
    if(length==0)
    {
        sub[0]=s[0];
        sub[1]='\0';
        return sub;
    }
    for(int i=0;i<=length;i++)
    {
        sub[i]=s[longindex+i];
    }
    sub[length+1]='\0';
    return sub;
}
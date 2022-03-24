int charCompare(char * s, int length, char c)
{
    int compare=0;
    for(int i=0;i<length;i++)
    {
        if(s[i]==c)
            compare=i+1;
    }
    return compare;
}

int lengthOfLongestSubstring(char * s){

    int left=0;
    int right=0;
    int length=0;
    int index=0;
    //sliding window: repeat char or '\0'
    while(s[right]!='\0')
    {
        right++;
        index=charCompare(&s[left],right-left,s[right]);
        if(index>0)
        {
            if(right-left>length)
                length=right-left;
            left=left+index;
            right=left;
        }
    }
    if(right-left>length)
        length=right-left;
    return length;
}
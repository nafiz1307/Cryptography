#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,key;
    char arr[100],ch;
    char chk;
    printf("Enter the Text\n");
    gets(arr);
    len=strlen(arr);
    printf("Enter key\n");
    scanf("%d",&key);
    printf("Do You Want To Encrypt or Decrypt?\n");
    printf("For Encryption press e \nFor Decryption press d \n");
    scanf(" %c",&chk);
    if(chk=='e')
    {
        for(i=0; i<len; i++)
        {
            if(arr[i]>='A' && arr[i]<='Z')
        {
            ch=arr[i]-'A';
            ch=(ch+key)%26;
            printf("%c",ch+'A');
        }
        else if(arr[i]>='a' && arr[i]<='z')
        {
            ch=arr[i]-'a';
            ch=(ch+key)%26;
            printf("%c",ch+'a');
        }
        }
    }
    else if(chk=='d')
    {
        for(i=0; i<len; i++)
        {
            if(arr[i]>='A'&& arr[i]<='Z')
            {
                ch=arr[i]-'A';
                if(ch-key>=0)
                {
                    ch=(ch-key)%26;
                }
                else
                {
                    ch=ch+26-key;
                }
                printf("%c",ch+'A');
            }
            else if(arr[i]>='a'&& arr[i]<='z')
            {
                ch=arr[i]-'a';
                if(ch-key>=0)
                {
                    ch=(ch-key)%26;
                }
                else
                    ch=ch+26-key;
                {
                    printf("%c",ch+'a');
                }
            }
        }
    }
}

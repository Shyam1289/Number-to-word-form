/*documentation required!!!*/
#include <stdio.h>
int hunds(char *);
int main(){
    printf("Documentation required!!!\n");
    char str[13],num_str[13]={'0','0','0','0','0','0','0','0','0','0','0','0','\0'};
    printf("Please enter the number:\n");
    scanf("%s",str);
    if(str[0]=='-'){
        printf("%s ","minus");
        str[0]='0';
    }
    int i=0,dig=0;
    while(str[i]!='\0'){
        i++;dig++;
    }
    for(int i=0;i<dig;i++){
        num_str[i]=str[dig-1-i];
    }
    int iter=((dig%3==0)?dig/3:dig/3+1);
    char *ptrtohunds=&num_str[3*iter-3];
    int counter=iter,orig_num=0,res;
    while(counter>=1){
        res=hunds(ptrtohunds);
        orig_num+=res;
        ptrtohunds-=3;
        if(res){
            switch(counter){
                case 1:
                break;
                case 2:
                printf("thousand ");
                break;
                case 3:
                printf("million ");
                break;
                case 4:
                printf("billion ");
                break;
            }
        }
        counter--;
    }
    if(orig_num==0){
        printf("Zero");
    }
    printf("\n");
    printf("Documentation required!!!\n");
    return 0;
}
int hunds(char *ptr){
    ptr+=2;
    int res=(*ptr-'0')*100+(*(ptr-1)-'0')*10+(*(ptr-2)-'0');
    switch(*ptr-'0'){
        case 0:
            break;
        case 1:
            printf("one hundred ");
            break;
        case 2:
            printf("two hundred ");
            break;
        case 3:
            printf("three hundred ");
            break;
        case 4:
            printf("four hundred ");
            break;
        case 5:
            printf("five hundred ");
            break;
        case 6:
            printf("six hundred ");
            break;
        case 7:
            printf("seven hundred ");
            break;
        case 8:
            printf("eight hundred ");
            break;
        case 9:
            printf("nine hundred ");
            break;
    }
    int n;
    n=(*(ptr-1)-'0')*10+(*(ptr-2)-'0');
    port:
    if(n<20){
        switch(n){
            case 0:
            break;
            case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
            case 10:
            printf("ten ");
            break;
            case 11:
            printf("eleven ");
            break;
            case 12:
            printf("twelve ");
            break;
            case 13:
            printf("thirteen ");
            break;
            case 14:
            printf("fourteen ");
            break;
            case 15:
            printf("fifteen ");
            break;
            case 16:
            printf("sixteen ");
            break;
            case 17:
            printf("seventeen ");
            break;
            case 18:
            printf("eighteen ");
            break;
            case 19:
            printf("nineteen ");
            break;
        }
    }
    else{
        switch(*(ptr-1)-'0'){
            case 2:
            printf("twenty ");
            break;
            case 3:
            printf("thirty ");
            break;
            case 4:
            printf("forty ");
            break;
            case 5:
            printf("fifty ");
            break;
            case 6:
            printf("sixty ");
            break;
            case 7:
            printf("seventy ");
            break;
            case 8:
            printf("eighty ");
            break;
            case 9:
            printf("ninety ");
            break;
        }
        n=(*(ptr-2)-'0');
        goto port;
    }
    return res;
}

/*
Project : Given a number in decimal form(-ve or +ve) converting it to corresponding word form.
Contributed by : Shyam Sunder
*/
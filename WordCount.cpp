#include <stdio.h>
#include <stdlib.h>
#define N 10
#pragma warning(disable:4996)；
int main(int argc, char* argv[]){
    char n[N];//c或者w
    int charnumber = 0;//字符数
    int wordnumber = 1;//单词数
    char filename[10];//文件名
    char ch;
    FILE* fp;
    scanf("%s%s",n, filename);
    if (n[0] == 'c'){//输入c
        if ((fp = fopen(filename, "r")) == 0){//读取失败
                printf("文件读取失败");
                exit(0);
            }
            while ((ch = fgetc(fp)) != EOF)
                charnumber++;    //字符个数
            printf("字符数：%d", charnumber);
        }
        if (n[0] == 'w'){//输入w
            if ((fp = fopen(filename, "r")) == 0){//读取失败
                printf("文件读取失败");
                exit(0);
            }
            while ((ch = fgetc(fp)) != EOF){
                if (ch == ' ' || ch == ','||ch==10)
                    wordnumber++;   //单词个数
            }
            printf("单词数：%d", wordnumber);
        }
    }
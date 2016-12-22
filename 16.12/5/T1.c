/*
 * 创建日期： 2016/12/5
 * 最后修改： 2016/11/5
 * 作者： zuliang
 * 描述:  将输入的字母大小写状态转换，其他字符不变。
 *
 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int c;
    while( (c = getchar()) != EOF){
        if( 'A' <= c && c <= 'Z'){
            putchar(tolower(c));
        }else
        if( 'a' <= c && c <= 'z' ){
            putchar(toupper(c));
        }else{
            putchar(c);
        }
    }
    return 0;
}

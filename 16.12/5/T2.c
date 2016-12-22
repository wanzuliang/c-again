/* 创建日期： 2016/12/5
 * 最后修改： 2016/11/5
 * 作者： zuliang
 * 描述:  输入十进制正整数数字,输出八进制，十六进制。
 *
 */

 #include <stdio.h>
 #include <stdlib.h>

int main(int argc, char const *argv[]) {
    int sum = 0;
    printf("十进制为：");
    scanf("%d", &sum);

    printf("八进制 ： 0%o\n", sum);
    printf("十六进制: 0X%x\n", sum);

    return 0;
 }

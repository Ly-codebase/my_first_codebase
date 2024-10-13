#include<stdio.h>
#include<stdlib.h>
#include "my_math.h"
//以下是主函数 
int main() {
	printf("********************************\n");
	printf("------ 欢迎来到计算小世界！------\n");
	printf("********************************\n");
	printf("请您输入两个整数：\n");
    char inputStra[100]; // 假设输入的数字不会超过99位（加上可能的负号和终止符） 
    char inputStrb[100];
    int integerValuea,integerValueb;  
    // 提示用户输入一个数字  
    printf("请输入两个整数（可以是多位数）: ");  
    // 使用%s格式说明符读取一个字符串  
    scanf("%99s", inputStra); // 使用%99s来限制读取的字符数，防止缓冲区溢出 
    scanf("%99s", inputStrb); 
    // 使用atoi函数将字符串转换为整数   
    integerValuea = atoi(inputStra);
    integerValueb = atoi(inputStrb);
    printf("两数之和为：%d\n",addition(integerValuea,integerValuea));
    printf("两数之差为：%d\n",subtraction(integerValuea,integerValuea));
    printf("两数之积为：%d\n",multiply(integerValuea,integerValuea));
    printf("两数之商为：%d\n",divide(integerValuea,integerValuea));
    printf("两数之模为：%d\n",Mod(integerValuea,integerValuea));
	return 0;
}

/* CH03_platinum.c -- your weight platinum */
#include<stdio.h>

int main(void)
{
    float weight;	/* 你的体重		*/
    float value;	/* 相等重量的白金价值	*/
    
    printf("Are you worth your weight in platinum?\n ");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /* 获取用户输入				*/
    scanf("%f",&weight);
    /* 假设白金的价格是每盎司1700美元	*/
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platnum is worth $%.2f \n",value);
    printf("You are easily worth that! If platnum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;   
}

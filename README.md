# 2022c
資傳一甲 程式設計 的程式碼

# Week01
放假(中秋節)

# Week02

# Week03

# Week04

# Week05

# Week06

##step01-0
考試九九乘法表 考前複習 考後檢討同學出錯的狀況
```cpp
#include <stdio.h>
int main()
{
        for(int a=1; a<=9; a++)
        {
                for(int b=1; b<=9; b++)
                {
                        printf("%d*%d=%2d",b,a,a*b);
                }
                printf("\n")
        }
}
```

#step01-1
畫星星-金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```

#step02-1
暴力迴圈法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a,b,ans;
    scanf("%d %d",&a,&b);

    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}

#step02-2
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a,b,c;
    scanf("%d %d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
##step03-1
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立,所什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西,幾乎都成立\n");
}
```

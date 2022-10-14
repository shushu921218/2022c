# 2022c
資傳一甲 程式設計 的程式碼

#week01
放假(中秋節)

#week02

#week03

#week04

#week05

#week06
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

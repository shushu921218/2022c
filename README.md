# 2022c
資傳一甲 程式設計 的程式碼

# Week01
放假(中秋節)

# Week02

# Week03

# Week04

# Week05

# Week06

## step01-0
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

## step01-1
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

## step02-1
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
```
## step02-2
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
## step03-1
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

# Week07
## step01-1
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);

    long long int a=1234567812345678;
    printf("%lld\n",a);
}
```
## step02-1
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if (a%i==0 && b%i==0) ans = i;
    }
    printf("答案是:%lld\n",ans);
}
```
## step02-2
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld",&a,&b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
## step03-1
#include <stdio.h>
int main()
{
    int n=1234;

    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
# Week08
## step01-1
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if(k<=n-i) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
```
## step02-1
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
        printf("\n");
        i++;
	}
}
```
## step02-2
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0)bad=1;
    }
    if(bad==0) printf("%d是質數(沒有壞掉)",n);
    else printf("%d不是質數(早就壞掉了)",n);
}
```
## step02-3
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    for(int n=2;n<=a;n++){

        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0) bad=1;
        }
        if(bad==0) printf("%d ",n);
    }
}
```

# Week10
## step01-1
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};

    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```

## step02-1
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
}
```

# Week11
## step01-1
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);

    int temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d\n",a,b);
}
```

## step01-2
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```

## step02-1
```cpp
#include <stdio.h>

int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
```

## step02-2
```cpp
#include <stdio.h>

int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
```

## step03-1
```cpp
#include <stdio.h>

int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int k=0;k<10-1;k++){
    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    }
}
```

# Week12
## step01-1
```cpp
#include <stdio.h>
int a[5]={5,4,3,2,1};
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
```

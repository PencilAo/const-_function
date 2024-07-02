#define _CRT_SECURE_NO_WARNINGS
//const
//int main()
//{
//    //int num = 10;
//    //num = 20;
//    //printf("%d", num);//打印20
//    const int num = 10;
//    //num = 20; //报错，num不能改
//    int* p = &num;
//    *p = 20;//通过地址就可以改 ,如果在 int* p 前加const，那就不能改了
//    const int* p = &num;
//    const修饰指针变量
//    1. const放在*的左边   const int* p = &num == int const* p = &num;
//       p指向的对象不能通过p来改变了，但是p变量本身的值时可以改变 如p存另外一个变量的地址
//       *p = 20;   //  error
//       p = &n;    //  ok
//    2. const放在*的右边   int* const p = &num
//       p指向的对象是可以通过p来改变，但是不能修改p指向的对象
//       p = &n;    //  error
//       *p = 20;   //  ok
//    3. const即放在*的左边，又const放在*的右边  const int* const p = &num;
//       *p = 20;   //error
//       p = &n;    //error
//    printf("%d", num);
//    return 0;
//}
//int main()
//{
//    int n, i,j;
//    scanf("%d", &n);
//    int arr[500];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    int all = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            all++;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i]%2 == 1 && count<all-1)
//        {
//            printf("%d,", arr[i]);
//            count++;
//        }
//        else if (arr[i] % 2 == 1 && count == all - 1)
//        {
//            printf("%d", arr[i]);
//        }
//    }
//    return 0;
//}
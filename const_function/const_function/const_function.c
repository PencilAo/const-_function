#define _CRT_SECURE_NO_WARNINGS
//const
//int main()
//{
//    //int num = 10;
//    //num = 20;
//    //printf("%d", num);//��ӡ20
//    const int num = 10;
//    //num = 20; //����num���ܸ�
//    int* p = &num;
//    *p = 20;//ͨ����ַ�Ϳ��Ը� ,����� int* p ǰ��const���ǾͲ��ܸ���
//    const int* p = &num;
//    const����ָ�����
//    1. const����*�����   const int* p = &num == int const* p = &num;
//       pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵʱ���Ըı� ��p������һ�������ĵ�ַ
//       *p = 20;   //  error
//       p = &n;    //  ok
//    2. const����*���ұ�   int* const p = &num
//       pָ��Ķ����ǿ���ͨ��p���ı䣬���ǲ����޸�pָ��Ķ���
//       p = &n;    //  error
//       *p = 20;   //  ok
//    3. const������*����ߣ���const����*���ұ�  const int* const p = &num;
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
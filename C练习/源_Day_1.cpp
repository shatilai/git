#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//    int input = 0;
//        printf("嗨，小猫娘\n");
//        printf("你是猫娘吗(1/0)?\n");
//        scanf_s("%d", &input);
//        
//        if (input == 1)
//        {
//            printf("嗯，你是小猫娘！\n");
//        }
//        else
//        {
//            printf("嗯？你不是小猫娘？\n");
//        }
//    return 0;
//}
//int main()
//{
//    int line = 0;
//    printf("你是猫娘\n");
//
//    while (line < 1000)
//    {
//        printf("我是猫娘？%d\n",line);
//        line++;
//    }
//
//    if (line >= 1000)
//    {
//        printf("我是猫娘！\n");
//    }
//    else
//    {
//        printf("我是猫娘？！\n");
//            
//    }
//    return 0;
//}




//int main() 
//{
//   
//   int score ;
//
//    printf("请输入成绩：\n");
//
//    // 在这里写你的判断逻辑
//
//    if (scanf_s("%d", &score) != 1) 
//    {
//        printf("输入不合法\n");
//        return 0;
//    }
//    if (score > 100 || score < 0) 
//    {
//        printf("成绩超出范围\n");
//    }
//    else if (score>=90)
//    {
//        printf("A \n");
//    }
//    else if (score>=80)
//    {
//        printf("B \n");
//    }
//    else if (score >= 70)
//    {
//        printf("C \n");
//    }
//    else if (score >= 60)
//    {
//        printf("D \n");
//    }
//    else
//    {
//        printf("F \n");
//    }
//  
//
// /*   scanf_s("%d", &score);
//
//    printf("%d",score);*/
//
//    return 0;
//}


//int main()
//{
//	int x = (1, 0);
//
//	if (1, 0)
//		printf("真");
//	else
//		printf("假");
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int result = scanf_s("%d", &score);
//	printf("%d \n" ,result);
//	return 0;
//}


//int main(void) {
//    int score;
//
//    int count[5] = { 0 };
//
//    printf("请输入成绩（输入 -1 结束）：\n");
//
//    while (1/* 你想写什么条件？ */) {
//
//        //printf("程序结束1\n");//测试用
//
//        //while (scanf_s("%d", &score))循环中应该让scanf_s("%d", &score)≠ - 1吧不然输错了程序就直接结束了，
//
//        /* 这里怎么读入？ */
//
//        if (scanf_s("%d", &score) != 1) {
//            break;   // 读不到整数，直接结束
//        }
//
//        //printf("程序结束2\n");//测试用
//
//        if (score == -1) {
//            break;/* 怎么办？ */  //主动结束
//        }
//
//        if (score>100 || score < 0/* 范围检查 */) {
//            printf("成绩超出范围\n\n");
//        }
//        else if (score >= 90) {
//            printf("优秀\n\n");
//
//            count[0]++;
//        }
//        else if (score >= 80) {
//            printf("良好\n\n");
//
//            count[1]++;
//        }
//        else if (score >= 70) {
//            printf("中等\n\n");
//
//            count[2]++;
//        }
//        else if (score >= 60) {
//            printf("及格\n\n");
//
//            count[3]++;
//        }
//        else {
//            printf("不及格\n\n");
//
//            count[4]++;
//        }
//    }
//
//    const char* gradeName[5] = { "优秀", "良好", "中等", "及格", "不及格" };
//
//    for (int i = 0;i < 5;i++)
//    {
//        printf("%s：%d人\n",gradeName[i],count[i]);
//  }
//
//    printf("程序结束\n");
//    return 0;
//}



   /* int main (void)
    {
        int arr[3] = { 10, 20, 30 };
        for (int i = 0; i < 3; i++) {
            printf("arr[%d] 地址 = %p\n", i, &arr[i]);
        }
        return 0;
    }*/

//int main(void)
//{
//    char c = 'A';
//    printf("%zu\n", sizeof("AB"));
//    printf("%zu\n", sizeof(""));
//    return 0;
//}



//int main()
//{
//    int s = 0;
//
//    int score = 0;
//
//    int count[5] = { 0 };
//
//    const char* gradeName[5] = { "优秀", "良好", "中等", "及格", "不及格" };
//
//
//    printf("请输入成绩（输入 -1 结束）：\n");
//
//    int lvl =get_level(s);
//
//    if (lvl != 1) {
//        printf("成绩超出范围\n\n");
//    }
//    else if (lvl == count[lvl]) {
//        printf("%s\n\n", gradeName[lvl]);
//        count[lvl]++;
//    }
//      for (int i = 0;i < 5;i++)
//    {
//        printf("%s：%d人\n",gradeName[i],count[i]);
//  }
//      return 0;
//}





//比较烂的一版
//int get_level(int score) {
//
//        if (score > 100 || score < 0/* 范围检查 */) {
//            score = -1;
//        }
//        else if (score >= 90) {
//          
//
//            score = 0;
//        }
//        else if (score >= 80) {
//        
//
//            score = 1;
//        }
//        else if (score >= 70) {
//         
//
//            score = 2;
//        }
//        else if (score >= 60) {
//       
//
//            score = 3;
//        }
//        else {
//          
//
//            score = 4;
//        }
// 
//
//    return score;
//}
//
//
//
//
//int main(void) {
//    int score;
//    int count[5] = { 0 };
//    const char* gradeName[5] = { "优秀", "良好", "中等", "及格", "不及格" };
//
//    printf("请输入成绩（输入 -1 结束）：\n");
//
//    while (1) {
//        if (scanf_s("%d", &score) != 1) break;
//        if (score == -1) break;
//        int lvl = get_level(score);   /* 读一个，判一次 */
//        if (lvl == -1) {
//            printf("%d成绩超出范围请输入0-100的整数\n",score);
//            continue;                 /* 跳过统计 */
//        }
//        printf("%s\n\n", gradeName[lvl]);
//        count[lvl]++;                 /* 一句代替五个分支 */
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%s：%d人\n", gradeName[i], count[i]);
//    }
//    printf("程序结束\n");
//    return 0;
//}






//int get_level(int score) {
//
//
//    if (score > 100 || score < 0) return -1;   // 不合法，直接走人
//    if (score >= 90) return 0;
//    if (score >= 80) return 1;
//    if (score >= 70) return 2;
//    if (score >= 60) return 3;
//    return 4;
//}
//
//
//int main(void) {
//
//    int sum = 0;
//    int total = 0;
//
//    int score;
//    int count[5] = { 0 };
//    const char* gradeName[5] = { "优秀", "良好", "中等", "及格", "不及格" };
//
//    printf("请输入成绩（输入 -1 结束）：\n");
//
//    while (1) {
//        if (scanf_s("%d", &score) != 1) break;
//        if (score == -1) break;
//        int lvl = get_level(score);   /* 读一个，判一次 */
//        if (lvl == -1) {
//            printf("%d：成绩超出范围请输入0-100的整数\n", score);
//            continue;                 /* 跳过统计 */
//        }
//        sum = sum + score;
//        total++;
//
//        printf("%s\n\n", gradeName[lvl]);
//        count[lvl]++;                 /* 一句代替五个分支 */
//    }
//
//    printf("平均分:%.2f\n\n", (float)sum / total);
//
//    for (int i = 0; i < 5; i++) {
//        printf("%s：%d人\n", gradeName[i], count[i]);
//    }
//    printf("程序结束\n");
//    return 0;
//}




//int main()
//{
//    int a = 1;
//    while (a <= 100)
//    {
//        if (a % 2 == 1)
//        {
//            printf("%d \n", a);
//        }
//        a += 2;
//    }
//    return 0;
//}
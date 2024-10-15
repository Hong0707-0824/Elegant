// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

struct student {
    string name;
    int score;

};
struct teacher
{
    string name;
    struct student sarray[5];

};
void namein(struct teacher tarray[], int len) {
    string name = "ABCDE";
    for (int i = 0; i < len; i++) {
        tarray[i].name = "teacher_";
        tarray[i].name += name[i];
    for (int j = 0; j < 5; j++) {
            tarray[i].sarray[j].name = "student_";
            tarray[i].sarray[j].name += name[j];
            int random = rand() % 61 + 40;
            tarray[i].sarray[j].score = random;
        }
    }
}

void nameout(teacher tarray[],int len) {
        for (int i = 0; i < len; i++) {
            cout << "老师名字是：" << tarray[i].name << endl;
            for (int j = 0; j < len; j++) {
                cout << "学生是：" << tarray[i].sarray[j].name <<"得分是:"<<tarray[i].sarray[j].score<< endl;
            
            }
        
        }
    
    }
int main()
{
    srand((unsigned int) time(NULL));
    struct teacher tarray[5]; 
    int len = sizeof(tarray) / sizeof(tarray[0]);
    namein(tarray, len);
    nameout(tarray, len);
    return 0;

}
   

   
    




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

/*
 * decode.cc
 *
 *  Created on: 2017��5��26��
 *      Author: hello_chenchen
 */
#include <iostream>

using namespace std;

/**
 *
����
Catcher��MCA�����鱨Ա��������ʱ���ֵй�����һЩ�ԳƵ��������ͨ�ţ���������ЩABBA��ABA��A��123321������������ʱ���ڿ�ʼ�����ʱ����һЩ�޹ص��ַ��Է�ֹ����ƽ⡣����������б仯 ABBA->12ABBA,ABA->ABAKK,123321->51233214������Ϊ�ػ�Ĵ�̫���ˣ����Ҵ��ڶ��ֿ��ܵ������abaaab�ɿ�����aba,��baaab�ļ�����ʽ����Cathcer�Ĺ�����ʵ����̫���ˣ���ֻ������Ը������������ܰ�Catcher�ҳ������Ч���봮��
��������:
ABBA
12ABBA
A
ABAKK
51233214
abaaab
�������:
4
4
1
3
6
5
����ʹ�����ṩ�Ŀ⺯����
ʵ�ֽӿڣ�ÿ���ӿ�ʵ��1������������
voidGetCipherMaxLen(characCipherContent[],int *piCipherLen)��
acCipherContent��һ���ַ������鳣�������ο�������
piCipherLenΪ�����Ч���봮����󳤶ȣ�
��Ŀ�������2���ο�����������������ִ�б�д��



֪ʶ�� �ַ���
����ʱ������  10M
�ڴ�����    128
����
����һ���ַ�
���
�����Ч����
��������    ABBA
�������    4
 */
void GetCipherMaxLen(char acCipherContent[], int *piCipherLen)
{
    cout << acCipherContent << endl;
    *piCipherLen = 1;
}

int main(int argc, char **argv) {

    char* arr = new char;
    cin >> arr;
//    cin.get(arr);
    int val = 0;
    GetCipherMaxLen(arr, &val);
    cout << val << endl;
    return 0;
}



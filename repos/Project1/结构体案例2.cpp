//#include<iostream>
//
//using namespace std;
//
//// 1������Ӣ�۵Ľṹ��
//struct Hero
//{
//	// ����
//	string name;
//	// ����
//	int age;
//	// �Ա�
//	string sex;
//};
//
//// ð������
//void heroSort(struct Hero heroArray[], int len)
//{
//	Hero h;
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			if (heroArray[j].age>heroArray[j+1].age)
//			{
//				h = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = h;
//			}
//		}
//	}
//}
//
//// ��ӡ������Ϣ
//void printInfo(struct Hero hArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "\t������" << hArray[i].name << " ���䣺" << hArray[i].age << " �Ա�" << hArray[i].sex << endl;
//	}
//}
//
//
//int	main()
//{
//	// 2������Ӣ�����顢�������Ǹ�ֵ
//	struct Hero heroArray[5] = { {"����",23,"��"},
//								 {"����",22,"��"},
//								 {"�ŷ�",20,"��"},
//								 {"����",21,"��"},
//								 {"����",18,"Ů"}
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	
//	cout << "����ǰ��" << endl;
//	printInfo(heroArray, len);
//
//	cout << "---------------------------------" << endl;
//	// 3��ͨ��ð��������㷨���������е�Ӣ�۰���������������
//	cout << "�����" << endl;
//	heroSort(heroArray, len);
//	// 4����ӡ�����Ľ��
//	printInfo(heroArray,len);
//	return 0;
//}
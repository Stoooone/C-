//#include<iostream>
//
//using namespace std;
//
//// 1、创建英雄的结构体
//struct Hero
//{
//	// 姓名
//	string name;
//	// 年龄
//	int age;
//	// 性别
//	string sex;
//};
//
//// 冒泡排序
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
//// 打印数组信息
//void printInfo(struct Hero hArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "\t姓名：" << hArray[i].name << " 芳龄：" << hArray[i].age << " 性别：" << hArray[i].sex << endl;
//	}
//}
//
//
//int	main()
//{
//	// 2、创建英雄数组、并给他们赋值
//	struct Hero heroArray[5] = { {"刘备",23,"男"},
//								 {"关羽",22,"男"},
//								 {"张飞",20,"男"},
//								 {"赵云",21,"男"},
//								 {"貂蝉",18,"女"}
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	
//	cout << "排序前：" << endl;
//	printInfo(heroArray, len);
//
//	cout << "---------------------------------" << endl;
//	// 3、通过冒泡排序的算法，将数组中的英雄按照年龄升序排序
//	cout << "排序后：" << endl;
//	heroSort(heroArray, len);
//	// 4、打印排序后的结果
//	printInfo(heroArray,len);
//	return 0;
//}
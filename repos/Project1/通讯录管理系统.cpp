/*
* ϵͳ����
* ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�
* ���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ
* ϵͳ����Ҫʵ�ֵĹ������£�
* 1�������ϵ�ˣ�
*				��ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
* 2����ʾ��ϵ�ˣ�
*				��ʾͨѶ¼��������ϵ����Ϣ
* 3��ɾ����ϵ�ˣ�
*				������������ɾ��ָ����ϵ��
* 4��������ϵ�ˣ�
*				���������鿴ָ����ϵ��
* 5���޸���ϵ�ˣ�
*				�������������޸�ָ����ϵ��
* 6�������ϵ�ˣ�
*				���ͨѶ¼��������Ϣ
* 7���˳�ͨѶ¼
*/

#include<iostream>
using namespace std;

// 1�������ϵ�˽ṹ�壨�������Ա����䡢��ϵ�绰����ͥסַ��
struct addressBook
{
	// ����
	string name;
	// �Ա�
	string sex;
	// ����
	unsigned short age=0;
	// �绰
	string phoneNumber;
	// ��ͥסַ
	string address;
};

// 3.1 �����ϵ��
void addContact(struct addressBook * ab, int len)
{
	for (int i = 0; i <= len; i++)
	{
		if (i==len)
		{
			cout << "���ʧ�ܣ���������������" << endl;
			return;
		}
		if (ab->name == "") {
			// name
			cout << "������������";
			cin >> ab->name;

			// sex
			bool isSex = true;
			do
			{
				unsigned short sex = 0;
				cout << "��ѡ���Ա�(����1Ϊ�У�����2ΪŮ)��_\b";
				cin >> sex;
				switch (sex)
				{
				case 1:
					ab->sex = "��";
					isSex = false;
					break;
				case 2:
					ab->sex = "Ů";
					isSex = false;
					break;
				default:
					cout << "������������!" << endl;
					isSex = true;
					break;
				}
			} while (isSex);

			// age
			cout << "���������䣺";
			cin >> ab->age;

			// phoneNumber
			cout << "������绰���룺";
			cin >> ab->phoneNumber;

			// address
			cout << "�������ͥ��ַ:";
			cin >> ab->address;
			cout << "��ӳɹ�" << endl;
			return;
		}
		else
		{
			ab++;
			continue;
		}
	}
}
// 3.2 ��ʾ��ϵ��
void showContact(struct addressBook * ab,int len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (ab->name != "")
		{
			cout << "������" << ab->name << " �Ա�" << ab->sex << " ���䣺" << ab->age << " ��ϵ�绰��" << ab->phoneNumber << " ��ͥ��ַ��" << ab->address << endl;
			ab++;
		}
		else
		{
			continue;
		}
	}
}
int main()
{		
	// 2��������ϵ�����飨����1000��
	struct addressBook ab[1000] = {};
	int len = sizeof(ab) / sizeof(ab[0]);
	// 3��ʵ�ֹ��ܣ�
	char choose;
	do
	{
		cout << "**************************\n"
			<< "*****  1.�����ϵ��  *****\n"
			<< "*****  2.��ʾ��ϵ��  *****\n"
			<< "*****  3.ɾ����ϵ��  *****\n"
			<< "*****  4.������ϵ��  *****\n"
			<< "*****  5.�޸���ϵ��  *****\n"
			<< "*****  6.�����ϵ��  *****\n"
			<< "*****  0.�˳�ͨѶ¼  *****\n"
			<< "**************************\n";
		cout << "����������ѡ��";
		cin >> choose;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		switch (choose)
		{
		case '1':	// �����ϵ��
			addContact(ab, len);
			break;
		case '2':	// ��ʾ��ϵ��
			showContact(ab, len);
			break;
		case '3':	// ɾ����ϵ��
			cout << "ɾ����ϵ��" << endl;
			break;
		case '4':	// ������ϵ��
			cout << "������ϵ��" << endl;
			break;
		case '5':	// �޸���ϵ��
			cout << "�޸���ϵ��" << endl;
			break;
		case '6':	// �����ϵ��
			cout << "�����ϵ��" << endl;
			break;
		case '0':	// �˳�ͨѶ¼
			cout << "�˳�" << endl;
			return 0;
		default:
			cout << "���������������������룡" << endl;
			break;
		}
	} while (true);

	return 0;
}
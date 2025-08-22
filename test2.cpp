#include <iostream>
using namespace std;

void setPotion(int count, int *p_HPPotion, int *p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
}

int main()
{
	const int size = 4;
	int status[size] = {0};

	//int status[0] = 0; //HP
	//int status[1] = 0; //MP
	//int status[2] = 0; //���ݷ�
	//int status[3] = 0; //����

	cout << "HP���� �Է����ּ��� : ";
	cin >> status[0];
	cout << "HP : " << status[0] << endl;

	while (status[0] <= 50)
	{
		cout << "HP�� 50���ϰ� �� �� �����ϴ�. \n�ٽ� �Է����ּ���. : " ;
		cin >> status[0];
		//cout << "HP : " << status[0] << endl;
	}

	cout << "MP���� �Է����ּ��� : ";
	cin >> status[1];
	//cout << "MP : " << status[1] << endl;

	while (status[1] <= 50)
	{
		cout << "MP�� 50���ϰ� �� �� �����ϴ�. \n�ٽ� �Է����ּ���. : ";
		cin >> status[1];
		//cout << "MP : " << status[1] << endl;
	}
	cout << "���ݷ��� �Է����ּ��� : ";
	cin >> status[2];
	//cout << "���ݷ� : " << status[2] << endl;

	while (status[2] <= 0)
	{
		cout << "���ݷ��� 0���ϰ� �� �� �����ϴ�. \n�ٽ� �Է����ּ���. : ";
		cin >> status[2];
		//cout << "���ݷ� : " << status[2] << endl;
	}
	cout << "������ �Է����ּ��� : ";
	cin >> status[3];
	cout << "���� : " << status[3] << endl;

	while (status[3] <= 0)
	{
		cout << "������ 0���ϰ� �� �� �����ϴ�. \n�ٽ� �Է����ּ���. : ";
		cin >> status[3];
		//cout << "���� : " << status[3] << endl;
	}

	int p_HPPotion = 0;
	int p_MPPotion = 0;

	setPotion(5, &p_HPPotion, &p_MPPotion);
	cout << "������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��) " << endl;
	cout << "=============================================" << endl;
	cout << "\n=== ���� ���� �ý��� ���� ===\n";
	
	cout << "1. HP ȸ�� \n2. MP ȸ�� \n3. HP ��ȭ \n4. MP ��ȭ \n5. ���� ��ų ��� \n6. �ʻ�� ��� \n7. ������" << endl;

	while (1)
	{
		int statmanage = 0;
		cout << "��ȣ�� �������ּ��� : ";
		cin >> statmanage;

		switch (statmanage)
		{
			case 1:
				if (p_HPPotion == 0)
				{
					cout << "������ �����մϴ�." << endl;
				}
				else
				{
					p_HPPotion--;
					status[0] += 20;
					cout << " HP�� 20 ȸ���Ǿ����ϴ�.������ 1�� �����˴ϴ�." << endl;
					cout << "���� ���� ��: " << p_HPPotion << endl;
				}
				break;

			case 2:
				if (p_MPPotion == 0)
				{
					cout << "������ �����մϴ�." << endl;
				}
				else
				{
					p_MPPotion--;
					status[1] += 20;
					cout << "MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
					cout << "���� ���� ��: " << p_MPPotion << endl;
				}
				break;

			case 3:
				status[0] *=2;
				cout << " HP�� 2��� �����Ǿ����ϴ�." << endl;
				cout << " ���� HP: " << status[0] << endl;
				break;

			case 4:
				status[1] *= 2;
				cout << "MP�� 2��� �����Ǿ����ϴ�." << endl;
				cout << "���� MP: " << status[1] << endl;
				break;

			case 5:
				if (status[1] < 50)
				{
					cout << "��ų ����� �Ұ��մϴ�." << endl;
				}
				else
				{
					status[1] -= 50;
					cout << "��ų�� ����Ͽ� MP�� 50 �Ҹ�Ǿ����ϴ�." << endl;
					cout << "���� MP: " << status[1] << endl;
				}
				break;
			case 6:
				if (status[1] < 1)
				{
					cout << "MP�� �����մϴ�." << endl;
				}
				else
				{
					status[1] /= 2;
					cout << "��ų�� ����Ͽ� MP�� 50% �Ҹ�Ǿ����ϴ�." << endl;
					cout << "���� MP: " << status[1] << endl;
				}
				break;
			
		}
		if (statmanage == 7)
		{
			cout << "���α׷��� ����˴ϴ�.";
				break;
		}
	}
	return 0;
}


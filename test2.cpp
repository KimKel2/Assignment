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
	//int status[2] = 0; //공격력
	//int status[3] = 0; //방어력

	cout << "HP값을 입력해주세요 : ";
	cin >> status[0];
	cout << "HP : " << status[0] << endl;

	while (status[0] <= 50)
	{
		cout << "HP는 50이하가 될 수 없습니다. \n다시 입력해주세요. : " ;
		cin >> status[0];
		//cout << "HP : " << status[0] << endl;
	}

	cout << "MP값을 입력해주세요 : ";
	cin >> status[1];
	//cout << "MP : " << status[1] << endl;

	while (status[1] <= 50)
	{
		cout << "MP는 50이하가 될 수 없습니다. \n다시 입력해주세요. : ";
		cin >> status[1];
		//cout << "MP : " << status[1] << endl;
	}
	cout << "공격력을 입력해주세요 : ";
	cin >> status[2];
	//cout << "공격력 : " << status[2] << endl;

	while (status[2] <= 0)
	{
		cout << "공격력은 0이하가 될 수 없습니다. \n다시 입력해주세요. : ";
		cin >> status[2];
		//cout << "공격력 : " << status[2] << endl;
	}
	cout << "방어력을 입력해주세요 : ";
	cin >> status[3];
	cout << "방어력 : " << status[3] << endl;

	while (status[3] <= 0)
	{
		cout << "방어력은 0이하가 될 수 없습니다. \n다시 입력해주세요. : ";
		cin >> status[3];
		//cout << "방어력 : " << status[3] << endl;
	}

	int p_HPPotion = 0;
	int p_MPPotion = 0;

	setPotion(5, &p_HPPotion, &p_MPPotion);
	cout << "포션이 지급되었습니다. (HP, MP 포션 각 5개) " << endl;
	cout << "=============================================" << endl;
	cout << "\n=== 스탯 관리 시스템 시작 ===\n";
	
	cout << "1. HP 회복 \n2. MP 회복 \n3. HP 강화 \n4. MP 강화 \n5. 공격 스킬 사용 \n6. 필살기 사용 \n7. 나가기" << endl;

	while (1)
	{
		int statmanage = 0;
		cout << "번호를 선택해주세요 : ";
		cin >> statmanage;

		switch (statmanage)
		{
			case 1:
				if (p_HPPotion == 0)
				{
					cout << "포션이 부족합니다." << endl;
				}
				else
				{
					p_HPPotion--;
					status[0] += 20;
					cout << " HP가 20 회복되었습니다.포션이 1개 차감됩니다." << endl;
					cout << "남은 포션 수: " << p_HPPotion << endl;
				}
				break;

			case 2:
				if (p_MPPotion == 0)
				{
					cout << "포션이 부족합니다." << endl;
				}
				else
				{
					p_MPPotion--;
					status[1] += 20;
					cout << "MP가 20 회복되었습니다. 포션이 1개 차감됩니다." << endl;
					cout << "남은 포션 수: " << p_MPPotion << endl;
				}
				break;

			case 3:
				status[0] *=2;
				cout << " HP가 2배로 증가되었습니다." << endl;
				cout << " 현재 HP: " << status[0] << endl;
				break;

			case 4:
				status[1] *= 2;
				cout << "MP가 2배로 증가되었습니다." << endl;
				cout << "현재 MP: " << status[1] << endl;
				break;

			case 5:
				if (status[1] < 50)
				{
					cout << "스킬 사용이 불가합니다." << endl;
				}
				else
				{
					status[1] -= 50;
					cout << "스킬을 사용하여 MP가 50 소모되었습니다." << endl;
					cout << "현재 MP: " << status[1] << endl;
				}
				break;
			case 6:
				if (status[1] < 1)
				{
					cout << "MP가 부족합니다." << endl;
				}
				else
				{
					status[1] /= 2;
					cout << "스킬을 사용하여 MP가 50% 소모되었습니다." << endl;
					cout << "현재 MP: " << status[1] << endl;
				}
				break;
			
		}
		if (statmanage == 7)
		{
			cout << "프로그램이 종료됩니다.";
				break;
		}
	}
	return 0;
}


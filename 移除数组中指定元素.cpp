#include <iostream>
#include <vector>
using namespace std;

//1.�������飬ֱ���ҵ�Ҫɾ��Ԫ��
//2.�Ӹ�Ԫ�صĺ���ҵ����Ԫ�أ�����
//3.��j�������ʱ�򣬾ͽ�����
//4.�ٱ�����Ҫɾ��Ԫ�أ��ض�
int removeElement(vector<int>& nums, int val) {
	size_t sz = nums.size();
	size_t i, j;
	for ( i = 0; i<sz; i++){
		if (val == nums[i]){              
			for (j = i + 1; j<sz; j++){
				if (nums[j] != nums[i]){
					swap(nums[i], nums[j]);
					break;
				}
			}
		}
		if (j == sz){
			break;
		}
	}
	for (i = 0; i<sz; i++)
	{
		if (nums[i] == val){
			nums.resize(i);
			break;
		}
	}
	return i;
}

int main()
{
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	cout << removeElement(nums, 3);
}
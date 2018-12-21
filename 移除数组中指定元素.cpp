#include <iostream>
#include <vector>
using namespace std;

//1.遍历数组，直到找到要删的元素
//2.从该元素的后边找到别的元素，交换
//3.当j遍历完的时候，就结束了
//4.再遍历到要删的元素，截断
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
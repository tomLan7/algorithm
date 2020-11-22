// 算法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"

using namespace std;
class Solution {
public:
	int trap(vector<int>& height) {
		stack<int> stk;//单调递减栈
		int sum = 0;
		for (int i = 0; i < height.size(); i++) {
			if (!stk.empty() && height[i] > height[stk.top()]) {//发现高地，有凹槽
				std::cout << "放置第" << i << "个时，存在凹槽，所以计算存水量" << endl;
				int bottom = height[stk.top()];
				while (!stk.empty() && height[i] >= height[stk.top()]) {
					if (height[stk.top()] > bottom) {
						std::cout << "可以存水" <<stk.top()+1<<"到"<<i-1<<"，高度"<< height[stk.top()] - bottom << endl;
						
						sum += (i - stk.top()-1)*(height[stk.top()] - bottom);
						bottom = height[stk.top()];
					}
					stk.pop();
				}
				if (!stk.empty() && height[i] < height[stk.top()]) {
					if (bottom < height[i]) {
						std::cout << "可以存水" << stk.top() + 1 << "到" << i - 1 << "，高度" << height[i] - bottom << endl;
							sum += (i - stk.top() - 1)*(height[i] - bottom);
						}
				}
			}
			stk.push(i);
		}
		return sum;
	}
	void operator->*(int trap) {
	}
	
};
int main(){
	Solution s;
	s->*(3);
	//vector<int> arr({ 0,1,0,2,1,0,1,3,2,1,2,1 });
	vector<int> arr({4,2,0,3,2,5 });
	cout << sizeof(vector<int>) << endl;
	cout << sizeof(vector<bool>) << endl; auto c=vector<bool>();
	auto b=c[2];
	
	cout << sizeof(vector<double>) << endl;
	cout << sizeof(vector<char>) << endl;
	cout<<s.trap(arr)<<endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

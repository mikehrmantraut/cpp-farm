#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <map>

struct diffDataTypes
{
	//std::vector<std::string> strs;
	std::array<int, 10000> nums;
	//std::map<std::string, int> m;
};
// & referans alarak gonderince asil veri uzerinde islem
// yapacagi icin ciktiyi dogru bicimde aliriz.
// void addNumsToArray(diffDataTypes dtype) alindiginda ise
// bir kopyasi uzerinde islem yapariz. o yuzden printIntArray
// icerisinden yazdirmaya calistigimizda yazamayiz.
void addNumsToArray(diffDataTypes &dtype)
{
	for (int i = 0; i < 10000; i++)
	{
		dtype.nums[i] = i;
	}
}
void printIntArray(const std::array<int, 10000> &arr)
{
	for (int i: arr)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	diffDataTypes a;
	addNumsToArray(a);
	printIntArray(a.nums);
	return 0;
}

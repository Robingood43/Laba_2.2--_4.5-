#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n, r, s[505];
	while (~scanf_s("%d", &n))
	{
		while (n--) {
			scanf_s("%d", &r);
			for (int i = 0; i < r; ++i)
				scanf_s("%d", &s[i]);
			sort(s, s + r);
			int sum = 0;
			for (int i = 0; i < r; ++i)
				sum += abs(s[i] - s[r >> 1]);
			printf("%d\n", sum);
		}
	}
	return 0;
}

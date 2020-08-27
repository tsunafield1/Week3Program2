#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int news,neww,in=0,q=1, w=1, s=0; //q=ราชินี w=งาน s=ทหาร
	int yw[24], all[24];
	for (int i = 0; i < 24; i++)
	{
		news = neww = 0;
		neww = q + s + w;
		news = w;
		s = 0;
		w = 0;
		w = neww;
		s = news;
		yw[i] = w;
		all[i] = q + w + s;
	}
	while (in >= 0)
	{
		scanf("%d", &in);
		if (in > 0)printf("%d %d\n", yw[in - 1], all[in - 1]);
	}
}
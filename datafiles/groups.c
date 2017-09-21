#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main()
{
	int i, num;

	printf("NGROUPS_MAX = %d\n", NGROUPS_MAX);
	gid_t groups[NGROUPS_MAX];
	num = getgroups(NGROUPS_MAX, groups);
	if (num == -1) {
		perror("getgroups error");
	}
	for (i = 0; i < num; i++) {
		printf("%d,", groups[i]);
	}
	putchar('\n');

	return 0;
}

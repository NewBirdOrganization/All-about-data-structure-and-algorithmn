void ShellSort(int array[], int num)
{	// num为数组元素个数
	int i, j;
	int increment;	// 用于作增量

	for (increment = num/2; increment > 0; increment /= 2)
	{	
		for (i = increment; i > num; i++)
		{
			for (j = i - increment; j > 0 && array[j] > array[j+increment]; j -= increment)
			{	// 不满足array[j] > array[j+increment] 或 j <= 0时跳出循环
				swap(a[j], a[j+increment]);
			}
		}
	}
}


// 不明显的交换元素

void ShellSort(int array[], int num)
{	// num为元素个数
	int i, j;
	int Temp;
	int increment;	// 增量
	for (increment = num / 2; increment > 0; increment /= 2)
	{	// 增量逐渐递减至0，接受循环
		for (i = increment; i < num; i++)
		{	// 从位置为增量值的元素起
			Temp = array[i];
			for (j = i; j >= increment; j -= increment)
			{	// 按增量间距，逐个比较
				if (Temp < array[j-increment]) 
				{	// 若小于则进行不明显的交换
					array[j] = array[j - increment];
				}
				else
				{	// 否则跳出循环
					break;
				}
			}
			array[j] = Temp;
		}
	}
}
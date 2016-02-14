// 若逆序数为O(N),则InsertsSort也是线性时间进行
// 不明显的进行交换元素
void InsertionSort(ElementType A[])
{	// 也可在传参时传入数组长度
	int i, j;
	ElementType Temp;
	int str_len = strlen(A);	// 得到数组长度为 str_len
// 	int str_len = sizeof(A)/sizeof(ElementType);

	for (i = 0; i <= str_len - 1; i++)
	{	// 遍历一遍整个数组
		Temp = A[i];
		for (j = i; j > 0 && A[j-1] > Temp; j--)
		{	// 遍历至数组首 或 某一位置值小于Temp
			A[j-1] = A[j];
		}// 将Temp值替换至该位置
		A[j] = Temp;
	}
}


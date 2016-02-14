void InsertionSort(int array[], int num)
{
	int i, j;
	int Temp;

	for (i = 0; i < num; i++)
	{
		Temp = array[i];
		for (j = i; j > 0 && array[j-1] > Temp;j++)
		{
			array[j] = array[j-1];
		}
	}
}
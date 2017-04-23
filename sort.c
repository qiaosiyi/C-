void sort_select(int *num){//选择排序，过滤法找最小值，从第一个位置开始，看哪个值比这个值小，遍历剩余情况，找到后，交换到此。
	int i = 0,j = 0,min = 0,n = 0;
	for(n;num[n];n++){}//得到数组长度
	for(i = 0; i < n-1; i++){//外循环
		min = i;//最小值是这个位置
		for(j = i+1; j < n; j++){//内层循环
			if(num[min] > num[j]){//找到当前最小值
				min = j;//更新最小值
			}
		}
		if(min != i){
			swap(&num[i],&num[min]);
		}
	}
}


void sort_babo(int *num){//冒泡排序
	int i = 0,j = 0,n = 0;
	for(n;num[n];n++){}//得到数组长度
	for(i=0; i < n; i++){
		for(j=0; j < n-i-1; j++){
			if(num[j] > num[j+1]){
				swap(&num[j],&num[j+1]);//
			}
			print(num);
		}
	}
}

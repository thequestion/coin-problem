/*
*	Author: thequestion
*	We can apply dynamic programming to this problem.
*	The optimal solution can be:
*	C[n]=0			if n=0;
*	C[n]= min{1+C(n-V[i])}		if n>0. (i <= n)
*	C[n] is the minimum number of stamps for a given value n;
*	V[i]	is the value of stamp which is removed from the optimal solution of a given value n.
*	The worst-case running time is O(array_size*request)
*/
int min_number_of_stamps(const int* array, size_t array_size, int request)
{
	int *C = new int[request+1];
	int result;	
	C[0] = 0;		// if the value is 0
	for(int i = 1; i <= request; i++)			//compute C[i] in a bottom-up fashion 
	{
		int min = numeric_limits<int>::max();		//initialize min to infinity
		for(int j =0; j < array_size; j++)	//compute min{1+C(n-V[i])} 
		{
			if( array[j]<= i )
				if(1+ C[i-array[j]] < min)	//compute {1+C[i-V[j]]} if V[j] matches the condition
						min = 1+C[i-array[j]];		//update min
		}
		C[i] = min;
	}
	result = C[request];
	delete []C;
	return result;
}

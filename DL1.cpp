#include <bits/stdc++.h>

using namespace std;
//Quick Sort
void quickSort(vector<double>& arr, int left, int right) {
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int i=left;
    int j=right;
    uniform_int_distribution<int> uni(left, right);
    int pivot = uni(rng);
    while (i<=j)
    {
        while (arr[i]<arr[pivot])
            i++;
        while (arr[j]>arr[pivot])
            j--;
        if (i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if (left<j)
        quickSort(arr, left, j);
    if (right>i)
        quickSort(arr, i, right);
}

//Heap sort
void HeapSort(vector<double>& arr) {
    make_heap(arr.begin(), arr.end());
    sort_heap(arr.begin(), arr.end());
}
//Merge Sort
void MergeSortedIntervals(vector<double>& v, int s, int m, int e) {
	
    // temp is used to temporary store the vector obtained by merging
    // elements from [s to m] and [m+1 to e] in v
	vector<double> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

// the MergeSort function
// Sorts the array in the range [s to e] in v using
// merge sort algorithm
void MergeSort(vector<double>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
} 


int main() {

    const int array_size = 1000000;

    freopen("Testcase.txt", "w", stdout);

    // Khởi tạo generator ngẫu nhiên
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    // Tạo các dãy số ngẫu nhiên
    vector<double> arr1(array_size);
    uniform_real_distribution<double> dist1(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr1[i] = dist1(rng);
    }
    sort(arr1.begin(), arr1.end());

    vector<double> arr2(array_size);
    uniform_real_distribution<double> dist2(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr2[i] = dist2(rng);
    }
    sort(arr2.rbegin(), arr2.rend());

    vector<double> arr3(array_size);
    uniform_real_distribution<double> dist3(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr3[i] = dist3(rng);
    }
    shuffle(arr3.begin(), arr3.end(), rng);

    vector<double> arr4(array_size);
    uniform_real_distribution<double> dist4(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr4[i] = dist4(rng);
    }
    shuffle(arr4.begin(), arr4.end(), rng);

    vector<double> arr5(array_size);
    uniform_real_distribution<double> dist5(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr5[i] = dist5(rng);
    }
    shuffle(arr5.begin(), arr5.end(), rng);

    vector<double> arr6(array_size);
    uniform_real_distribution<double> dist6(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr6[i] = dist6(rng);
    }
    shuffle(arr6.begin(), arr6.end(), rng);

    vector<double> arr7(array_size);
    uniform_real_distribution<double> dist7(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr7[i] = dist7(rng);
    }
    shuffle(arr7.begin(), arr7.end(), rng);

    vector<double> arr8(array_size);
    uniform_real_distribution<double> dist8(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr8[i] = dist8(rng);
    }
    shuffle(arr8.begin(), arr8.end(), rng);


    vector<double> arr9(array_size);
    uniform_real_distribution<double> dist9(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr9[i] = dist9(rng);
    }
    shuffle(arr9.begin(), arr9.end(), rng);


    vector<double> arr10(array_size);
    uniform_real_distribution<double> dist10(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr10[i] = dist10(rng);
    }
    shuffle(arr10.begin(), arr10.end(), rng);

    for (int i = 0; i < array_size; ++i) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr4[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr5[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr6[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr7[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr8[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr9[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr10[i]<<" ";
    }
    cout<<endl;

    freopen("Testcase.txt", "r", stdin);
    freopen("Sort.txt", "w", stdout);

    vector<double> qarr(array_size);
    vector<double> harr(array_size);
    vector<double> marr(array_size);
    vector<double> sarr(array_size);

    for (int k=0;k<10;k++)
    {
        for (int i = 0; i < array_size; ++i)
        {
            cin>>qarr[i];
            harr[i]=qarr[i];
            marr[i]=qarr[i];
            sarr[i]=qarr[i];
        }

     //Quick sort
    clock_t begin1 = clock(); //ghi lại thời gian đầu
    quickSort(qarr, 0, qarr.size() - 1);
    clock_t end1 = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end1-begin1)/CLOCKS_PER_SEC<<" s"<<" ";

    //Heap sort
    clock_t begin2 = clock(); //ghi lại thời gian đầu
    HeapSort(harr);
    clock_t end2 = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end2-begin2)/CLOCKS_PER_SEC<<" s"<<" ";

    // Merge Sort

    clock_t begin3 = clock(); //ghi lại thời gian đầu
    MergeSort(marr, 0, array_size - 1);
    clock_t end3 = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end3-begin3)/CLOCKS_PER_SEC<<" s"<<" ";

    //Sort Function
    clock_t begin4 = clock(); //ghi lại thời gian đầu
    sort(sarr.begin(), sarr.end());
    clock_t end4 = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end4-begin4)/CLOCKS_PER_SEC<<" s"<<endl;
    }
}




// from server: 77% by tester
extern "C" void __cdecl helper_678660(float* arr, int a, int b, float val);

void __cdecl func_678780(float* arr, int lo, int hi, float val)
{
    int i = lo;
    int j = lo + lo + 2;
    while (j < hi)
    {
        if (!(arr[j - 1] < arr[j]))
            j--;
        arr[i] = arr[j];
        i = j;
        j = j + j + 2;
    }
    if (j == hi)
    {
        arr[i] = arr[hi - 1];
        i = hi - 1;
    }
    helper_678660(arr, i, lo, val);
}

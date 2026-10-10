// from server: 21% by atomic.potato
struct S
{
    int __stdcall f(const int* a, const int* b);
};

int __stdcall S::f(const int* a, const int* b)
{
    if (a[3] >= b[3])
        return 1;
    if (a[3] <= b[3])
        return 0;
    return a < b;
}

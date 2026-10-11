// from server: 87% by atomic.potato
struct S
{
    void f(void*, int);
};

void S::f(void* p, int n)
{
    if (p)
    {
        int i = 0;
        while (i < n)
        {
            f(*((void**)p + i), 0);
            ++i;
        }
    }
}

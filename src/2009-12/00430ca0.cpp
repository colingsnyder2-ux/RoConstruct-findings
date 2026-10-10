// from server: 55% by atomic.potato
struct COutputView
{
    void __cdecl f(void*, int);
};

void COutputView::f(void* p, int n)
{
    if (n == 4)
    {
        *(unsigned long*)p = 0x00b05390UL;
        *((unsigned char*)p + 4) = 0;
        *((unsigned char*)p + 5) = 0;
    }
    else
    {
        f(p, n);
    }
}

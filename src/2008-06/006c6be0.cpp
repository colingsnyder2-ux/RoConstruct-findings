// from server: 70% by atomic.potato
struct CXTPReportView
{
    int f(int);
};

extern "C" void __cdecl sub_803ed4(void *, int *);

int CXTPReportView::f(int value)
{
    int result = 0;
    sub_803ed4((char *)this + 0x24, &result);
    return value;
}

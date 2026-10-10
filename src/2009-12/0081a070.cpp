// from server: 50% by atomic.potato
extern "C" void __stdcall Call_0098de94(void *, void *);

struct CXTPReportView
{
    int f(void *);
};

int CXTPReportView::f(void *arg)
{
    Call_0098de94((char *)this + 0x24, arg);
    return (int)this;
}

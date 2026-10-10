// from server: 64% by atomic.potato
extern "C" void __stdcall CallA42DE4(void *, void *, int);

struct CXTPReportGroupRow_Batch
{
    int f(void *);
};

int CXTPReportGroupRow_Batch::f(void *arg)
{
    CallA42DE4((char *)this + 0x74, arg, 0);
    return (int)arg;
}

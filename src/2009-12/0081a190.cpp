// from server: 73% by atomic.potato
typedef void (__thiscall *FunctionType)(void *, void *, int *);

FunctionType g_function = (FunctionType)0x98de94;

struct CXTPReportRecordItem
{
    void *f(void *arg);
};

void *CXTPReportRecordItem::f(void *arg)
{
    int value = 0;
    g_function(arg, (char *)this + 0x60, &value);
    return arg;
}

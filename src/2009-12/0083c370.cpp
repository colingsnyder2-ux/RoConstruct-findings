// from server: 65% by atomic.potato
extern "C" void sub_0083b850(void *);
extern "C" void __stdcall DllGetVersion(void *);

struct CXTPAccessible
{
    int f();
};

int CXTPAccessible::f()
{
    *(unsigned int *)this = 0x9f8350u;
    sub_0083b850(this);
    DllGetVersion((char *)this + 4);
    return 0;
}

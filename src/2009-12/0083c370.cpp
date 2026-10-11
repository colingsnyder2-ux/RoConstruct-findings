// from server: 67% by atomic.potato
extern "C" void sub_0083b850(void *);
extern "C" void __stdcall DllGetVersion(void *);

struct CXTPAccessible
{
    void f();
};

void CXTPAccessible::f()
{
    *(unsigned int *)this = 0x9f8350u;
    sub_0083b850(this);
    DllGetVersion((char *)this + 4);
}

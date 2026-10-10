// from server: 56% by atomic.potato
struct Body_00751560
{
    char pad[24];
    int m_value;
    int f();
};

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

int Body_00751560::f()
{
    int *p;
    EnterCriticalSection((void *)this);
    p = (int *)this;
    m_value = *p;
    *p = m_value;
    LeaveCriticalSection((void *)this);
    return 0;
}

// from server: 58% by atomic.potato
extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct I_func_008a9c10
{
    char pad[20];
    int m_x;
};

struct S_func_008a9c10
{
    char pad[144];
    I_func_008a9c10* m_p;
    int f();
};

int S_func_008a9c10::f()
{
    return m_p->m_x;
}

extern S_func_008a9c10* g_func_008a9c10;

int __stdcall func_008aad30(void* p)
{
    if (g_func_008a9c10->f() != 0)
        InvalidateRect(p, 0, 0);
    return 0;
}

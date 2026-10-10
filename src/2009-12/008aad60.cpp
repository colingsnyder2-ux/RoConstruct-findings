// from server: 42% by atomic.potato
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

struct PaintManager
{
    char pad[160];
    int m_value;
};

struct S
{
    int f();
};

int S::f()
{
    S_func_008a9c10* p = (S_func_008a9c10*)this;
    int* q = (int*)p->f();
    PaintManager* m = (PaintManager*)((char*)q + 84);
    return m->m_value;
}

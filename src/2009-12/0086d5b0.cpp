// from server: 26% by atomic.potato
struct S_func_004d5870
{
    char pad0[44];
    int m_x;
    int f();
};

int S_func_004d5870::f()
{
    return m_x;
}

struct CXTCaption
{
    char pad0[40];
    int* m_items;
    int m_count;
    int f(int);
};

int CXTCaption::f(int index)
{
    if (index < 0)
        return 0;
    if (index >= ((S_func_004d5870*)0)->f())
        return 0;
    if (index >= m_count)
        return 0;
    return m_items[index];
}

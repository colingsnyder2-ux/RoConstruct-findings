// from server: 51% by atomic.potato
extern "C" int __cdecl func_0085a790();

struct S
{
    char pad0[56];
    int m_data;
    int m_count;
    int f(int);
};

extern "C" int __cdecl func_007f3b0c();

int S::f(int index)
{
    if (index < 0)
        return 0;

    int size = func_0085a790();
    if (index >= size)
        return 0;

    if (index < m_count)
        return ((int*)m_data)[index];

    func_007f3b0c();
    return 0;
}

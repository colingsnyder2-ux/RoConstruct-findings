// from server: 81% by atomic.potato
struct S_005a9c00 {
    char pad[0x68];
    int* m_begin;
    int* m_end;
    int f(int);
};

extern "C" int* __cdecl sub_004d3040(int);

int S_005a9c00::f(int a)
{
    int* p = sub_004d3040(a);
    int idx = *p;
    if (idx < 0)
        return 0;
    int count = (int)((m_end - m_begin) >> 2);
    if ((unsigned)idx >= (unsigned)count)
        return 0;
    return m_begin[idx];
}

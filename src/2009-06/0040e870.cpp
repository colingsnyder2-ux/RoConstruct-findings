// from server: 17% by atomic.potato




struct S {
    char pad[0xc];
    int* begin;
    int* end;
    long __stdcall f(unsigned int count, unsigned int* pOut);
};

long __stdcall S::f(unsigned int count, unsigned int* pOut)
{
    if (pOut == 0)
        return 0x80070057;
    int* b = begin;
    int* e = end;
    unsigned int avail = (unsigned int)((e - b) >> 3);
    unsigned int n = count;
    if (n > avail)
        n = avail;
    end = b + n * 8;
    return (count != n) ? 1 : 0;
}

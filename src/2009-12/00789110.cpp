// from server: 70% by atomic.potato
struct UniversalTool
{
};

void *sub_7885f0(UniversalTool *, int);

void __cdecl f(void *a, int b, unsigned char c)
{
    void *p = sub_7885f0((UniversalTool *)a, b);
    *(unsigned char *)((*(unsigned long *)p) + 7) = c;
}

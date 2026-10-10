// from server: 82% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl call_80bbc2(int);
extern "C" int __stdcall call_a40a50(int, int);

int S::f()
{
    int *a = *(int **)((char *)this + 12);
    int *b = *(int **)((char *)a + 2764);
    int v = *(int *)((char *)b + 392);
    if (!v)
        return 0;
    int r = v;
    r = call_80bbc2(r);
    return call_a40a50(0xc904c8, r);
}

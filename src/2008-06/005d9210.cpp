// from server: 50% by tester
struct Sel
{
    char pad[0x24];
    float x;
    float y;
    float z;
};

struct S
{
    char pad[0x228];
    Sel *getSelection();
    S *f(S *out);
};

extern "C" Sel *__cdecl call_5d8a10();
extern "C" void __cdecl call_4782d0(void *p);
extern "C" void __cdecl call_598cb0(void *p);
extern "C" void __cdecl call_513220(void *p);

Sel *S::getSelection()
{
    return call_5d8a10();
}

S *S::f(S *out)
{
    Sel *sel = getSelection();
    if (sel)
    {
        Sel *src = getSelection();
        call_598cb0(src);
    }
    else
    {
        char buf[0x34];
        call_4782d0(buf);
    }
    call_513220(out);
    Sel *dst = (Sel *)out;
    dst->x = sel->x;
    dst->y = sel->y;
    dst->z = sel->z;
    return out;
}

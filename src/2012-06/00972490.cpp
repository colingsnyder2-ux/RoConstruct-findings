// from server: 75% by atomic.potato
extern "C" void * __cdecl sub_983B6A();
extern "C" void * (__thiscall *sub_B227BC)(void *, const char *);
extern "C" void __cdecl sub_44D230(void *, void *);

void __stdcall PasteVerb(void *arg)
{
    void *p;
    p = sub_983B6A();
    p = sub_B227BC(p, (const char *)0x00E58FC0);
    sub_44D230(arg, p);
}

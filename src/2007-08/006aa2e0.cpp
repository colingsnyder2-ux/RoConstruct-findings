// from server: 58% by colin
struct CXTPRibbonBar {
    void sub_6AA2E0(int, int, int);
};

extern "C" int __stdcall ClientToScreen(void*, void*);

extern "C" void __stdcall sub_6465D0();
extern "C" int __stdcall sub_67B670(int, int);
extern "C" void __stdcall sub_6342D0(int, int, int, int, int, int, int);
extern "C" void __stdcall sub_6301E4(int);

void CXTPRibbonBar::sub_6AA2E0(int a1, int a2, int a3)
{
    int pt[2];
    int v;

    ClientToScreen(*(void**)((char*)this + 0x20), pt);

    int (__stdcall *fn)(void*, int) = *(int (__stdcall **)(void*, int))((*(int*)this) + 0x220);
    v = fn(this, pt[0]);

    if (v != 0)
    {
        int esi;
        if (*(int*)((char*)this + 0x248) == 0)
        {
            esi = ((int (__stdcall *)(void*))0x6465D0)(this);
        }
        else
        {
            esi = (int)this;
        }

        if (((int (__stdcall *)(int, int))0x67B670)(*(int*)(v + 0xf8), 0) > 0)
        {
            ((void (__stdcall *)(int, int, int, int, int, int, int))0x6342D0)(v, 2, pt[0], pt[1], esi, 0, esi);
        }

        ((void (__stdcall *)(int))0x6301E4)(v);
    }
}

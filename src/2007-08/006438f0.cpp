// from server: 67% by colin
// roc 2007-08 006438f0  unit: seg_00640000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006438f0

struct CXTPCommandBar;

struct CXTPCommandBarVtbl
{
    void* pad[0x68];
    void (__thiscall *fn1a0)(CXTPCommandBar*, int, int, int, int, void*);
};

struct CXTPCommandBar
{
    CXTPCommandBarVtbl* vtbl;
    int field4;
    int field8;
    int fieldC;
    int sub_6438f0(int, int);
};

struct CXTPCommandBarHelper
{
    int a;
    int b;
    int c;
    int d;
};

extern "C" void* __cdecl sub_7383be(int);
extern "C" CXTPCommandBarHelper* __cdecl sub_680000(CXTPCommandBarHelper*, CXTPCommandBar*);

int CXTPCommandBar::sub_6438f0(int arg1, int arg2)
{
    void* p = sub_7383be(arg1);
    if (p != 0)
    {
        CXTPCommandBarHelper tmp;
        CXTPCommandBarHelper* r = sub_680000(&tmp, this);
        CXTPCommandBarVtbl* vt = this->vtbl;
        void (__thiscall *fn)(CXTPCommandBar*, int, int, int, int, void*) = vt->fn1a0;
        fn(this, r->a, r->b, r->c, r->d, p);
    }
    return 1;
}

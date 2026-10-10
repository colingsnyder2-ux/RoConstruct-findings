// from server: 29% by colin
struct CXTPPrintPageHeaderFooter
{
    char pad0[0x20];
    int field20;
    char pad24[0x0c];
    int field30;
    int field34;
    int field38;
    int field3c;
    CXTPPrintPageHeaderFooter();
};

struct Helper
{
    int f1(CXTPPrintPageHeaderFooter*);
    void* f2(CXTPPrintPageHeaderFooter*, int);
};

extern "C" void __stdcall SetRect(int*, int, int, int, int);
extern "C" void* __cdecl sub_0062FEF6(unsigned int);
extern "C" int __cdecl sub_0073833A();

CXTPPrintPageHeaderFooter::CXTPPrintPageHeaderFooter()
{
    sub_0073833A();
    *(int*)this = 0x7cebcc;
    int v = ((Helper*)this)->f1(this);
    int size = (v != 0) ? 0x3e8 : 0x3e8 - 0x1f4;
    SetRect(&field20, size, size, size, size);

    void* p1 = sub_0062FEF6(0x78);
    if (p1 != 0)
        ((Helper*)p1)->f2(this, 1);
    else
        p1 = 0;
    field38 = (int)p1;

    void* p2 = sub_0062FEF6(0x78);
    if (p2 != 0)
        ((Helper*)p2)->f2(this, 0);
    else
        p2 = 0;
    field3c = (int)p2;

    field30 = 0;
    field34 = 0;
}

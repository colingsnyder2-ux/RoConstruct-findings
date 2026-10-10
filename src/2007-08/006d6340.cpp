// from server: 58% by colin
struct CXTPReportGroupRow
{
    void f(int, int);
};

struct InnerA
{
    int getCount();
    int getItem(int);
};

struct InnerB
{
    virtual int vf(int, int, int);
};

struct InnerC
{
    int field_cc;
};

struct Outer
{
    char pad[0xa0];
    InnerB* ptr_a0;
    char pad2[0x28];
    InnerC* ptr_cc;
};

extern "C" int __stdcall sub_656140(int, int);
extern "C" int __stdcall sub_65a750(int);

void CXTPReportGroupRow::f(int a, int b)
{
    Outer* o = *(Outer**)((char*)this + 0x20);
    if (o == 0)
        return;

    int v = o->ptr_cc->field_cc;
    int esi = (v == -1) ? 0 : v;
    int ebx = sub_656140(esi, 1) + esi;

    int cnt = o->ptr_a0->vf(0, 0, 0);
    int eax = cnt - 1;
    if (eax >= ebx)
    {
        esi = sub_656140(esi, 1) + esi;
    }
    else
    {
        esi = o->ptr_a0->vf(0, 0, 0) - 1;
    }

    int r = o->ptr_a0->vf(esi, a, b);
    sub_65a750(r);
}

// from server: 38% by colin
// roc 2007-08 00646310  unit: CXTPCommandBar  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00646310

struct CXTPCommandBar;

struct CXTPCommandBarVtbl
{
    void* pad0[0x1ac / 4];
    void (__stdcall *fn1ac)(CXTPCommandBar*, void*);
};

struct CXTPCommandBar
{
    CXTPCommandBarVtbl* vtbl;
    char pad[0xfc - 4];
    int field_fc;
    char pad2[0x138 - 0x100];
    char field_138[0x10];

    int Method1(void*);
    int Method2();
    int Method3();
    int Method4();
    int Method5(int);
    void* Method6(int);
    int Method7();
    int Method8(void*);
    int Method9(void*);
    int Method10(void*);
};

struct CXTPCommandBarPaintManager
{
    void* vtbl;
    void Method88(void*, CXTPCommandBar*, void*, int);
    void Method8c(void*, CXTPCommandBar*, void*, int);
};

struct CXTPCommandBarControl
{
    void* vtbl;
    char pad[0x58 - 4];
    void* field_58;
    void* field_5c;
    char pad2[0x80 - 0x60];
    int (__stdcall *fn80)(CXTPCommandBarControl*, int);
    char pad3[0x98 - 0x84];
    int field_98;
    char pad4[0xc0 - 0x9c];
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad5[0xfc - 0xd0];
    CXTPCommandBar* field_fc;

    int MethodA0(void*);
};

extern "C" {
    int __stdcall InflateRect(void*, int, int);
    int __stdcall IntersectRect(void*, const void*, const void*);
    int __stdcall IsRectEmpty(const void*);
}

extern "C" int __stdcall sub_6308aa(void*, int, int, void*);
extern "C" int __stdcall sub_631b30(void*, void*);
extern "C" int __stdcall sub_643860();
extern "C" int __stdcall sub_643a40();
extern "C" int __stdcall sub_643980();
extern "C" int __stdcall sub_644710();
extern "C" int __stdcall sub_644720(int);
extern "C" int __stdcall sub_6448c0(void*);
extern "C" int __stdcall sub_680550(void*, void*, void*, void*);
extern "C" int __stdcall sub_6805d0(void*);
extern "C" int __stdcall sub_6ffaa0(void*);
extern "C" int __stdcall sub_7383e8(void*, int);

int CXTPCommandBar::Method1(void* p)
{
    CXTPCommandBarPaintManager* pm;
    CXTPCommandBarControl* ctrl;
    int i;
    int count;
    int flag;
    int rect1[4];
    int rect2[4];
    int rect3[4];
    int rect4[4];
    int rect5[4];
    int rect6[4];

    if (p != 0)
        return 0;
    if (*((int*)p + 1) == 0)
        return 0;

    pm = (CXTPCommandBarPaintManager*)sub_643a40();
    ctrl = (CXTPCommandBarControl*)sub_643980();

    vtbl->fn1ac(this, p);

    if (sub_643860() != 0 || field_fc == 4)
    {
        pm->Method88(pm, this, p, 1);
    }

    sub_7383e8(p, 1);

    flag = 1;
    i = 0;
    count = sub_644710();
    while (i < count)
    {
        CXTPCommandBarControl* item = (CXTPCommandBarControl*)sub_644720(i);
        if (item != 0 && item->field_fc == this)
        {
            if (item->fn80(item, 0) != 0)
            {
                if (item->field_98 != 0 && flag == 0)
                {
                    pm->Method8c(pm, this, p, 1);
                }

                rect1[0] = item->field_c0;
                rect1[1] = item->field_c4;
                rect1[2] = item->field_c8;
                rect1[3] = item->field_cc;

                if (IntersectRect(rect2, rect1, rect3) != 0)
                {
                    void* v = (void*)sub_6ffaa0(item);
                    pm->Method88(pm, this, p, 1);
                    sub_680550(rect4, p, v, 0);
                    item->MethodA0(p);
                    sub_6805d0(rect4);
                }

                if (rect5[0] != 0 && rect5[1] != 0 && rect5[2] == (int)item)
                {
                    sub_631b30(item, rect6);
                    sub_6308aa(p, 0, 0, rect6);
                    InflateRect(rect6, -1, -1);
                    sub_6308aa(p, 0, 0, rect6);
                }
            }
        }
        i++;
        count = sub_644710();
    }

    if (rect5[0] != 0 && rect5[1] != 0)
    {
        if (IsRectEmpty(field_138) == 0)
        {
            sub_6448c0(p);
        }
    }

    return 0;
}

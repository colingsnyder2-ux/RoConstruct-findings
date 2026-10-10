// from server: 37% by colin
// roc 2007-08 0071ab10  unit: CXTPRibbonSystemPopupBarPage  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ab10

struct CXTPRibbonSystemPopupBarPage {
    int field_0x180;
    int sub_71ab10(int, int, int);
};

struct CObject {
    int field_0xfc;
    int sub_719a30();
};

struct CSize {
    int cx;
    int cy;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall sub_6301f0(int);
extern "C" int __stdcall sub_677fd0();
extern "C" int __stdcall sub_680000();

int CXTPRibbonSystemPopupBarPage::sub_71ab10(int a1, int a2, int a3) {
    int result = sub_677fd0();
    CObject* obj = (CObject*)field_0x180;
    int v = obj->sub_719a30();
    if (sub_6301f0(v)) {
        CObject* o = (CObject*)field_0x180;
        int edi = o->field_0xfc;
        CSize sz;
        sub_680000();
        int esi = sz.cy - sz.cx;
        CRect r1;
        ((void (__thiscall*)(CObject*, CRect*))((*(int**)o)[0x1a8/4]))(o, &r1);
        esi -= r1.bottom;
        CRect r2;
        ((void (__thiscall*)(CObject*, CRect*))((*(int**)o)[0x1a8/4]))(o, &r2);
        esi -= r2.top;
        esi -= 2;
        if (esi > *(int*)((char*)&a3 + 4)) {
            *(int*)((char*)&a3 + 4) = esi;
        }
    }
    return a3;
}

// from server: 35% by colin
// roc 2007-08 0069b0f0  unit: CXTPPropertyGridView  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b0f0

extern "C" {
    void __stdcall sub_630490(void*);
    void __stdcall sub_680000(void*);
    void* __stdcall sub_668f70();
    void* __stdcall sub_668770(void*, int);
    void __stdcall sub_6308b0(void*, void*, void*);
    void __stdcall sub_6308aa(void*, void*, void*);
    void __stdcall sub_630250(void*, void*);
    void __stdcall sub_738688(void*, void*);
    void __stdcall sub_7383e8(void*, int);
    void __stdcall sub_680550(void*, void*, void*);
    void __stdcall sub_6805d0(void*);
    void __stdcall sub_63048a(void*);
    void __stdcall sub_630a1e();
    void* __stdcall sub_77ddac();
    void* __stdcall sub_77dcc8(void*, int, void*);
    void* __stdcall sub_77dd98(void*, void*);
    void* __stdcall sub_77ddbc(void*);
}

struct CXTPPropertyGridView {
    void func();
};

void CXTPPropertyGridView::func()
{
    char buf1[0x30];
    char buf2[0x30];
    char buf3[0x30];
    void* p1;
    void* p2;
    void* p3;
    void* p4;
    void* p5;
    int i1;
    int i2;
    int i3;
    int i4;
    void* pv;

    sub_630490(buf1);
    sub_680000(buf2);
    p1 = sub_668f70();
    p2 = sub_668770(p1, 0x17);
    p3 = sub_668f70();
    p4 = sub_668770(p3, 0x18);
    sub_6308b0(buf1, buf2, p4);
    sub_6308aa(buf1, buf2, p2);
    p5 = sub_77ddac();
    sub_630250(this, p5);
    sub_738688(buf1, p2);
    sub_7383e8(buf1, 1);
    sub_680550(buf3, buf1, (char*)this + 0x58);
    i1 = *(int*)(buf3 + 0x10);
    i2 = *(int*)(buf3 + 0x14);
    i3 = *(int*)(buf3 + 0x18);
    i4 = *(int*)(buf3 + 0x1c);
    pv = *(void**)(buf3 + 0x40);
    *(int*)(buf3 + 0x20) = i1;
    *(int*)(buf3 + 0x24) = i2;
    *(int*)(buf3 + 0x28) = i3;
    *(int*)(buf3 + 0x2c) = i4;
    *(int*)(buf3 + 0x20) = i1 + 4;
    pv = (char*)pv + 0x70;
    p5 = sub_77dcc8(buf3, 0x824, buf3 + 0x20);
    p5 = sub_77dd98(buf3, p5);
    (*(void(__thiscall**)(void*, void*))pv)(pv, p5);
    sub_6805d0(buf3 + 0x30);
    sub_77ddbc(buf3);
    sub_63048a(buf3);
}

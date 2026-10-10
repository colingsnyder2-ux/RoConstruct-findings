// from server: 43% by colin
struct CClassTreeView {
    char pad[0x20];
    unsigned int field20;
    void func();
};

struct CInner {
    char pad[0x50];
    int field50;
};

extern "C" void __fastcall sub_630298(void*);
extern "C" void* __cdecl sub_4345F0();
extern "C" void __fastcall sub_725750(void*);
extern "C" void __fastcall sub_725770(void*);
extern "C" void* __cdecl sub_418400();
extern "C" void __fastcall sub_4361D0(void*, void*);
extern "C" void __fastcall sub_587250(void*, void*);
extern "C" void __fastcall sub_587220(void*, void*);
extern "C" void __fastcall sub_4360A0(void*, void*, void*, void*, void*, void*);
extern "C" void __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);

void CClassTreeView::func() {
    sub_630298(this);
    void* p = sub_4345F0();
    sub_725750(p);
    void* q = sub_418400();
    sub_4361D0(this, q);
    void* a = 0;
    void* b = 0;
    sub_587250(&a, 0);
    sub_587220(&b, 0);
    void* r = 0;
    sub_4360A0(&r, a, b, this, 0, 0);
    SendMessageA((void*)field20, 0x1115, 0, &r);
    sub_725770(p);
}

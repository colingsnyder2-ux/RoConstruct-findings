// from server: 61% by colin
struct CXTPRibbonControlSystemButton {
    char pad[0xfc];
    void* field_fc;
    int method(int, int);
};

extern "C" void* __fastcall sub_6A7680(void*);
extern "C" void* __fastcall sub_630202(void*, void*);
extern "C" int __fastcall sub_6A7C10(void*);
extern "C" int __fastcall sub_6A7C00(void*);
extern "C" void* __fastcall sub_719A30(void*);
extern "C" void __fastcall sub_670BA0(void*, int, int);

int CXTPRibbonControlSystemButton::method(int a, int b) {
    void* p = sub_6A7680(field_fc);
    void* q = sub_630202(p, 0);
    if (q == 0) {
        sub_670BA0(this, a, b);
        return 0;
    }
    if (sub_6A7C10(q) == 0 || sub_6A7C00(q) == 0) {
        sub_670BA0(this, a, b);
        return 0;
    }
    void** vtbl = *(void***)this;
    void* r = sub_719A30(vtbl[0x8c / 4]);
    void* s = sub_630202(r, 0);
    if (s == 0) {
        sub_670BA0(this, a, b);
        return 0;
    }
    *(int*)((char*)a + 0xc) -= 0x12;
    return 0;
}

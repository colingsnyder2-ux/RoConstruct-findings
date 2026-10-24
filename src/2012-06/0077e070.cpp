// from server: 24% by 41k
struct RBX_VBrickColor_VValue {
    void* f_0;
    void* f_4;
    char pad_8[16];
    void* f_18;
    void* f_1c;
    RBX_VBrickColor_VValue* base();
    RBX_VBrickColor_VValue* factoryProduct() {
        f_0 = (void*)0xac4140;
        f_4 = (void*)0xbb0e18;
        f_18 = (void*)0xbb0e0c;
        f_1c = (void*)0xbb0e00;
        return base();
    }
};
extern "C" void sym(RBX_VBrickColor_VValue*);
RBX_VBrickColor_VValue* __stdcall func_0077e070(RBX_VBrickColor_VValue* x) {
    sym(x);
    x->f_0 = (void*)0xac4140;
    x->f_4 = (void*)0xbb0e18;
    x->f_18 = (void*)0xbb0e0c;
    x->f_1c = (void*)0xbb0e00;
    return x;
}

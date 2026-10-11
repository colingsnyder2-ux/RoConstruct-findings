// from server: 61% by atomic.potato
struct RbxManualResourceLoaderChain {
    void* vtable;
    void* field4;
    void* field8;
    void* destroy(char flag);
};

extern "C" void __cdecl sub_718a32(void* p);
extern void* g_8a0728;
extern void* g_8bf284;

void* RbxManualResourceLoaderChain::destroy(char flag) {
    this->vtable = &g_8bf284;
    void* p = &this->field4;
    if (p) {
        this->field4 = (char*)p - 4;
    } else {
        this->field4 = 0;
    }
    this->vtable = g_8a0728;
    if (flag & 1) {
        sub_718a32(this);
    }

    return this;
}

// from server: 28% by atomic.potato
extern "C" void __stdcall sub_535E40();
extern "C" void* __stdcall sub_7F3860(unsigned int);

struct NewInstanceItem {
    char pad0[0x24];
    void* field24;
    char pad28[8];
    void* field34;
    void* field38;
    void* field3C;
    void init();
};

void NewInstanceItem::init() {
    sub_535E40();
    void* p = sub_7F3860(4);
    if (p != 0) {
        *(void**)p = &field24;
    } else {
        p = 0;
    }
    field24 = p;
    field34 = 0;
    field38 = 0;
    field3C = 0;
}

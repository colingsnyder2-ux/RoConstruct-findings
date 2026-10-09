// from server: 73% by colin
// roc 2007-08 004387c0  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004387c0

extern "C" int __stdcall sprintf(char* buffer, const char* format, ...);
extern "C" void* __stdcall sub_77ddb8();
extern "C" void* __stdcall sub_77e968();

struct HVCXTPPropertyGridItem_XItem {
    void construct(const char* name);
};

void HVCXTPPropertyGridItem_XItem::construct(const char* name) {
    char buffer[32];
    sprintf(buffer, "%s", name);
    void* p = sub_77ddb8();
    (void)p;
    void* q = sub_77e968();
    (void)q;
    typedef void (HVCXTPPropertyGridItem_XItem::*Fn)();
    Fn fn = *(Fn*)(*(char**)this + 0x60);
    (this->*fn)();
}

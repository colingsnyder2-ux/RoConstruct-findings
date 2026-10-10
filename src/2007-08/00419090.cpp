// from server: 36% by colin
struct VDHTMLWindow_SignalDesc {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;

    void construct(int arg);
};

struct Alloc {
    void* alloc(unsigned int size);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

struct Inner {
    void init(int a, void* b);
};

void VDHTMLWindow_SignalDesc::construct(int arg) {
    void* p = sub_62FEF6(0x28);
    if (p == 0) {
        ((Inner*)p)->init(arg, this);
    }
}

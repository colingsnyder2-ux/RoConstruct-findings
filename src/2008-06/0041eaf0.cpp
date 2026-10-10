// from server: 48% by tester
struct ICreator {
    virtual void dummy0();
    virtual void dummy1();
};

struct Creator : ICreator {
    int field0;
    Creator(const void* name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(const void* name) {
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x80f1e8;
        *(const void**)((char*)p + 0xc) = name;
    } else {
        p = 0;
    }
    field0 = (int)p;
}

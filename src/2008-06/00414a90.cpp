// from server: 54% by colin
struct ICreator {
    void* vtable;
    ICreator();
};

struct Creator : ICreator {
    Creator(const void* name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(const void* name) {
    this->vtable = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x80e9d0;
        *(const void**)((char*)p + 0xc) = name;
    } else {
        p = 0;
    }
    this->vtable = p;
}

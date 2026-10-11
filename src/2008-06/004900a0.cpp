// from server: 52% by colin
struct ICreator {
    void* vtable;
};

struct Creator : ICreator {
    Creator(int arg0, int arg1);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg0, int arg1) {
    this->vtable = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x821af8;
        *(int*)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    this->vtable = p;
}

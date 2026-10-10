// from server: 52% by colin
struct ICreator {
    void* vftable;
};

struct Creator : ICreator {
    Creator(int arg, int arg2);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg, int arg2) {
    this->vftable = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x7afa84;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    this->vftable = p;
}

// from server: 52% by colin
struct ICreator {
    void* vtable;
};

struct Creator : ICreator {
    Creator(const void* name, int unused);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(const void* name, int unused)
{
    this->vtable = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7af744;
        *(const void**)((char*)p + 0xc) = name;
    } else {
        p = 0;
    }
    this->vtable = p;
}

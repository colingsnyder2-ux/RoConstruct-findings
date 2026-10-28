// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_80A05E(unsigned int size);

struct VPlayerCreator {
    void* field0;
    void* create(int arg);
};

void* VPlayerCreator::create(int arg)
{
    void* p = sub_80A05E(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xa5be8c;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}

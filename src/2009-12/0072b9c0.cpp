// from server: 52% by atomic.potato
struct PoolData {
    void* field0;
    PoolData* ctor(int);
};

extern "C" void* __cdecl sub_7F3860(unsigned int);

PoolData* PoolData::ctor(int arg) {
    void* p;
    field0 = 0;
    p = sub_7F3860(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x9e0588;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}

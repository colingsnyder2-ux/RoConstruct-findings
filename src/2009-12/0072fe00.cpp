// from server: 52% by atomic.potato
struct S {
    void* field0;
    S(void* arg);
};

extern "C" void* __cdecl sub_7F3860(unsigned int size);

S::S(void* arg)
{
    field0 = 0;
    void* p = sub_7F3860(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x9e08f4;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}

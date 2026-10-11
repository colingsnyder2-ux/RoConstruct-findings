// from server: 52% by tester
struct S {
    void* field0;
    S(void* a, void* b);
};

extern "C" void* __cdecl sub_6a0920(unsigned int size);

S::S(void* a, void* b)
{
    field0 = 0;
    void* p = sub_6a0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x821820;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}

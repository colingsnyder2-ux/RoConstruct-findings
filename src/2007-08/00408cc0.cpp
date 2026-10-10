// from server: 49% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);

struct S {
    void* field0;
    S(void* arg, int dummy);
};

S::S(void* arg, int dummy)
{
    field0 = 0;
    void* p = func_0062fef6(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x785168;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}

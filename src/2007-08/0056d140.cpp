// from server: 52% by colin
struct FunctionRef {
    void* ptr;
    FunctionRef(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

FunctionRef::FunctionRef(int a) {
    ptr = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7a9f4c;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    ptr = p;
}

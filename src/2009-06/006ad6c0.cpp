// from server: 56% by atomic.potato
struct S {
    void* field0;
    void* __cdecl func(void* a, void* b, void* c);
};

extern "C" void __stdcall sub_6AB950(void* a, void* b, void* c, void* d);

void* S::func(void* a, void* b, void* c) {
    void* local = 0;
    sub_6AB950(a, *(void**)a, &local, (void*)0x13);
    return a;
}

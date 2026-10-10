// from server: 60% by colin
extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

struct S {
    void f();
};

void S::f()
{
    char* p = *(char**)((char*)0 + 8);
    void* q = p;
    int v = *(int*)(p - 4);
    v ^= (int)q;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x846854);
}

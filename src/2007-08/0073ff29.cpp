// from server: 71% by colin
struct S {
    void f();
};

extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

void S::f()
{
    char* p;
    p = *(char**)((char*)&p + 8);
    int v = *(int*)(p - 4);
    v ^= (int)p;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x846f80);
}

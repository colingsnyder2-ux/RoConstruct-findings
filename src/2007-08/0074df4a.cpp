// from server: 69% by colin
struct S {
    void m(int, int);
};

extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

void func_0074df4a(int a, int b)
{
    int* p = (int*)b;
    int v = *(int*)((char*)p - 4);
    func_00630a1e((void*)(v ^ (int)p));
    func_00630a18((void*)0x854e98);
}

// from server: 68% by colin
extern "C" void __cdecl G1_func_006a165b(void*, int, int, void*);

struct S {
    void f();
};

void S::f()
{
    G1_func_006a165b(this, 4, 4, (void*)0x502a70);
    G1_func_006a165b(this, 4, 1, (void*)0x502a70);
}

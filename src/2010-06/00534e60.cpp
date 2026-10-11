// from server: 32% by atomic.potato
extern "C" void __cdecl func_00472c80();

struct T {
    void __thiscall func_00533d00(void* a, void* b, void* c, void* d, void* e);
};

struct S {
    void f(int a, int b, int c, int d, int e);
};

void S::f(int a, int b, int c, int d, int e)
{
    int local = 0;
    func_00472c80();
    ((T*)this)->func_00533d00(&a, &b, &c, &d, &e);
}

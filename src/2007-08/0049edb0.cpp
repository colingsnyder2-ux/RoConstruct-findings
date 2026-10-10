// from server: 32% by colin
struct S_0049edb0 {
    char pad0[0x18];
    void* m18;
    void* m1c;
    void construct(void* a, void* b);
};

extern "C" void* __cdecl func_00499230();
extern "C" void __cdecl func_00570410(void* a, void* b);
extern "C" void* __cdecl func_0052c940(void* a, int b);
extern "C" void* __cdecl func_0056da00();
extern "C" void __cdecl func_0056d3c0(void* a);
extern "C" void* __cdecl func_0056d6f0();
extern "C" void* __cdecl func_00415240(void* a, void* b, void* c, void* d);
extern "C" void __cdecl func_00414670(void* a, int b);

void S_0049edb0::construct(void* a, void* b)
{
    void* p = func_00499230();
    func_00570410(this, p);
    void* q = func_0052c940(b, -1);
    void* r = func_0056da00();
    func_0056d3c0(&r);
    void* s = func_0052c940(b, -1);
    void* t = func_0056d6f0();
    func_0056d3c0(&t);
    void* u = func_00415240(this, this->m1c, this->m1c, &s);
    func_00414670(this, 1);
    this->m1c = u;
    *(void**)u = u;
    void* v = func_00415240(this, this->m18, this->m18, &q);
    func_00414670(this, 1);
    this->m18 = v;
    *(void**)v = v;
}

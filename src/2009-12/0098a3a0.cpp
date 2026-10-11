// from server: 86% by atomic.potato
struct T_0098a3a0 {
    void m();
};

extern T_0098a3a0* G_00b98d80;

extern "C" void __cdecl func_007cbf80(void*);
extern "C" void __cdecl func_007f385a(void*);

void func_0098a3a0()
{
    T_0098a3a0* p = G_00b98d80;
    if (p != 0) {
        T_0098a3a0* q = *(T_0098a3a0**)p;
        if (q != 0) {
            q->m();
            func_007f385a(q);
        }
        func_007f385a(p);
    }
}

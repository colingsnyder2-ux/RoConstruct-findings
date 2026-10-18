// from server: 67% by atomic.potato
struct S_func_00801400 {
    void m();
};

extern S_func_00801400 G1_func_00801400;

extern "C" void __cdecl sub_00658200(void*);
extern "C" void __cdecl sub_006a067a(void*);

void func_00801400()
{
    void* p = *(void**)(0x97d944);
    if (p)
    {
        void* q = *(void**)p;
        if (q)
        {
            sub_00658200(q);
            sub_006a067a(q);
        }
        sub_006a067a(p);
    }
}

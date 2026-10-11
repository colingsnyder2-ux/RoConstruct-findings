// from server: 46% by colin
struct S_func_00451ac0 {
    char pad0[4];
    char pad4[0x70];
    int m_74;
    char pad78[0x18];
    int m_90;
    int m_94;
    S_func_00451ac0();
};

extern "C" void __cdecl func_00451590();
extern "C" void* __cdecl func_006a0920(int);

S_func_00451ac0::S_func_00451ac0()
{
    func_00451590();
    *(int*)this = 0x817ce4;
    m_74 = 0;
    int* p = (int*)((char*)this + 0x78);
    void* q = func_006a0920(4);
    if (q == 0) {
        *(void**)q = p;
    } else {
        q = 0;
    }
    *p = (int)q;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x8c) = 0;
    m_90 = 0;
    m_94 = 0;
}

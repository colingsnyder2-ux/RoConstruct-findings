// roc 2007-03 0065a1d0  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a1d0
//
// 0065a1d0  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 0065a1d6  e9556c0600           jmp 0x6c0e30
// auto-matched from its assembly shape

struct P_func_0065a1d0 { void g(); };
struct S_func_0065a1d0 {
    char pad[208];
    P_func_0065a1d0* m_p;
    void f();
};
void S_func_0065a1d0::f()
{
    m_p->g();
}

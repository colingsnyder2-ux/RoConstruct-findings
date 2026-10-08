// roc 2007-03 00638ae0  unit: seg_00630000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638ae0
//
// 00638ae0  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00638ae3  e93871ffff           jmp 0x62fc20
// auto-matched from its assembly shape

struct P_func_00638ae0 { void g(); };
struct S_func_00638ae0 {
    char pad[40];
    P_func_00638ae0* m_p;
    void f();
};
void S_func_00638ae0::f()
{
    m_p->g();
}

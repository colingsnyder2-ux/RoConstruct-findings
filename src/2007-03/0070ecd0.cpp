// roc 2007-03 0070ecd0  unit: seg_00700000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070ecd0
//
// 0070ecd0  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 0070ecd3  e9780c0000           jmp 0x70f950
// auto-matched from its assembly shape

struct P_func_0070ecd0 { void g(); };
struct S_func_0070ecd0 {
    char pad[112];
    P_func_0070ecd0* m_p;
    void f();
};
void S_func_0070ecd0::f()
{
    m_p->g();
}

// roc 2007-03 00686e80  unit: seg_00680000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686e80
//
// 00686e80  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00686e86  e98558fdff           jmp 0x65c710
// auto-matched from its assembly shape

struct P_func_00686e80 { void g(); };
struct S_func_00686e80 {
    char pad[176];
    P_func_00686e80* m_p;
    void f();
};
void S_func_00686e80::f()
{
    m_p->g();
}

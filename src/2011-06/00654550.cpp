// roc 2011-06 00654550  unit: RBX::ContentProvider  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00654550
//
// 00654550  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00654556  e915421400           jmp 0x798770
// auto-matched from its assembly shape

struct P_func_00654550 { void g(); };
struct S_func_00654550 {
    char pad[172];
    P_func_00654550* m_p;
    void f();
};
void S_func_00654550::f()
{
    m_p->g();
}

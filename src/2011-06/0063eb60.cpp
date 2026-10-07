// roc 2011-06 0063eb60  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063eb60
//
// 0063eb60  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 0063eb66  e9a5f90900           jmp 0x6de510
// auto-matched from its assembly shape

struct P_func_0063eb60 { void g(); };
struct S_func_0063eb60 {
    char pad[312];
    P_func_0063eb60* m_p;
    void f();
};
void S_func_0063eb60::f()
{
    m_p->g();
}

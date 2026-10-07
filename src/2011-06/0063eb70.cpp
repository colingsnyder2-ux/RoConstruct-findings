// roc 2011-06 0063eb70  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063eb70
//
// 0063eb70  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 0063eb76  e9e5cc0900           jmp 0x6db860
// auto-matched from its assembly shape

struct P_func_0063eb70 { void g(); };
struct S_func_0063eb70 {
    char pad[312];
    P_func_0063eb70* m_p;
    void f();
};
void S_func_0063eb70::f()
{
    m_p->g();
}

// roc 2011-06 00654330  unit: boost::system::system_error  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00654330
//
// 00654330  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00654336  e9850a1400           jmp 0x794dc0
// auto-matched from its assembly shape

struct P_func_00654330 { void g(); };
struct S_func_00654330 {
    char pad[172];
    P_func_00654330* m_p;
    void f();
};
void S_func_00654330::f()
{
    m_p->g();
}

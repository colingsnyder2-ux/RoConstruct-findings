// roc 2011-06 00654340  unit: boost::system::system_error  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00654340
//
// 00654340  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00654346  e9853f1400           jmp 0x7982d0
// auto-matched from its assembly shape

struct P_func_00654340 { void g(); };
struct S_func_00654340 {
    char pad[172];
    P_func_00654340* m_p;
    void f();
};
void S_func_00654340::f()
{
    m_p->g();
}

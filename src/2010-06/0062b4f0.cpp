// roc 2010-06 0062b4f0  unit: CPropGrid::UpdateItemsJob  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062b4f0
//
// 0062b4f0  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 0062b4f6  e9458c1100           jmp 0x744140
// auto-matched from its assembly shape

struct P_func_0062b4f0 { void g(); };
struct S_func_0062b4f0 {
    char pad[180];
    P_func_0062b4f0* m_p;
    void f();
};
void S_func_0062b4f0::f()
{
    m_p->g();
}

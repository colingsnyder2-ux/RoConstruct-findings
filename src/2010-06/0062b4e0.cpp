// roc 2010-06 0062b4e0  unit: CPropGrid::UpdateItemsJob  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062b4e0
//
// 0062b4e0  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 0062b4e6  e9e5511100           jmp 0x7406d0
// auto-matched from its assembly shape

struct P_func_0062b4e0 { void g(); };
struct S_func_0062b4e0 {
    char pad[180];
    P_func_0062b4e0* m_p;
    void f();
};
void S_func_0062b4e0::f()
{
    m_p->g();
}

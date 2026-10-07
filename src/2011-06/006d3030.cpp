// roc 2011-06 006d3030  unit: RBX::Motor6D  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3030
//
// 006d3030  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 006d3036  e915fe0c00           jmp 0x7a2e50
// auto-matched from its assembly shape

struct P_func_006d3030 { void g(); };
struct S_func_006d3030 {
    char pad[180];
    P_func_006d3030* m_p;
    void f();
};
void S_func_006d3030::f()
{
    m_p->g();
}

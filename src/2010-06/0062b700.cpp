// roc 2010-06 0062b700  unit: RBX::ContentProvider  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062b700
//
// 0062b700  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 0062b706  e945901100           jmp 0x744750
// auto-matched from its assembly shape

struct P_func_0062b700 { void g(); };
struct S_func_0062b700 {
    char pad[180];
    P_func_0062b700* m_p;
    void f();
};
void S_func_0062b700::f()
{
    m_p->g();
}

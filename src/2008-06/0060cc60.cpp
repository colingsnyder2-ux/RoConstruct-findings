// roc 2008-06 0060cc60  unit: RBX::BallBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cc60
//
// 0060cc60  8b09                 mov ecx, dword ptr [ecx]
// 0060cc62  e989df0400           jmp 0x65abf0
// auto-matched from its assembly shape

struct P_func_0060cc60 { void g(); };
struct S_func_0060cc60 {
    P_func_0060cc60* m_p;
    void f();
};
void S_func_0060cc60::f()
{
    m_p->g();
}

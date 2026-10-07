// roc 2011-06 0074ef60  unit: RBX::BallBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074ef60
//
// 0074ef60  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0074ef63  e988fbffff           jmp 0x74eaf0
// auto-matched from its assembly shape

struct P_func_0074ef60 { void g(); };
struct S_func_0074ef60 {
    char pad[36];
    P_func_0074ef60* m_p;
    void f();
};
void S_func_0074ef60::f()
{
    m_p->g();
}

// roc 2007-08 004d0460  unit: RBX::View::PartChunk  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0460
//
// 004d0460  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 004d0466  e9e5330a00           jmp 0x573850
// auto-matched from its assembly shape

struct P_func_004d0460 { void g(); };
struct S_func_004d0460 {
    char pad[176];
    P_func_004d0460* m_p;
    void f();
};
void S_func_004d0460::f()
{
    m_p->g();
}

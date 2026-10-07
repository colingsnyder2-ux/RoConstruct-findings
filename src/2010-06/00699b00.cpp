// roc 2010-06 00699b00  unit: RBX::PolyContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699b00
//
// 00699b00  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 00699b06  e9d5a10700           jmp 0x713ce0
// auto-matched from its assembly shape

struct P_func_00699b00 { void g(); };
struct S_func_00699b00 {
    char pad[208];
    P_func_00699b00* m_p;
    void f();
};
void S_func_00699b00::f()
{
    m_p->g();
}

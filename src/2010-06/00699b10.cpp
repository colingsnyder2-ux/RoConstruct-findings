// roc 2010-06 00699b10  unit: RBX::PolyContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699b10
//
// 00699b10  8b89d8000000         mov ecx, dword ptr [ecx + 0xd8]
// 00699b16  e9754f0c00           jmp 0x75ea90
// auto-matched from its assembly shape

struct P_func_00699b10 { void g(); };
struct S_func_00699b10 {
    char pad[216];
    P_func_00699b10* m_p;
    void f();
};
void S_func_00699b10::f()
{
    m_p->g();
}

// roc 2009-06 007031a0  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007031a0
//
// 007031a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 007031a3  e9a8bcd9ff           jmp 0x49ee50
// auto-matched from its assembly shape

struct P_func_007031a0 { void g(); };
struct S_func_007031a0 {
    char pad[4];
    P_func_007031a0* m_p;
    void f();
};
void S_func_007031a0::f()
{
    m_p->g();
}

// roc 2009-06 007030d0  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007030d0
//
// 007030d0  8b4904               mov ecx, dword ptr [ecx + 4]
// 007030d3  e9d8d0d9ff           jmp 0x4a01b0
// auto-matched from its assembly shape

struct P_func_007030d0 { void g(); };
struct S_func_007030d0 {
    char pad[4];
    P_func_007030d0* m_p;
    void f();
};
void S_func_007030d0::f()
{
    m_p->g();
}

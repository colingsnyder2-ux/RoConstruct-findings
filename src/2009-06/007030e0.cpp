// roc 2009-06 007030e0  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007030e0
//
// 007030e0  8b4904               mov ecx, dword ptr [ecx + 4]
// 007030e3  e948c9d9ff           jmp 0x49fa30
// auto-matched from its assembly shape

struct P_func_007030e0 { void g(); };
struct S_func_007030e0 {
    char pad[4];
    P_func_007030e0* m_p;
    void f();
};
void S_func_007030e0::f()
{
    m_p->g();
}

// roc 2008-06 006764b0  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006764b0
//
// 006764b0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006764b3  e91828e0ff           jmp 0x478cd0
// auto-matched from its assembly shape

struct P_func_006764b0 { void g(); };
struct S_func_006764b0 {
    char pad[4];
    P_func_006764b0* m_p;
    void f();
};
void S_func_006764b0::f()
{
    m_p->g();
}

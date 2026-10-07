// roc 2008-06 006764a0  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006764a0
//
// 006764a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006764a3  e9a81fe0ff           jmp 0x478450
// auto-matched from its assembly shape

struct P_func_006764a0 { void g(); };
struct S_func_006764a0 {
    char pad[4];
    P_func_006764a0* m_p;
    void f();
};
void S_func_006764a0::f()
{
    m_p->g();
}

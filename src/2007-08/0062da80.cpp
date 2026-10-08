// roc 2007-08 0062da80  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da80
//
// 0062da80  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062da83  e9287fe4ff           jmp 0x4759b0
// auto-matched from its assembly shape

struct P_func_0062da80 { void g(); };
struct S_func_0062da80 {
    char pad[4];
    P_func_0062da80* m_p;
    void f();
};
void S_func_0062da80::f()
{
    m_p->g();
}

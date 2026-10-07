// roc 2007-08 0062da90  unit: RBX::AdornG3D  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da90
//
// 0062da90  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062da93  e9287fe4ff           jmp 0x4759c0
// auto-matched from its assembly shape

struct P_func_0062da90 { void g(); };
struct S_func_0062da90 {
    char pad[4];
    P_func_0062da90* m_p;
    void f();
};
void S_func_0062da90::f()
{
    m_p->g();
}

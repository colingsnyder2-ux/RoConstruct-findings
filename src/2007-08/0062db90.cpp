// roc 2007-08 0062db90  unit: RBX::AdornG3D  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0062db90
//
// 0062db90  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062db93  e94869e4ff           jmp 0x4744e0
// auto-matched from its assembly shape

struct P_func_0062db90 { void g(); };
struct S_func_0062db90 {
    char pad[4];
    P_func_0062db90* m_p;
    void f();
};
void S_func_0062db90::f()
{
    m_p->g();
}

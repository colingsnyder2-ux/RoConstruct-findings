// roc 2008-06 00676570  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676570
//
// 00676570  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676573  e96812e0ff           jmp 0x4777e0
// auto-matched from its assembly shape

struct P_func_00676570 { void g(); };
struct S_func_00676570 {
    char pad[4];
    P_func_00676570* m_p;
    void f();
};
void S_func_00676570::f()
{
    m_p->g();
}

// roc 2007-08 005b3030  unit: RBX::Assembly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3030
//
// 005b3030  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b3033  e908880500           jmp 0x60b840
// auto-matched from its assembly shape

struct P_func_005b3030 { void g(); };
struct S_func_005b3030 {
    char pad[8];
    P_func_005b3030* m_p;
    void f();
};
void S_func_005b3030::f()
{
    m_p->g();
}

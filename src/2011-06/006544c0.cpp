// roc 2011-06 006544c0  unit: RBX::ContentProvider  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006544c0
//
// 006544c0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006544c3  e9f8521400           jmp 0x7997c0
// auto-matched from its assembly shape

struct P_func_006544c0 { void g(); };
struct S_func_006544c0 {
    char pad[28];
    P_func_006544c0* m_p;
    void f();
};
void S_func_006544c0::f()
{
    m_p->g();
}

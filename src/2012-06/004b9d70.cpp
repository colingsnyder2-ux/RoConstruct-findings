// roc 2012-06 004b9d70  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9d70
//
// 004b9d70  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004b9d73  8b80c40a0000         mov eax, dword ptr [eax + 0xac4]
// 004b9d79  c3                   ret 
// auto-matched from its assembly shape

struct I_func_004b9d70 {
    char pad[2756];
    int m_x;
};
struct S_func_004b9d70 {
    char pad[12];
    I_func_004b9d70* m_p;
    int f();
};
int S_func_004b9d70::f()
{
    return m_p->m_x;
}

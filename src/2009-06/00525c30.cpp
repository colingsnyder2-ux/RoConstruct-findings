// roc 2009-06 00525c30  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525c30
//
// 00525c30  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00525c33  8b8078080000         mov eax, dword ptr [eax + 0x878]
// 00525c39  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00525c30 {
    char pad[2168];
    int m_x;
};
struct S_func_00525c30 {
    char pad[56];
    I_func_00525c30* m_p;
    int f();
};
int S_func_00525c30::f()
{
    return m_p->m_x;
}

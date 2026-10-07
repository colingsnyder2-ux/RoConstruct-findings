// roc 2009-06 006a79c0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a79c0
//
// 006a79c0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006a79c3  8b4028               mov eax, dword ptr [eax + 0x28]
// 006a79c6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006a79c0 {
    char pad[40];
    int m_x;
};
struct S_func_006a79c0 {
    char pad[20];
    I_func_006a79c0* m_p;
    int f();
};
int S_func_006a79c0::f()
{
    return m_p->m_x;
}

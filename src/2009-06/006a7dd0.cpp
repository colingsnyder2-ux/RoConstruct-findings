// roc 2009-06 006a7dd0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7dd0
//
// 006a7dd0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006a7dd3  8b4010               mov eax, dword ptr [eax + 0x10]
// 006a7dd6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006a7dd0 {
    char pad[16];
    int m_x;
};
struct S_func_006a7dd0 {
    char pad[20];
    I_func_006a7dd0* m_p;
    int f();
};
int S_func_006a7dd0::f()
{
    return m_p->m_x;
}

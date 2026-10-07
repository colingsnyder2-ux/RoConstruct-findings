// roc 2009-06 006a7de0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7de0
//
// 006a7de0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006a7de3  8b401c               mov eax, dword ptr [eax + 0x1c]
// 006a7de6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006a7de0 {
    char pad[28];
    int m_x;
};
struct S_func_006a7de0 {
    char pad[20];
    I_func_006a7de0* m_p;
    int f();
};
int S_func_006a7de0::f()
{
    return m_p->m_x;
}

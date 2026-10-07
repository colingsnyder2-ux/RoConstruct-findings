// roc 2009-06 006a7dc0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7dc0
//
// 006a7dc0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006a7dc3  8b4004               mov eax, dword ptr [eax + 4]
// 006a7dc6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006a7dc0 {
    char pad[4];
    int m_x;
};
struct S_func_006a7dc0 {
    char pad[20];
    I_func_006a7dc0* m_p;
    int f();
};
int S_func_006a7dc0::f()
{
    return m_p->m_x;
}

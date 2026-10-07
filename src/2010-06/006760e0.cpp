// roc 2010-06 006760e0  unit: RBX::VHumanoid::?$EventDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006760e0
//
// 006760e0  8b4140               mov eax, dword ptr [ecx + 0x40]
// 006760e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006760e0 {
    char pad0[64];
    int m_x;
    int f();
};
int S_func_006760e0::f()
{
    return m_x;
}

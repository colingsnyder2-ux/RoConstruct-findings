// roc 2007-08 00491590  unit: RBX::Network::VPlayer::?$SignalDesc  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00491590
//
// 00491590  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 00491596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00491590 {
    char pad0[328];
    int m_x;
    int f();
};
int S_func_00491590::f()
{
    return m_x;
}

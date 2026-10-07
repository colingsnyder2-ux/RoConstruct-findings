// roc 2011-06 00736810  unit: RBX::VStudioTool::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00736810
//
// 00736810  8a8196000000         mov al, byte ptr [ecx + 0x96]
// 00736816  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00736810 {
    char pad0[150];
    char m_x;
    char f();
};
char S_func_00736810::f()
{
    return m_x;
}

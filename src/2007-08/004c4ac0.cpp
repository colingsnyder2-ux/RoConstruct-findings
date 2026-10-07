// roc 2007-08 004c4ac0  unit: RakPeer  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4ac0
//
// 004c4ac0  8b81e0030000         mov eax, dword ptr [ecx + 0x3e0]
// 004c4ac6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c4ac0 {
    char pad0[992];
    int m_x;
    int f();
};
int S_func_004c4ac0::f()
{
    return m_x;
}

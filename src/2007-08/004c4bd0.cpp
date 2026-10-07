// roc 2007-08 004c4bd0  unit: RakPeer  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4bd0
//
// 004c4bd0  8a81d4030000         mov al, byte ptr [ecx + 0x3d4]
// 004c4bd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c4bd0 {
    char pad0[980];
    char m_x;
    char f();
};
char S_func_004c4bd0::f()
{
    return m_x;
}

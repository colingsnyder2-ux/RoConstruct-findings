// roc 2007-08 004c4bc0  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4bc0
//
// 004c4bc0  8a81d5030000         mov al, byte ptr [ecx + 0x3d5]
// 004c4bc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c4bc0 {
    char pad0[981];
    char m_x;
    char f();
};
char S_func_004c4bc0::f()
{
    return m_x;
}

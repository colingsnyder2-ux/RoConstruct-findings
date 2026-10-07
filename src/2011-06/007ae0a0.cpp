// roc 2011-06 007ae0a0  unit: RBX::PointToPointBreakConnector  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ae0a0
//
// 007ae0a0  8a4118               mov al, byte ptr [ecx + 0x18]
// 007ae0a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007ae0a0 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_007ae0a0::f()
{
    return m_x;
}

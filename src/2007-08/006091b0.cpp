// roc 2007-08 006091b0  unit: RBX::PointToPointBreakConnector  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006091b0
//
// 006091b0  8a4118               mov al, byte ptr [ecx + 0x18]
// 006091b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006091b0 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_006091b0::f()
{
    return m_x;
}

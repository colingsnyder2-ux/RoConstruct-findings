// roc 2008-06 00645a60  unit: RBX::PointToPointBreakConnector  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645a60
//
// 00645a60  8a4118               mov al, byte ptr [ecx + 0x18]
// 00645a63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00645a60 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_00645a60::f()
{
    return m_x;
}

// roc 2009-06 006d7080  unit: RBX::PointToPointBreakConnector  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d7080
//
// 006d7080  8a4118               mov al, byte ptr [ecx + 0x18]
// 006d7083  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d7080 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_006d7080::f()
{
    return m_x;
}

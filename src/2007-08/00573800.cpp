// roc 2007-08 00573800  unit: RBX::NullController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573800
//
// 00573800  d98198010000         fld dword ptr [ecx + 0x198]
// 00573806  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00573800 {
    char pad[408];
    float m_x;
    float f();
};
float S_func_00573800::f()
{
    return m_x;
}

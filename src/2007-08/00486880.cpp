// roc 2007-08 00486880  unit: G3D::GWindow  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486880
//
// 00486880  8a8124010000         mov al, byte ptr [ecx + 0x124]
// 00486886  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00486880 {
    char pad0[292];
    char m_x;
    char f();
};
char S_func_00486880::f()
{
    return m_x;
}

// roc 2011-06 00713690  unit: RBX::VSkateboardController::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713690
//
// 00713690  d981ac000000         fld dword ptr [ecx + 0xac]
// 00713696  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00713690 {
    char pad[172];
    float m_x;
    float f();
};
float S_func_00713690::f()
{
    return m_x;
}

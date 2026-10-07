// roc 2011-06 00713680  unit: RBX::VSkateboardController::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713680
//
// 00713680  d981a8000000         fld dword ptr [ecx + 0xa8]
// 00713686  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00713680 {
    char pad[168];
    float m_x;
    float f();
};
float S_func_00713680::f()
{
    return m_x;
}

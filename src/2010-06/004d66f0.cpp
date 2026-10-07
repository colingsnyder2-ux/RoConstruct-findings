// roc 2010-06 004d66f0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d66f0
//
// 004d66f0  d98100010000         fld dword ptr [ecx + 0x100]
// 004d66f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d66f0 {
    char pad[256];
    float m_x;
    float f();
};
float S_func_004d66f0::f()
{
    return m_x;
}

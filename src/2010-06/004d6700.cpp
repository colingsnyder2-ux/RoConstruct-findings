// roc 2010-06 004d6700  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6700
//
// 004d6700  d98104010000         fld dword ptr [ecx + 0x104]
// 004d6706  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d6700 {
    char pad[260];
    float m_x;
    float f();
};
float S_func_004d6700::f()
{
    return m_x;
}

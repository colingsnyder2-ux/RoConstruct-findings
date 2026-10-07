// roc 2008-06 004d6fe0  unit: CSHA1  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6fe0
//
// 004d6fe0  d98188020000         fld dword ptr [ecx + 0x288]
// 004d6fe6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d6fe0 {
    char pad[648];
    float m_x;
    float f();
};
float S_func_004d6fe0::f()
{
    return m_x;
}

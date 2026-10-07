// roc 2008-06 004e5b80  unit: RBX::Block  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5b80
//
// 004e5b80  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 004e5b86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5b80 {
    char pad[492];
    float m_x;
    float f();
};
float S_func_004e5b80::f()
{
    return m_x;
}

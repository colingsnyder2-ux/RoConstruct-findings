// roc 2008-06 004e5b70  unit: RBX::Block  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5b70
//
// 004e5b70  d94114               fld dword ptr [ecx + 0x14]
// 004e5b73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5b70 {
    char pad[20];
    float m_x;
    float f();
};
float S_func_004e5b70::f()
{
    return m_x;
}

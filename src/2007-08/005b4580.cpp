// roc 2007-08 005b4580  unit: RBX::Ball  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4580
//
// 005b4580  d94110               fld dword ptr [ecx + 0x10]
// 005b4583  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b4580 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_005b4580::f()
{
    return m_x;
}

// roc 2011-06 0094ffe0  unit: RBX::VPBBBuilder::?$BuilderLevelGenFunc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094ffe0
//
// 0094ffe0  d9410c               fld dword ptr [ecx + 0xc]
// 0094ffe3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0094ffe0 {
    char pad[12];
    float m_x;
    float f();
};
float S_func_0094ffe0::f()
{
    return m_x;
}

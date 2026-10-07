// roc 2010-06 008ef2b0  unit: RBX::VPBBBuilder::?$BuilderLevelGenFunc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ef2b0
//
// 008ef2b0  d9410c               fld dword ptr [ecx + 0xc]
// 008ef2b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008ef2b0 {
    char pad[12];
    float m_x;
    float f();
};
float S_func_008ef2b0::f()
{
    return m_x;
}

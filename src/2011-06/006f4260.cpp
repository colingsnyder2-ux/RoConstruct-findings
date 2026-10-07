// roc 2011-06 006f4260  unit: RBX::DebrisService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f4260
//
// 006f4260  d98194000000         fld dword ptr [ecx + 0x94]
// 006f4266  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f4260 {
    char pad[148];
    float m_x;
    float f();
};
float S_func_006f4260::f()
{
    return m_x;
}

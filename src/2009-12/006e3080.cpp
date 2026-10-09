// roc 2009-12 006e3080  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3080
//
// 006e3080  d981cc010000         fld dword ptr [ecx + 0x1cc]
// 006e3086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e3080 {
    char pad[460];
    float m_x;
    float f();
};
float S_func_006e3080::f()
{
    return m_x;
}

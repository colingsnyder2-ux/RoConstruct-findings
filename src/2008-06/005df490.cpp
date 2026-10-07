// roc 2008-06 005df490  unit: RBX::Message  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df490
//
// 005df490  d98124020000         fld dword ptr [ecx + 0x224]
// 005df496  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005df490 {
    char pad[548];
    float m_x;
    float f();
};
float S_func_005df490::f()
{
    return m_x;
}

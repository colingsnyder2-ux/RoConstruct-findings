// roc 2011-06 0079c350  unit: RBX::HUMAN::Climbing  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079c350
//
// 0079c350  d9417c               fld dword ptr [ecx + 0x7c]
// 0079c353  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079c350 {
    char pad[124];
    float m_x;
    float f();
};
float S_func_0079c350::f()
{
    return m_x;
}

// roc 2008-06 00666270  unit: RBX::PartDragTool  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666270
//
// 00666270  d94104               fld dword ptr [ecx + 4]
// 00666273  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666270 {
    char pad[4];
    float m_x;
    float f();
};
float S_func_00666270::f()
{
    return m_x;
}

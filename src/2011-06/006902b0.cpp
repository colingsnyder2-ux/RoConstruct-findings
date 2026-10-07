// roc 2011-06 006902b0  unit: RBX::GuiImageButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006902b0
//
// 006902b0  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 006902b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006902b0 {
    char pad[492];
    float m_x;
    float f();
};
float S_func_006902b0::f()
{
    return m_x;
}

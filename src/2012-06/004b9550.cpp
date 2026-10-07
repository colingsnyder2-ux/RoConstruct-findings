// roc 2012-06 004b9550  unit: RBX::ViewBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9550
//
// 004b9550  d981b8010000         fld dword ptr [ecx + 0x1b8]
// 004b9556  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9550 {
    char pad[440];
    float m_x;
    float f();
};
float S_func_004b9550::f()
{
    return m_x;
}

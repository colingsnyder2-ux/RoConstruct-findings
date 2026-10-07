// roc 2012-06 004b95f0  unit: RBX::ViewRbxGfx  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b95f0
//
// 004b95f0  c6412001             mov byte ptr [ecx + 0x20], 1
// 004b95f4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b95f0 {
    char pad0[32];
    char m_x;
    void f();
};
void S_func_004b95f0::f()
{
    m_x = (char)1;
}

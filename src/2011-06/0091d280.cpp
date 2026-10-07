// roc 2011-06 0091d280  unit: RBX::ViewRbxGfx  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091d280
//
// 0091d280  c6412001             mov byte ptr [ecx + 0x20], 1
// 0091d284  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0091d280 {
    char pad0[32];
    char m_x;
    void f();
};
void S_func_0091d280::f()
{
    m_x = (char)1;
}

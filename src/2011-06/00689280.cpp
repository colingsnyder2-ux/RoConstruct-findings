// roc 2011-06 00689280  unit: RBX::Keyframe  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689280
//
// 00689280  c6819000000000       mov byte ptr [ecx + 0x90], 0
// 00689287  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00689280 {
    char pad0[144];
    char m_x;
    void f();
};
void S_func_00689280::f()
{
    m_x = (char)0;
}

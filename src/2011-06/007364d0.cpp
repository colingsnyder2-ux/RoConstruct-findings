// roc 2011-06 007364d0  unit: RBX::TextureContentProvider  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007364d0
//
// 007364d0  8a8190000000         mov al, byte ptr [ecx + 0x90]
// 007364d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007364d0 {
    char pad0[144];
    char m_x;
    char f();
};
char S_func_007364d0::f()
{
    return m_x;
}

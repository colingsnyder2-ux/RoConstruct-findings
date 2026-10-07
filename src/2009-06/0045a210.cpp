// roc 2009-06 0045a210  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a210
//
// 0045a210  8a81de010000         mov al, byte ptr [ecx + 0x1de]
// 0045a216  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045a210 {
    char pad0[478];
    char m_x;
    char f();
};
char S_func_0045a210::f()
{
    return m_x;
}

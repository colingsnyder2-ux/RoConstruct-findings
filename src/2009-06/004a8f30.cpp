// roc 2009-06 004a8f30  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8f30
//
// 004a8f30  8a81ad000000         mov al, byte ptr [ecx + 0xad]
// 004a8f36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a8f30 {
    char pad0[173];
    char m_x;
    char f();
};
char S_func_004a8f30::f()
{
    return m_x;
}

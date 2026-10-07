// roc 2009-06 004a8f00  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8f00
//
// 004a8f00  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 004a8f06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a8f00 {
    char pad0[172];
    char m_x;
    char f();
};
char S_func_004a8f00::f()
{
    return m_x;
}

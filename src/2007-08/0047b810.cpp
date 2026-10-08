// roc 2007-08 0047b810  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b810
//
// 0047b810  8a81ad000000         mov al, byte ptr [ecx + 0xad]
// 0047b816  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047b810 {
    char pad0[173];
    char m_x;
    char f();
};
char S_func_0047b810::f()
{
    return m_x;
}

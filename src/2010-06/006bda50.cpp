// roc 2010-06 006bda50  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bda50
//
// 006bda50  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 006bda56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bda50 {
    char pad0[172];
    char m_x;
    char f();
};
char S_func_006bda50::f()
{
    return m_x;
}

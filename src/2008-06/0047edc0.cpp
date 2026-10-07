// roc 2008-06 0047edc0  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047edc0
//
// 0047edc0  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 0047edc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047edc0 {
    char pad0[172];
    char m_x;
    char f();
};
char S_func_0047edc0::f()
{
    return m_x;
}

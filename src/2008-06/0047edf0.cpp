// roc 2008-06 0047edf0  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047edf0
//
// 0047edf0  8a81ad000000         mov al, byte ptr [ecx + 0xad]
// 0047edf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047edf0 {
    char pad0[173];
    char m_x;
    char f();
};
char S_func_0047edf0::f()
{
    return m_x;
}

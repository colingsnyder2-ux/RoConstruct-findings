// roc 2010-06 00487a20  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487a20
//
// 00487a20  8a81ad000000         mov al, byte ptr [ecx + 0xad]
// 00487a26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00487a20 {
    char pad0[173];
    char m_x;
    char f();
};
char S_func_00487a20::f()
{
    return m_x;
}

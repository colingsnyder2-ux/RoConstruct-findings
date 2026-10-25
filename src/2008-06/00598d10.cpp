// from server: 100% by auto
// roc 2008-06 00598d10  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598d10
//
// 00598d10  8a81d0020000         mov al, byte ptr [ecx + 0x2d0]
// 00598d16  c3                   ret 

struct S_func_00598d10 {
    char pad0[720];
    char m_x;
    char f();
};
char S_func_00598d10::f()
{
    return m_x;
}

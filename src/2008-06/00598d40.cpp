// roc 2008-06 00598d40  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598d40
//
// 00598d40  8a81d1020000         mov al, byte ptr [ecx + 0x2d1]
// 00598d46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598d40 {
    char pad0[721];
    char m_x;
    char f();
};
char S_func_00598d40::f()
{
    return m_x;
}

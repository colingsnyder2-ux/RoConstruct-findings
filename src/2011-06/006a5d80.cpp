// roc 2011-06 006a5d80  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5d80
//
// 006a5d80  8a81f4020000         mov al, byte ptr [ecx + 0x2f4]
// 006a5d86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5d80 {
    char pad0[756];
    char m_x;
    char f();
};
char S_func_006a5d80::f()
{
    return m_x;
}

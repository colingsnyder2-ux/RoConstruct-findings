// roc 2011-06 006f4250  unit: RBX::DebrisService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f4250
//
// 006f4250  8a8191000000         mov al, byte ptr [ecx + 0x91]
// 006f4256  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f4250 {
    char pad0[145];
    char m_x;
    char f();
};
char S_func_006f4250::f()
{
    return m_x;
}

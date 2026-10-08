// roc 2007-08 00573850  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573850
//
// 00573850  8a81d4010000         mov al, byte ptr [ecx + 0x1d4]
// 00573856  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00573850 {
    char pad0[468];
    char m_x;
    char f();
};
char S_func_00573850::f()
{
    return m_x;
}

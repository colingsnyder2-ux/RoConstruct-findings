// roc 2011-06 005dd850  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005dd850
//
// 005dd850  8a81ed010000         mov al, byte ptr [ecx + 0x1ed]
// 005dd856  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005dd850 {
    char pad0[493];
    char m_x;
    char f();
};
char S_func_005dd850::f()
{
    return m_x;
}

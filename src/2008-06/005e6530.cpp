// roc 2008-06 005e6530  unit: RBX::Clump  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6530
//
// 005e6530  c6416901             mov byte ptr [ecx + 0x69], 1
// 005e6534  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005e6530 {
    char pad0[105];
    char m_x;
    void f(int a1);
};
void S_func_005e6530::f(int a1)
{
    m_x = (char)1;
}

// roc 2009-12 00673660  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00673660
//
// 00673660  8a81f0090000         mov al, byte ptr [ecx + 0x9f0]
// 00673666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00673660 {
    char pad0[2544];
    char m_x;
    char f();
};
char S_func_00673660::f()
{
    return m_x;
}

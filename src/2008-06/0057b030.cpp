// roc 2008-06 0057b030  unit: RBX::DataModel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b030
//
// 0057b030  8a4168               mov al, byte ptr [ecx + 0x68]
// 0057b033  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0057b030 {
    char pad0[104];
    char m_x;
    char f();
};
char S_func_0057b030::f()
{
    return m_x;
}

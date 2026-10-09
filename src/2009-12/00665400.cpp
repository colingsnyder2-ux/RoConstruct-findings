// roc 2009-12 00665400  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00665400
//
// 00665400  8a81e80b0000         mov al, byte ptr [ecx + 0xbe8]
// 00665406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00665400 {
    char pad0[3048];
    char m_x;
    char f();
};
char S_func_00665400::f()
{
    return m_x;
}

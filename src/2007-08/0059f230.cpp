// roc 2007-08 0059f230  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f230
//
// 0059f230  8a815c010000         mov al, byte ptr [ecx + 0x15c]
// 0059f236  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059f230 {
    char pad0[348];
    char m_x;
    char f();
};
char S_func_0059f230::f()
{
    return m_x;
}

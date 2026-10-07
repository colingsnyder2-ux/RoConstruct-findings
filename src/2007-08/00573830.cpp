// roc 2007-08 00573830  unit: RBX::NullController  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00573830
//
// 00573830  8a81a0010000         mov al, byte ptr [ecx + 0x1a0]
// 00573836  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00573830 {
    char pad0[416];
    char m_x;
    char f();
};
char S_func_00573830::f()
{
    return m_x;
}

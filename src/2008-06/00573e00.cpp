// roc 2008-06 00573e00  unit: RBX::TopMenuBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573e00
//
// 00573e00  8a8158010000         mov al, byte ptr [ecx + 0x158]
// 00573e06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00573e00 {
    char pad0[344];
    char m_x;
    char f();
};
char S_func_00573e00::f()
{
    return m_x;
}

// roc 2007-08 0059ca00  unit: RBX::UserInputBase  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ca00
//
// 0059ca00  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0059ca06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059ca00 {
    char pad0[344];
    int m_x;
    int f();
};
int S_func_0059ca00::f()
{
    return m_x;
}

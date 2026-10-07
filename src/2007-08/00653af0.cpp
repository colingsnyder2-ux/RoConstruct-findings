// roc 2007-08 00653af0  unit: CXTCaptionButtonTheme  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00653af0
//
// 00653af0  8b442404             mov eax, dword ptr [esp + 4]
// 00653af4  894134               mov dword ptr [ecx + 0x34], eax
// 00653af7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00653af0 {
    char pad0[52];
    int m_x;
    void f(int a1);
};
void S_func_00653af0::f(int a1)
{
    m_x = (int)a1;
}

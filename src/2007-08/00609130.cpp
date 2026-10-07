// roc 2007-08 00609130  unit: RBX::IPipelined  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00609130
//
// 00609130  8b442404             mov eax, dword ptr [esp + 4]
// 00609134  894104               mov dword ptr [ecx + 4], eax
// 00609137  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00609130 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_00609130::f(int a1)
{
    m_x = (int)a1;
}

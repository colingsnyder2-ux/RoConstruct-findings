// roc 2007-08 00653ad0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00653ad0
//
// 00653ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00653ad4  894130               mov dword ptr [ecx + 0x30], eax
// 00653ad7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00653ad0 {
    char pad0[48];
    int m_x;
    void f(int a1);
};
void S_func_00653ad0::f(int a1)
{
    m_x = (int)a1;
}

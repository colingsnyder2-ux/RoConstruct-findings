// roc 2007-08 0041d820  unit: CInstanceRecord::CNameItem  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d820
//
// 0041d820  8b442404             mov eax, dword ptr [esp + 4]
// 0041d824  894170               mov dword ptr [ecx + 0x70], eax
// 0041d827  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041d820 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_0041d820::f(int a1)
{
    m_x = (int)a1;
}

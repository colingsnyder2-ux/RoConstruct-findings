// roc 2007-08 0067a4a0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a4a0
//
// 0067a4a0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a4a4  894138               mov dword ptr [ecx + 0x38], eax
// 0067a4a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0067a4a0 {
    char pad0[56];
    int m_x;
    void f(int a1);
};
void S_func_0067a4a0::f(int a1)
{
    m_x = (int)a1;
}

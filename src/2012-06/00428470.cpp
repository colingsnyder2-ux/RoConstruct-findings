// roc 2012-06 00428470  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428470
//
// 00428470  8b442404             mov eax, dword ptr [esp + 4]
// 00428474  894170               mov dword ptr [ecx + 0x70], eax
// 00428477  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428470 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_00428470::f(int a1)
{
    m_x = (int)a1;
}

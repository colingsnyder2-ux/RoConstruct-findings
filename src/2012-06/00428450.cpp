// roc 2012-06 00428450  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428450
//
// 00428450  8b442404             mov eax, dword ptr [esp + 4]
// 00428454  894164               mov dword ptr [ecx + 0x64], eax
// 00428457  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428450 {
    char pad0[100];
    int m_x;
    void f(int a1);
};
void S_func_00428450::f(int a1)
{
    m_x = (int)a1;
}

// roc 2012-06 00428440  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428440
//
// 00428440  8b442404             mov eax, dword ptr [esp + 4]
// 00428444  89416c               mov dword ptr [ecx + 0x6c], eax
// 00428447  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428440 {
    char pad0[108];
    int m_x;
    void f(int a1);
};
void S_func_00428440::f(int a1)
{
    m_x = (int)a1;
}

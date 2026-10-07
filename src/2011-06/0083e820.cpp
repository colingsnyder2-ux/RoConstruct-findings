// roc 2011-06 0083e820  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e820
//
// 0083e820  8b442404             mov eax, dword ptr [esp + 4]
// 0083e824  89413c               mov dword ptr [ecx + 0x3c], eax
// 0083e827  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0083e820 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_0083e820::f(int a1)
{
    m_x = (int)a1;
}

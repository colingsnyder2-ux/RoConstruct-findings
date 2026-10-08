// roc 2007-08 00653ae0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653ae0
//
// 00653ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00653ae4  89413c               mov dword ptr [ecx + 0x3c], eax
// 00653ae7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00653ae0 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_00653ae0::f(int a1)
{
    m_x = (int)a1;
}

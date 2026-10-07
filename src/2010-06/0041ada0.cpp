// roc 2010-06 0041ada0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ada0
//
// 0041ada0  8b442404             mov eax, dword ptr [esp + 4]
// 0041ada4  894168               mov dword ptr [ecx + 0x68], eax
// 0041ada7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041ada0 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_0041ada0::f(int a1)
{
    m_x = (int)a1;
}

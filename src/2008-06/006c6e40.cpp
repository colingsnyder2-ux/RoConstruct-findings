// roc 2008-06 006c6e40  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6e40
//
// 006c6e40  8b442404             mov eax, dword ptr [esp + 4]
// 006c6e44  89413c               mov dword ptr [ecx + 0x3c], eax
// 006c6e47  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006c6e40 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_006c6e40::f(int a1)
{
    m_x = (int)a1;
}

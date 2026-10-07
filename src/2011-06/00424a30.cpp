// roc 2011-06 00424a30  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424a30
//
// 00424a30  8b442404             mov eax, dword ptr [esp + 4]
// 00424a34  894168               mov dword ptr [ecx + 0x68], eax
// 00424a37  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00424a30 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_00424a30::f(int a1)
{
    m_x = (int)a1;
}

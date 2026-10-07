// roc 2008-06 00420970  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420970
//
// 00420970  8b442404             mov eax, dword ptr [esp + 4]
// 00420974  894170               mov dword ptr [ecx + 0x70], eax
// 00420977  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00420970 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_00420970::f(int a1)
{
    m_x = (int)a1;
}

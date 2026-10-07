// roc 2008-06 00420960  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420960
//
// 00420960  8b442404             mov eax, dword ptr [esp + 4]
// 00420964  894164               mov dword ptr [ecx + 0x64], eax
// 00420967  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00420960 {
    char pad0[100];
    int m_x;
    void f(int a1);
};
void S_func_00420960::f(int a1)
{
    m_x = (int)a1;
}

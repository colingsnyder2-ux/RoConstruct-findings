// roc 2008-06 00420920  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420920
//
// 00420920  8b442404             mov eax, dword ptr [esp + 4]
// 00420924  894168               mov dword ptr [ecx + 0x68], eax
// 00420927  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00420920 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_00420920::f(int a1)
{
    m_x = (int)a1;
}

// roc 2012-06 00428430  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428430
//
// 00428430  8b442404             mov eax, dword ptr [esp + 4]
// 00428434  894168               mov dword ptr [ecx + 0x68], eax
// 00428437  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428430 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_00428430::f(int a1)
{
    m_x = (int)a1;
}

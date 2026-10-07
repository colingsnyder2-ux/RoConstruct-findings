// roc 2011-06 00749220  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00749220
//
// 00749220  8b442404             mov eax, dword ptr [esp + 4]
// 00749224  894130               mov dword ptr [ecx + 0x30], eax
// 00749227  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00749220 {
    char pad0[48];
    int m_x;
    void f(int a1);
};
void S_func_00749220::f(int a1)
{
    m_x = (int)a1;
}

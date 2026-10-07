// roc 2009-06 0041a920  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a920
//
// 0041a920  8b442404             mov eax, dword ptr [esp + 4]
// 0041a924  894170               mov dword ptr [ecx + 0x70], eax
// 0041a927  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041a920 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_0041a920::f(int a1)
{
    m_x = (int)a1;
}

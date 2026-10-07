// roc 2009-06 0041a910  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a910
//
// 0041a910  8b442404             mov eax, dword ptr [esp + 4]
// 0041a914  894164               mov dword ptr [ecx + 0x64], eax
// 0041a917  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041a910 {
    char pad0[100];
    int m_x;
    void f(int a1);
};
void S_func_0041a910::f(int a1)
{
    m_x = (int)a1;
}

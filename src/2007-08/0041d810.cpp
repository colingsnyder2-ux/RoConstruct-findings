// roc 2007-08 0041d810  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d810
//
// 0041d810  8b442404             mov eax, dword ptr [esp + 4]
// 0041d814  894164               mov dword ptr [ecx + 0x64], eax
// 0041d817  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041d810 {
    char pad0[100];
    int m_x;
    void f(int a1);
};
void S_func_0041d810::f(int a1)
{
    m_x = (int)a1;
}

// roc 2007-03 004ae2a0  unit: seg_004a0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae2a0
//
// 004ae2a0  8b442404             mov eax, dword ptr [esp + 4]
// 004ae2a4  89813c080000         mov dword ptr [ecx + 0x83c], eax
// 004ae2aa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004ae2a0 {
    char pad0[2108];
    int m_x;
    void f(int a1);
};
void S_func_004ae2a0::f(int a1)
{
    m_x = (int)a1;
}

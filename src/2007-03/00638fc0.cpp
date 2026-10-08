// roc 2007-03 00638fc0  unit: seg_00630000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638fc0
//
// 00638fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00638fc4  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 00638fca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00638fc0 {
    char pad0[192];
    int m_x;
    void f(int a1);
};
void S_func_00638fc0::f(int a1)
{
    m_x = (int)a1;
}

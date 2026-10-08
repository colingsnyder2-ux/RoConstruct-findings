// roc 2007-03 004b9a00  unit: seg_004b0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9a00
//
// 004b9a00  8b442404             mov eax, dword ptr [esp + 4]
// 004b9a04  8981e0020000         mov dword ptr [ecx + 0x2e0], eax
// 004b9a0a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004b9a00 {
    char pad0[736];
    int m_x;
    void f(int a1);
};
void S_func_004b9a00::f(int a1)
{
    m_x = (int)a1;
}

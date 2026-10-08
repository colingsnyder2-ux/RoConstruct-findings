// roc 2007-03 0044b630  unit: seg_00440000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b630
//
// 0044b630  8b442404             mov eax, dword ptr [esp + 4]
// 0044b634  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 0044b63a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044b630 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_0044b630::f(int a1)
{
    m_x = (int)a1;
}

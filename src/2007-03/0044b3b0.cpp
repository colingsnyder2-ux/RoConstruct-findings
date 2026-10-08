// roc 2007-03 0044b3b0  unit: seg_00440000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b3b0
//
// 0044b3b0  8b442404             mov eax, dword ptr [esp + 4]
// 0044b3b4  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 0044b3ba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044b3b0 {
    char pad0[252];
    int m_x;
    void f(int a1);
};
void S_func_0044b3b0::f(int a1)
{
    m_x = (int)a1;
}

// roc 2007-08 0044caa0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044caa0
//
// 0044caa0  8b442404             mov eax, dword ptr [esp + 4]
// 0044caa4  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 0044caaa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044caa0 {
    char pad0[252];
    int m_x;
    void f(int a1);
};
void S_func_0044caa0::f(int a1)
{
    m_x = (int)a1;
}

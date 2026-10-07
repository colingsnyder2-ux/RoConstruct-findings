// roc 2009-06 0044cea0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044cea0
//
// 0044cea0  8b442404             mov eax, dword ptr [esp + 4]
// 0044cea4  898100010000         mov dword ptr [ecx + 0x100], eax
// 0044ceaa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044cea0 {
    char pad0[256];
    int m_x;
    void f(int a1);
};
void S_func_0044cea0::f(int a1)
{
    m_x = (int)a1;
}

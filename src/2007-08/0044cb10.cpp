// roc 2007-08 0044cb10  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cb10
//
// 0044cb10  8b442404             mov eax, dword ptr [esp + 4]
// 0044cb14  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 0044cb1a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044cb10 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_0044cb10::f(int a1)
{
    m_x = (int)a1;
}

// roc 2009-06 0044cf10  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044cf10
//
// 0044cf10  8b442404             mov eax, dword ptr [esp + 4]
// 0044cf14  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 0044cf1a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044cf10 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_0044cf10::f(int a1)
{
    m_x = (int)a1;
}

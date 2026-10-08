// roc 2007-08 0064ee00  unit: CXTPToolBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ee00
//
// 0064ee00  8b442404             mov eax, dword ptr [esp + 4]
// 0064ee04  8981e8000000         mov dword ptr [ecx + 0xe8], eax
// 0064ee0a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0064ee00 {
    char pad0[232];
    int m_x;
    void f(int a1);
};
void S_func_0064ee00::f(int a1)
{
    m_x = (int)a1;
}

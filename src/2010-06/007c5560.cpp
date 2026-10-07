// roc 2010-06 007c5560  unit: CXTPToolBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5560
//
// 007c5560  8b442404             mov eax, dword ptr [esp + 4]
// 007c5564  8981ec000000         mov dword ptr [ecx + 0xec], eax
// 007c556a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007c5560 {
    char pad0[236];
    int m_x;
    void f(int a1);
};
void S_func_007c5560::f(int a1)
{
    m_x = (int)a1;
}

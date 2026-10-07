// roc 2007-08 00643c30  unit: CXTPCommandBar  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00643c30
//
// 00643c30  8b442404             mov eax, dword ptr [esp + 4]
// 00643c34  8981c4000000         mov dword ptr [ecx + 0xc4], eax
// 00643c3a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00643c30 {
    char pad0[196];
    int m_x;
    void f(int a1);
};
void S_func_00643c30::f(int a1)
{
    m_x = (int)a1;
}

// roc 2010-06 007b8870  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8870
//
// 007b8870  8b442404             mov eax, dword ptr [esp + 4]
// 007b8874  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 007b887a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007b8870 {
    char pad0[200];
    int m_x;
    void f(int a1);
};
void S_func_007b8870::f(int a1)
{
    m_x = (int)a1;
}

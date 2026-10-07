// roc 2007-08 0063a120  unit: CRobloxControlColorSelector  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a120
//
// 0063a120  8b442404             mov eax, dword ptr [esp + 4]
// 0063a124  8981d4000000         mov dword ptr [ecx + 0xd4], eax
// 0063a12a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0063a120 {
    char pad0[212];
    int m_x;
    void f(int a1);
};
void S_func_0063a120::f(int a1)
{
    m_x = (int)a1;
}

// roc 2007-08 00609120  unit: RBX::SimJobStage  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00609120
//
// 00609120  c7410400000000       mov dword ptr [ecx + 4], 0
// 00609127  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00609120 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_00609120::f(int a1)
{
    m_x = (int)0;
}

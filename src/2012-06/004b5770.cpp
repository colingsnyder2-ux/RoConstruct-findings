// roc 2012-06 004b5770  unit: VCWorkspace::?$CComObject  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b5770
//
// 004b5770  8b442404             mov eax, dword ptr [esp + 4]
// 004b5774  894124               mov dword ptr [ecx + 0x24], eax
// 004b5777  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004b5770 {
    char pad0[36];
    int m_x;
    void f(int a1);
};
void S_func_004b5770::f(int a1)
{
    m_x = (int)a1;
}

// roc 2011-06 0049f860  unit: VCWorkspace::?$CComObject  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049f860
//
// 0049f860  8b442404             mov eax, dword ptr [esp + 4]
// 0049f864  894124               mov dword ptr [ecx + 0x24], eax
// 0049f867  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0049f860 {
    char pad0[36];
    int m_x;
    void f(int a1);
};
void S_func_0049f860::f(int a1)
{
    m_x = (int)a1;
}

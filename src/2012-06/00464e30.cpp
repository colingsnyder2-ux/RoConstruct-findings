// roc 2012-06 00464e30  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464e30
//
// 00464e30  8b442404             mov eax, dword ptr [esp + 4]
// 00464e34  898104010000         mov dword ptr [ecx + 0x104], eax
// 00464e3a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00464e30 {
    char pad0[260];
    int m_x;
    void f(int a1);
};
void S_func_00464e30::f(int a1)
{
    m_x = (int)a1;
}

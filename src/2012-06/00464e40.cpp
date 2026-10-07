// roc 2012-06 00464e40  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464e40
//
// 00464e40  8b442404             mov eax, dword ptr [esp + 4]
// 00464e44  898108010000         mov dword ptr [ecx + 0x108], eax
// 00464e4a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00464e40 {
    char pad0[264];
    int m_x;
    void f(int a1);
};
void S_func_00464e40::f(int a1)
{
    m_x = (int)a1;
}

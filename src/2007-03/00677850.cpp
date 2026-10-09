// roc 2007-03 00677850  unit: seg_00670000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677850
//
// 00677850  8b9190010000         mov edx, dword ptr [ecx + 0x190]
// 00677856  0faf9180010000       imul edx, dword ptr [ecx + 0x180]
// 0067785d  8b442404             mov eax, dword ptr [esp + 4]
// 00677861  8910                 mov dword ptr [eax], edx
// 00677863  8b9194010000         mov edx, dword ptr [ecx + 0x194]
// 00677869  0faf9184010000       imul edx, dword ptr [ecx + 0x184]
// 00677870  895004               mov dword ptr [eax + 4], edx
// 00677873  c20800               ret 8
// copied from an identical function in another client (function ?GetSize@CXTPControlSelector@ns_ROCX000017@@QAEXPAHH@Z)

namespace ns_ROCX000017 {
struct CXTPControlSelector
{
    char pad[0x180];
    int m_nWidth;
    int m_nHeight;
    char pad2[0x8];
    int m_nWidth2;
    int m_nHeight2;
    void GetSize(int* pSize, int);
};

void CXTPControlSelector::GetSize(int* pSize, int)
{
    pSize[0] = m_nWidth2 * m_nWidth;
    pSize[1] = m_nHeight2 * m_nHeight;
}
}

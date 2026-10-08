// from server: 100% by colin
// roc 2007-08 0067eaa0  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067eaa0
//
// 0067eaa0  8b9190010000         mov edx, dword ptr [ecx + 0x190]
// 0067eaa6  0faf9180010000       imul edx, dword ptr [ecx + 0x180]
// 0067eaad  8b442404             mov eax, dword ptr [esp + 4]
// 0067eab1  8910                 mov dword ptr [eax], edx
// 0067eab3  8b9194010000         mov edx, dword ptr [ecx + 0x194]
// 0067eab9  0faf9184010000       imul edx, dword ptr [ecx + 0x184]
// 0067eac0  895004               mov dword ptr [eax + 4], edx
// 0067eac3  c20800               ret 8

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

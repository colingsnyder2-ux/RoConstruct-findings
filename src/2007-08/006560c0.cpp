// from server: 100% by colin
// roc 2007-08 006560c0  unit: CXTPReportControl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006560c0
//
// 006560c0  8b442404             mov eax, dword ptr [esp + 4]
// 006560c4  85c0                 test eax, eax
// 006560c6  56                   push esi
// 006560c7  8bf1                 mov esi, ecx
// 006560c9  7d02                 jge 0x6560cd
// 006560cb  33c0                 xor eax, eax
// 006560cd  3b86bc000000         cmp eax, dword ptr [esi + 0xbc]
// 006560d3  7425                 je 0x6560fa
// 006560d5  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 006560dc  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 006560e2  750a                 jne 0x6560ee
// 006560e4  6a01                 push 1
// 006560e6  50                   push eax
// 006560e7  6a00                 push 0
// 006560e9  e856240e00           call 0x738544
// 006560ee  8b06                 mov eax, dword ptr [esi]
// 006560f0  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 006560f6  8bce                 mov ecx, esi
// 006560f8  ffd2                 call edx
// 006560fa  5e                   pop esi
// 006560fb  c20400               ret 4

struct CXTPReportControl
{
    void SetFocusedRow(int nRow);
    char pad0[0xbc];
    int m_nFocusedRow;
    char pad1[8];
    int m_bSomeFlag;
};

void CXTPReportControl::SetFocusedRow(int nRow)
{
    if (nRow < 0)
        nRow = 0;
    if (nRow == this->m_nFocusedRow)
        return;
    this->m_nFocusedRow = nRow;
    if (this->m_bSomeFlag == 0)
    {
        extern void __stdcall sub_738544(int, int, int);
        sub_738544(0, nRow, 1);
    }
    void (CXTPReportControl::*pfn)() = *(void (CXTPReportControl::**)())(*(int*)this + 0x154);
    (this->*pfn)();
}

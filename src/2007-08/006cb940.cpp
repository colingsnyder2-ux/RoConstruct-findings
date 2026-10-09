// from server: 98% by colin
// roc 2007-08 006cb940  unit: CXTPReportPaintManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb940
//
// 006cb940  56                   push esi
// 006cb941  8bf1                 mov esi, ecx
// 006cb943  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cb947  8b01                 mov eax, dword ptr [ecx]
// 006cb949  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 006cb94f  ffd2                 call edx
// 006cb951  85c0                 test eax, eax
// 006cb953  7513                 jne 0x6cb968
// 006cb955  39868c020000         cmp dword ptr [esi + 0x28c], eax
// 006cb95b  0f95c0               setne al
// 006cb95e  038638020000         add eax, dword ptr [esi + 0x238]
// 006cb964  5e                   pop esi
// 006cb965  c20800               ret 8
// 006cb968  83bee801000000       cmp dword ptr [esi + 0x1e8], 0
// 006cb96f  8b8638020000         mov eax, dword ptr [esi + 0x238]
// 006cb975  7407                 je 0x6cb97e
// 006cb977  83c006               add eax, 6
// 006cb97a  5e                   pop esi
// 006cb97b  c20800               ret 8
// 006cb97e  83c010               add eax, 0x10
// 006cb981  5e                   pop esi
// 006cb982  c20800               ret 8

struct CXTPReportPaintManager {
    char pad_000[0x1e8];
    int offset_1e8;
    char pad_1ec[0x238 - 0x1ec];
    int offset_238;
    char pad_23c[0x28c - 0x23c];
    int offset_28c;
    int GetRowHeight(int nIndex, void* pRow);
};

int CXTPReportPaintManager::GetRowHeight(int nIndex, void* pRow)
{
    int result = (*(int (__thiscall **)(void*))((*(int*)pRow) + 0x88))(pRow);
    if (result == 0)
    {
        return (this->offset_28c != 0 ? 1 : 0) + this->offset_238;
    }
    if (this->offset_1e8 != 0)
    {
        return this->offset_238 + 6;
    }
    return this->offset_238 + 0x10;
}

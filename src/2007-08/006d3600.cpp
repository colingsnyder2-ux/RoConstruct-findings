// from server: 49% by colin
// roc 2007-08 006d3600  unit: CXTPReportRow_Batch  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3600
//
// 006d3600  8b542404             mov edx, dword ptr [esp + 4]
// 006d3604  85d2                 test edx, edx
// 006d3606  7c1c                 jl 0x6d3624
// 006d3608  e8337fdaff           call 0x47b540
// 006d360d  3bd0                 cmp edx, eax
// 006d360f  7d13                 jge 0x6d3624
// 006d3611  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 006d3614  7d09                 jge 0x6d361f
// 006d3616  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006d3619  8b0490               mov eax, dword ptr [eax + edx*4]
// 006d361c  c20400               ret 4
// 006d361f  e8fcc8f5ff           call 0x62ff20
// 006d3624  33c0                 xor eax, eax
// 006d3626  c20400               ret 4

struct CXTPReportRow_Batch
{
    int GetAt(int index);
    int m_nCount;
    int m_pArray;
};

extern "C" int __stdcall sub_47B540();
extern "C" int __stdcall sub_62FF20();

int CXTPReportRow_Batch::GetAt(int index)
{
    if (index < 0)
        return 0;
    if (index >= sub_47B540())
        return 0;
    if (index < m_nCount)
        return ((int*)m_pArray)[index];
    sub_62FF20();
    return 0;
}

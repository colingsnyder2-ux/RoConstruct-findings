// from server: 61% by colin
// roc 2007-08 006d6480  unit: CXTPReportGroupRow  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6480
//
// 006d6480  56                   push esi
// 006d6481  8bf1                 mov esi, ecx
// 006d6483  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d6486  85c0                 test eax, eax
// 006d6488  743c                 je 0x6d64c6
// 006d648a  8bc8                 mov ecx, eax
// 006d648c  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 006d6492  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d6496  57                   push edi
// 006d6497  8b3a                 mov edi, dword ptr [edx]
// 006d6499  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d649d  51                   push ecx
// 006d649e  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d64a4  52                   push edx
// 006d64a5  e8a6d7f8ff           call 0x663c50
// 006d64aa  8b575c               mov edx, dword ptr [edi + 0x5c]
// 006d64ad  83e801               sub eax, 1
// 006d64b0  50                   push eax
// 006d64b1  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d64b4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d64ba  ffd2                 call edx
// 006d64bc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d64bf  50                   push eax
// 006d64c0  e88b42f8ff           call 0x65a750
// 006d64c5  5f                   pop edi
// 006d64c6  5e                   pop esi
// 006d64c7  c20800               ret 8

struct CXTPReportGroupRow
{
    char pad[0x20];
    void* m_pRow;
    void GetItem(int, int);
};

extern "C" int __stdcall sub_663c50(void*, int, int);
extern "C" void __stdcall sub_65a750(void*, int);

void CXTPReportGroupRow::GetItem(int a, int b)
{
    if (m_pRow != 0)
    {
        void* p = m_pRow;
        int* vtbl = *(int**)((char*)p + 0xa0);
        int (*fn)(void*, int) = (int (*)(void*, int))*(void**)((char*)vtbl + 0x5c);
        int n = sub_663c50(*(void**)((char*)p + 0xa0), a, b);
        int r = fn(*(void**)((char*)m_pRow + 0xa0), n - 1);
        sub_65a750(m_pRow, r);
    }
}

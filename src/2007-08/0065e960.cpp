// from server: 62% by colin
// roc 2007-08 0065e960  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e960
//
// 0065e960  83ec08               sub esp, 8
// 0065e963  56                   push esi
// 0065e964  8d7120               lea esi, [ecx + 0x20]
// 0065e967  8d442404             lea eax, [esp + 4]
// 0065e96b  50                   push eax
// 0065e96c  8bce                 mov ecx, esi
// 0065e96e  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0065e974  50                   push eax
// 0065e975  8bce                 mov ecx, esi
// 0065e977  ff1598dd7700         call dword ptr [0x77dd98]
// 0065e97d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065e981  8b5108               mov edx, dword ptr [ecx + 8]
// 0065e984  50                   push eax
// 0065e985  52                   push edx
// 0065e986  ff15b8d07700         call dword ptr [0x77d0b8]
// 0065e98c  8b442404             mov eax, dword ptr [esp + 4]
// 0065e990  5e                   pop esi
// 0065e991  83c408               add esp, 8
// 0065e994  c20400               ret 4

struct CXTPReportColumn {
    char pad[0x20];
    struct {
        int dummy;
    } m_szText;
    int GetTextExtentPoint32A(int, int, int, int, int);
    int GetTextExtent(int);
    int GetTextExtent2(int);
};

extern "C" int __stdcall GetTextExtentPoint32A(int, int, int, int, int);

int CXTPReportColumn::GetTextExtent(int a) {
    int sz[2];
    int* p = sz;
    int r1 = ((int (__stdcall*)(int*, int))0x77dcc8)(p, 0);
    int r2 = ((int (__stdcall*)(int, int))0x77dd98)(r1, 0);
    int r3 = ((int (__stdcall*)(int, int, int))0x77d0b8)(r2, *(int*)(a + 8), 0);
    return sz[0];
}

// from server: 100% by colin
// roc 2007-08 00651cf0  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651cf0
//
// 00651cf0  8b81ac020000         mov eax, dword ptr [ecx + 0x2ac]
// 00651cf6  85c0                 test eax, eax
// 00651cf8  7503                 jne 0x651cfd
// 00651cfa  8d4174               lea eax, [ecx + 0x74]
// 00651cfd  c3                   ret 

struct CRobloxReportView
{
    char pad[0x74];
    char base[0x238];
    void* field_2ac;
    void* get();
};

void* CRobloxReportView::get()
{
    void* p = field_2ac;
    if (!p)
        p = base;
    return p;
}

// roc 2009-06 00752870  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752870
//
// 00752870  8b442404             mov eax, dword ptr [esp + 4]
// 00752874  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00752877  50                   push eax
// 00752878  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0075287b  6a04                 push 4
// 0075287d  52                   push edx
// 0075287e  50                   push eax
// 0075287f  ff158ce78900         call dword ptr [0x89e78c]
// 00752885  83c410               add esp, 0x10
// 00752888  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX00002d@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX00002d {
extern "C" void (__cdecl *qsort)(void*, unsigned int, unsigned int, int (__cdecl*)(const void*, const void*));

struct VCXTPReportRows {
    char pad[0x24];
    void* field24;
    void* field28;
    void Sort(int (__cdecl* cmp)(const void*, const void*));
};

void VCXTPReportRows::Sort(int (__cdecl* cmp)(const void*, const void*)) {
    qsort(field24, (unsigned int)field28, 4, cmp);
}
}

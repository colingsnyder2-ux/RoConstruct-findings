// roc 2010-06 007e1760  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1760
//
// 007e1760  8b442404             mov eax, dword ptr [esp + 4]
// 007e1764  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007e1767  50                   push eax
// 007e1768  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007e176b  6a04                 push 4
// 007e176d  52                   push edx
// 007e176e  50                   push eax
// 007e176f  ff15e0a99e00         call dword ptr [0x9ea9e0]
// 007e1775  83c410               add esp, 0x10
// 007e1778  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX000018@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX000018 {
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

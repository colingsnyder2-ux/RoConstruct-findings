// roc 2011-06 008430c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008430c0
//
// 008430c0  8b442404             mov eax, dword ptr [esp + 4]
// 008430c4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008430c7  50                   push eax
// 008430c8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008430cb  6a04                 push 4
// 008430cd  52                   push edx
// 008430ce  50                   push eax
// 008430cf  ff15a408a400         call dword ptr [0xa408a4]
// 008430d5  83c410               add esp, 0x10
// 008430d8  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX000021@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX000021 {
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

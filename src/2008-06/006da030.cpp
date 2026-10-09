// roc 2008-06 006da030  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da030
//
// 006da030  8b442404             mov eax, dword ptr [esp + 4]
// 006da034  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006da037  50                   push eax
// 006da038  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006da03b  6a04                 push 4
// 006da03d  52                   push edx
// 006da03e  50                   push eax
// 006da03f  ff15fc258000         call dword ptr [0x8025fc]
// 006da045  83c410               add esp, 0x10
// 006da048  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX00002f@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX00002f {
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

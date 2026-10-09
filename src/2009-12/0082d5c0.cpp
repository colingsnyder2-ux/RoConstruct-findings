// roc 2009-12 0082d5c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d5c0
//
// 0082d5c0  8b442404             mov eax, dword ptr [esp + 4]
// 0082d5c4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0082d5c7  50                   push eax
// 0082d5c8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0082d5cb  6a04                 push 4
// 0082d5cd  52                   push edx
// 0082d5ce  50                   push eax
// 0082d5cf  ff1584b99800         call dword ptr [0x98b984]
// 0082d5d5  83c410               add esp, 0x10
// 0082d5d8  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX00001c@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX00001c {
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

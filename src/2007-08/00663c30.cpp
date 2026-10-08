// from server: 100% by colin
// roc 2007-08 00663c30  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663c30
//
// 00663c30  8b442404             mov eax, dword ptr [esp + 4]
// 00663c34  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00663c37  50                   push eax
// 00663c38  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00663c3b  6a04                 push 4
// 00663c3d  52                   push edx
// 00663c3e  50                   push eax
// 00663c3f  ff1530e77700         call dword ptr [0x77e730]
// 00663c45  83c410               add esp, 0x10
// 00663c48  c20400               ret 4

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

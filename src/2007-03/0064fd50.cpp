// roc 2007-03 0064fd50  unit: seg_00640000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064fd50
//
// 0064fd50  8b442404             mov eax, dword ptr [esp + 4]
// 0064fd54  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0064fd57  50                   push eax
// 0064fd58  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0064fd5b  6a04                 push 4
// 0064fd5d  52                   push edx
// 0064fd5e  50                   push eax
// 0064fd5f  ff152ce97700         call dword ptr [0x77e92c]
// 0064fd65  83c410               add esp, 0x10
// 0064fd68  c20400               ret 4
// copied from an identical function in another client (function ?Sort@VCXTPReportRows@ns_ROCX000005@@QAEXP6AHPBX0@Z@Z)

namespace ns_ROCX000005 {
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

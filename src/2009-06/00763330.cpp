// roc 2009-06 00763330  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00763330
//
// 00763330  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00763336  8b4058               mov eax, dword ptr [eax + 0x58]
// 00763339  85c0                 test eax, eax
// 0076333b  7418                 je 0x763355
// 0076333d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00763341  8b11                 mov edx, dword ptr [ecx]
// 00763343  53                   push ebx
// 00763344  33db                 xor ebx, ebx
// 00763346  399890000000         cmp dword ptr [eax + 0x90], ebx
// 0076334c  8b02                 mov eax, dword ptr [edx]
// 0076334e  0f9fc3               setg bl
// 00763351  53                   push ebx
// 00763352  ffd0                 call eax
// 00763354  5b                   pop ebx
// 00763355  c20400               ret 4
// copied from an identical function in another client (function ?SetActivePage@CXTPCustomizeSheet@ns_ROCX000002@@QAEXPAX@Z)

namespace ns_ROCX000002 {
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void SetActivePage(void* page);
};

void CXTPCustomizeSheet::SetActivePage(void* page) {
    void* p = *(void**)((char*)field_b8 + 0x58);
    if (p != 0) {
        int flag = (*(int*)((char*)p + 0x90) > 0) ? 1 : 0;
        void** vtbl = *(void***)page;
        typedef void (__thiscall *Fn)(void*, int);
        ((Fn)vtbl[0])(page, flag);
    }
}
}

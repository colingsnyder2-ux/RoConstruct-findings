// roc 2007-03 0065fa50  unit: seg_00650000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065fa50
//
// 0065fa50  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0065fa56  8b4058               mov eax, dword ptr [eax + 0x58]
// 0065fa59  85c0                 test eax, eax
// 0065fa5b  7418                 je 0x65fa75
// 0065fa5d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065fa61  8b11                 mov edx, dword ptr [ecx]
// 0065fa63  53                   push ebx
// 0065fa64  33db                 xor ebx, ebx
// 0065fa66  399890000000         cmp dword ptr [eax + 0x90], ebx
// 0065fa6c  8b02                 mov eax, dword ptr [edx]
// 0065fa6e  0f9fc3               setg bl
// 0065fa71  53                   push ebx
// 0065fa72  ffd0                 call eax
// 0065fa74  5b                   pop ebx
// 0065fa75  c20400               ret 4
// copied from an identical function in another client (function ?SetActivePage@CXTPCustomizeSheet@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
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

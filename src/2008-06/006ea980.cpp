// roc 2008-06 006ea980  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea980
//
// 006ea980  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006ea986  8b4058               mov eax, dword ptr [eax + 0x58]
// 006ea989  85c0                 test eax, eax
// 006ea98b  7418                 je 0x6ea9a5
// 006ea98d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ea991  8b11                 mov edx, dword ptr [ecx]
// 006ea993  53                   push ebx
// 006ea994  33db                 xor ebx, ebx
// 006ea996  399890000000         cmp dword ptr [eax + 0x90], ebx
// 006ea99c  8b02                 mov eax, dword ptr [edx]
// 006ea99e  0f9fc3               setg bl
// 006ea9a1  53                   push ebx
// 006ea9a2  ffd0                 call eax
// 006ea9a4  5b                   pop ebx
// 006ea9a5  c20400               ret 4
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

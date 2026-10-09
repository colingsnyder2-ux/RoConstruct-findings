// roc 2010-06 007f2200  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f2200
//
// 007f2200  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 007f2206  8b4058               mov eax, dword ptr [eax + 0x58]
// 007f2209  85c0                 test eax, eax
// 007f220b  7418                 je 0x7f2225
// 007f220d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f2211  8b11                 mov edx, dword ptr [ecx]
// 007f2213  53                   push ebx
// 007f2214  33db                 xor ebx, ebx
// 007f2216  399890000000         cmp dword ptr [eax + 0x90], ebx
// 007f221c  8b02                 mov eax, dword ptr [edx]
// 007f221e  0f9fc3               setg bl
// 007f2221  53                   push ebx
// 007f2222  ffd0                 call eax
// 007f2224  5b                   pop ebx
// 007f2225  c20400               ret 4
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

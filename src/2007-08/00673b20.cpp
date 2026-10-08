// from server: 100% by colin
// roc 2007-08 00673b20  unit: CXTPCustomizeSheet  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673b20
//
// 00673b20  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673b26  8b4058               mov eax, dword ptr [eax + 0x58]
// 00673b29  85c0                 test eax, eax
// 00673b2b  7418                 je 0x673b45
// 00673b2d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00673b31  8b11                 mov edx, dword ptr [ecx]
// 00673b33  53                   push ebx
// 00673b34  33db                 xor ebx, ebx
// 00673b36  399890000000         cmp dword ptr [eax + 0x90], ebx
// 00673b3c  8b02                 mov eax, dword ptr [edx]
// 00673b3e  0f9fc3               setg bl
// 00673b41  53                   push ebx
// 00673b42  ffd0                 call eax
// 00673b44  5b                   pop ebx
// 00673b45  c20400               ret 4

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

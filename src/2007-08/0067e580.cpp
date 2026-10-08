// from server: 92% by colin
// roc 2007-08 0067e580  unit: CXTPControlRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067e580
//
// 0067e580  56                   push esi
// 0067e581  57                   push edi
// 0067e582  8bf9                 mov edi, ecx
// 0067e584  e887ffffff           call 0x67e510
// 0067e589  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067e58d  8bf0                 mov esi, eax
// 0067e58f  8b06                 mov eax, dword ptr [esi]
// 0067e591  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067e597  51                   push ecx
// 0067e598  57                   push edi
// 0067e599  8bce                 mov ecx, esi
// 0067e59b  ffd2                 call edx
// 0067e59d  5f                   pop edi
// 0067e59e  8bc6                 mov eax, esi
// 0067e5a0  5e                   pop esi
// 0067e5a1  c20400               ret 4

struct CXTPControlRecentFileList {
    void* getSite();
    void* method(int);
};

void* CXTPControlRecentFileList::method(int arg) {
    void* p = getSite();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall*)(void*, void*))vtbl[0x38];
    fn(p, this);
    return p;
}

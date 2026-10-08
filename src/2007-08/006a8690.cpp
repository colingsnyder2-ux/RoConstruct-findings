// from server: 52% by colin
// roc 2007-08 006a8690  unit: CXTPRibbonBarControlQuickAccessPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8690
//
// 006a8690  56                   push esi
// 006a8691  57                   push edi
// 006a8692  8bf9                 mov edi, ecx
// 006a8694  e887ffffff           call 0x6a8620
// 006a8699  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a869d  8bf0                 mov esi, eax
// 006a869f  8b06                 mov eax, dword ptr [esi]
// 006a86a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006a86a7  51                   push ecx
// 006a86a8  57                   push edi
// 006a86a9  8bce                 mov ecx, esi
// 006a86ab  ffd2                 call edx
// 006a86ad  5f                   pop edi
// 006a86ae  8bc6                 mov eax, esi
// 006a86b0  5e                   pop esi
// 006a86b1  c20400               ret 4

struct CXTPRibbonBarControlQuickAccessPopup {
    void* GetActiveSite();
    void Popup(void* p);
};

void* CXTPRibbonBarControlQuickAccessPopup::GetActiveSite() {
    return 0;
}

void CXTPRibbonBarControlQuickAccessPopup::Popup(void* p) {
    void* site = GetActiveSite();
    void** vtbl = *(void***)site;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0xe0 / 4];
    fn(site, p);
}

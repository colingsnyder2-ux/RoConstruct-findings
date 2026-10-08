// from server: 95% by colin
// roc 2007-08 0071aae0  unit: CXTPRibbonSystemPopupBarPage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071aae0
//
// 0071aae0  56                   push esi
// 0071aae1  57                   push edi
// 0071aae2  8bf9                 mov edi, ecx
// 0071aae4  e887ffffff           call 0x71aa70
// 0071aae9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071aaed  8bf0                 mov esi, eax
// 0071aaef  8b06                 mov eax, dword ptr [esi]
// 0071aaf1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0071aaf7  51                   push ecx
// 0071aaf8  57                   push edi
// 0071aaf9  8bce                 mov ecx, esi
// 0071aafb  ffd2                 call edx
// 0071aafd  5f                   pop edi
// 0071aafe  8bc6                 mov eax, esi
// 0071ab00  5e                   pop esi
// 0071ab01  c20400               ret 4

struct CXTPRibbonSystemPopupBarPage {
    void* GetSomething();
    void* CreatePage(void* p);
};

void* CXTPRibbonSystemPopupBarPage::CreatePage(void* p) {
    void* obj = GetSomething();
    void** vtbl = *(void***)obj;
    void (__stdcall *fn)(void*, void*, void*) = (void (__stdcall *)(void*, void*, void*))vtbl[0x1c8 / 4];
    fn(obj, this, p);
    return obj;
}

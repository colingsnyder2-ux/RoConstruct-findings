// from server: 78% by colin
// roc 2007-08 00719720  unit: CXTPRibbonGroupControlPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719720
//
// 00719720  56                   push esi
// 00719721  57                   push edi
// 00719722  8bf9                 mov edi, ecx
// 00719724  e887ffffff           call 0x7196b0
// 00719729  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071972d  8bf0                 mov esi, eax
// 0071972f  8b06                 mov eax, dword ptr [esi]
// 00719731  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00719737  51                   push ecx
// 00719738  57                   push edi
// 00719739  8bce                 mov ecx, esi
// 0071973b  ffd2                 call edx
// 0071973d  5f                   pop edi
// 0071973e  8bc6                 mov eax, esi
// 00719740  5e                   pop esi
// 00719741  c20400               ret 4

struct CXTPRibbonGroupControlPopup {
    void* GetSomething();
    void* CreatePopup(void* param);
};

void* CXTPRibbonGroupControlPopup::CreatePopup(void* param) {
    void* obj = GetSomething();
    void** vtable = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtable[0xe0 / 4];
    fn(obj, param);
    return obj;
}

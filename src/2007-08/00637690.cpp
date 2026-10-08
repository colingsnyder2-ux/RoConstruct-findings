// from server: 86% by colin
// roc 2007-08 00637690  unit: CXTPControlComboBoxPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637690
//
// 00637690  56                   push esi
// 00637691  57                   push edi
// 00637692  8bf9                 mov edi, ecx
// 00637694  e887ffffff           call 0x637620
// 00637699  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063769d  8bf0                 mov esi, eax
// 0063769f  8b06                 mov eax, dword ptr [esi]
// 006376a1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 006376a7  51                   push ecx
// 006376a8  57                   push edi
// 006376a9  8bce                 mov ecx, esi
// 006376ab  ffd2                 call edx
// 006376ad  5f                   pop edi
// 006376ae  8bc6                 mov eax, esi
// 006376b0  5e                   pop esi
// 006376b1  c20400               ret 4

struct CXTPControlComboBoxPopupBar {
    void* sub_637620();
    void* method(void* arg);
};

void* CXTPControlComboBoxPopupBar::method(void* arg) {
    void* obj = sub_637620();
    void** vtable = *(void***)obj;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x1c8 / 4];
    fn(obj, arg);
    return obj;
}

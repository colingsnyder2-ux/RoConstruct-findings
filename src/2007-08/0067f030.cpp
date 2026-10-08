// from server: 86% by colin
// roc 2007-08 0067f030  unit: CXTPControlRadioButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f030
//
// 0067f030  56                   push esi
// 0067f031  57                   push edi
// 0067f032  8bf9                 mov edi, ecx
// 0067f034  e887ffffff           call 0x67efc0
// 0067f039  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f03d  8bf0                 mov esi, eax
// 0067f03f  8b06                 mov eax, dword ptr [esi]
// 0067f041  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067f047  51                   push ecx
// 0067f048  57                   push edi
// 0067f049  8bce                 mov ecx, esi
// 0067f04b  ffd2                 call edx
// 0067f04d  5f                   pop edi
// 0067f04e  8bc6                 mov eax, esi
// 0067f050  5e                   pop esi
// 0067f051  c20400               ret 4

struct CXTPControlRadioButton {
    void* sub_67EFC0();
    void* vtable_call(void* arg);
    void* func(void* arg);
};

void* CXTPControlRadioButton::func(void* arg) {
    CXTPControlRadioButton* p = (CXTPControlRadioButton*)sub_67EFC0();
    void** vtbl = *(void***)p;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtbl[0x38];
    fn(p, arg);
    return p;
}

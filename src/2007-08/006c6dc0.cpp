// from server: 86% by colin
// roc 2007-08 006c6dc0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6dc0
//
// 006c6dc0  56                   push esi
// 006c6dc1  57                   push edi
// 006c6dc2  8bf9                 mov edi, ecx
// 006c6dc4  e887ffffff           call 0x6c6d50
// 006c6dc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c6dcd  8bf0                 mov esi, eax
// 006c6dcf  8b06                 mov eax, dword ptr [esi]
// 006c6dd1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006c6dd7  51                   push ecx
// 006c6dd8  57                   push edi
// 006c6dd9  8bce                 mov ecx, esi
// 006c6ddb  ffd2                 call edx
// 006c6ddd  5f                   pop edi
// 006c6dde  8bc6                 mov eax, esi
// 006c6de0  5e                   pop esi
// 006c6de1  c20400               ret 4

struct CCustomizeEdit {
    void* getSomething();
    void* doSomething(void* arg);
};

void* CCustomizeEdit::doSomething(void* arg) {
    void* p = getSomething();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0x38];
    fn(p, arg);
    return p;
}

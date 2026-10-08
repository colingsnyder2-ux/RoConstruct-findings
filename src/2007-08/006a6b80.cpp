// from server: 91% by colin
// roc 2007-08 006a6b80  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6b80
//
// 006a6b80  56                   push esi
// 006a6b81  57                   push edi
// 006a6b82  8bf9                 mov edi, ecx
// 006a6b84  e887ffffff           call 0x6a6b10
// 006a6b89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a6b8d  8bf0                 mov esi, eax
// 006a6b8f  8b06                 mov eax, dword ptr [esi]
// 006a6b91  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 006a6b97  51                   push ecx
// 006a6b98  57                   push edi
// 006a6b99  8bce                 mov ecx, esi
// 006a6b9b  ffd2                 call edx
// 006a6b9d  5f                   pop edi
// 006a6b9e  8bc6                 mov eax, esi
// 006a6ba0  5e                   pop esi
// 006a6ba1  c20400               ret 4

struct CXTPMenuBar {
    void* GetSomething();
    void* Method(void* arg);
};

void* CXTPMenuBar::Method(void* arg) {
    void* p = GetSomething();
    void* vtable = *(void**)p;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtable + 0x1c8);
    fn(p, this, arg);
    return p;
}

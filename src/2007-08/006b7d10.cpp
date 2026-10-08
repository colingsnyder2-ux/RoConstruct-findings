// from server: 100% by colin
// roc 2007-08 006b7d10  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7d10
//
// 006b7d10  56                   push esi
// 006b7d11  57                   push edi
// 006b7d12  8bf9                 mov edi, ecx
// 006b7d14  e887ffffff           call 0x6b7ca0
// 006b7d19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b7d1d  8bf0                 mov esi, eax
// 006b7d1f  8b06                 mov eax, dword ptr [esi]
// 006b7d21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006b7d27  51                   push ecx
// 006b7d28  57                   push edi
// 006b7d29  8bce                 mov ecx, esi
// 006b7d2b  ffd2                 call edx
// 006b7d2d  5f                   pop edi
// 006b7d2e  8bc6                 mov eax, esi
// 006b7d30  5e                   pop esi
// 006b7d31  c20400               ret 4

struct CXTPControlGallery {
    void* sub_6b7ca0();
    void* method_6b7d10(int);
};

void* CXTPControlGallery::method_6b7d10(int arg) {
    void* p = sub_6b7ca0();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, int);
    Fn fn = (Fn)vtbl[0x38];
    fn(p, this, arg);
    return p;
}

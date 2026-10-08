// from server: 100% by colin
// roc 2007-08 0067a440  unit: CXTPPopupToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a440
//
// 0067a440  56                   push esi
// 0067a441  57                   push edi
// 0067a442  8bf9                 mov edi, ecx
// 0067a444  e887ffffff           call 0x67a3d0
// 0067a449  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a44d  8bf0                 mov esi, eax
// 0067a44f  8b06                 mov eax, dword ptr [esi]
// 0067a451  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0067a457  51                   push ecx
// 0067a458  57                   push edi
// 0067a459  8bce                 mov ecx, esi
// 0067a45b  ffd2                 call edx
// 0067a45d  5f                   pop edi
// 0067a45e  8bc6                 mov eax, esi
// 0067a460  5e                   pop esi
// 0067a461  c20400               ret 4

struct CXTPPopupToolBar {
    void* sub_67A3D0();
    void* method_67A440(void* arg);
};

void* CXTPPopupToolBar::method_67A440(void* arg) {
    void* result = sub_67A3D0();
    void** vtable = *(void***)result;
    typedef void (__thiscall *Fn)(void*, void*, void*);
    Fn fn = (Fn)vtable[0x1c8 / 4];
    fn(result, this, arg);
    return result;
}

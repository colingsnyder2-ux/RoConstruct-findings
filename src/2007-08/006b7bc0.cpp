// from server: 100% by colin
// roc 2007-08 006b7bc0  unit: CXTPControlComboBoxGalleryPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7bc0
//
// 006b7bc0  56                   push esi
// 006b7bc1  57                   push edi
// 006b7bc2  8bf9                 mov edi, ecx
// 006b7bc4  e887ffffff           call 0x6b7b50
// 006b7bc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b7bcd  8bf0                 mov esi, eax
// 006b7bcf  8b06                 mov eax, dword ptr [esi]
// 006b7bd1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 006b7bd7  51                   push ecx
// 006b7bd8  57                   push edi
// 006b7bd9  8bce                 mov ecx, esi
// 006b7bdb  ffd2                 call edx
// 006b7bdd  5f                   pop edi
// 006b7bde  8bc6                 mov eax, esi
// 006b7be0  5e                   pop esi
// 006b7be1  c20400               ret 4

struct CXTPControlComboBoxGalleryPopupBar
{
    void* GetSite();
    void* GetGallery();
};

void* CXTPControlComboBoxGalleryPopupBar::GetSite()
{
    return 0;
}

void* CXTPControlComboBoxGalleryPopupBar::GetGallery()
{
    return 0;
}

extern "C" void* __fastcall sub_006b7b50(void* p);

void* __fastcall sub_006b7bc0(CXTPControlComboBoxGalleryPopupBar* self, int, int arg)
{
    void* p = sub_006b7b50(self);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, int);
    Fn fn = (Fn)vtbl[0x1c8 / 4];
    fn(p, self, arg);
    return p;
}

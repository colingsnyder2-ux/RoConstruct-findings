// from server: 100% by colin
// roc 2007-08 00672660  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672660
//
// 00672660  56                   push esi
// 00672661  57                   push edi
// 00672662  8bf9                 mov edi, ecx
// 00672664  e887ffffff           call 0x6725f0
// 00672669  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067266d  8bf0                 mov esi, eax
// 0067266f  8b06                 mov eax, dword ptr [esi]
// 00672671  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00672677  51                   push ecx
// 00672678  57                   push edi
// 00672679  8bce                 mov ecx, esi
// 0067267b  ffd2                 call edx
// 0067267d  5f                   pop edi
// 0067267e  8bc6                 mov eax, esi
// 00672680  5e                   pop esi
// 00672681  c20400               ret 4

struct CXTPControlPopupColor
{
    void* GetColorPopup();
    void* GetSite();
};

void* CXTPControlPopupColor::GetColorPopup()
{
    return 0;
}

void* CXTPControlPopupColor::GetSite()
{
    return 0;
}

extern "C" void* __fastcall sub_6725F0(CXTPControlPopupColor* self);

void* __fastcall sub_672660(CXTPControlPopupColor* self, int, int arg)
{
    void* p = sub_6725F0(self);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, int);
    Fn fn = (Fn)vtbl[0x38];
    fn(p, self, arg);
    return p;
}

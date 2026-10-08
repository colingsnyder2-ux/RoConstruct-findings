// from server: 100% by colin
// roc 2007-08 00645890  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00645890
//
// 00645890  56                   push esi
// 00645891  57                   push edi
// 00645892  8bf9                 mov edi, ecx
// 00645894  e887ffffff           call 0x645820
// 00645899  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064589d  8bf0                 mov esi, eax
// 0064589f  8b06                 mov eax, dword ptr [esi]
// 006458a1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 006458a7  51                   push ecx
// 006458a8  57                   push edi
// 006458a9  8bce                 mov ecx, esi
// 006458ab  ffd2                 call edx
// 006458ad  5f                   pop edi
// 006458ae  8bc6                 mov eax, esi
// 006458b0  5e                   pop esi
// 006458b1  c20400               ret 4

struct CXTPCommandBar
{
    void* m_pData;
};

struct CXTPCommandBarSite
{
    void* m_pVtbl;
};

extern "C" void* __fastcall sub_645820(CXTPCommandBar* self);

void* __fastcall sub_645890(CXTPCommandBar* self, int, void* arg)
{
    CXTPCommandBarSite* site = (CXTPCommandBarSite*)sub_645820(self);
    void** vtbl = (void**)site->m_pVtbl;
    typedef void (__thiscall *Fn)(CXTPCommandBarSite*, CXTPCommandBar*, void*);
    Fn fn = (Fn)vtbl[0x1c8 / 4];
    fn(site, self, arg);
    return site;
}

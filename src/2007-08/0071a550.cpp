// from server: 86% by colin
// roc 2007-08 0071a550  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a550
//
// 0071a550  56                   push esi
// 0071a551  57                   push edi
// 0071a552  8bf9                 mov edi, ecx
// 0071a554  e887ffffff           call 0x71a4e0
// 0071a559  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a55d  8bf0                 mov esi, eax
// 0071a55f  8b06                 mov eax, dword ptr [esi]
// 0071a561  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0071a567  51                   push ecx
// 0071a568  57                   push edi
// 0071a569  8bce                 mov ecx, esi
// 0071a56b  ffd2                 call edx
// 0071a56d  5f                   pop edi
// 0071a56e  8bc6                 mov eax, esi
// 0071a570  5e                   pop esi
// 0071a571  c20400               ret 4

struct CXTPRibbonControlSystemPopupBarListCaption
{
    void* sub_71a4e0();
    void* sub_71a550(void* arg);
};

void* CXTPRibbonControlSystemPopupBarListCaption::sub_71a550(void* arg)
{
    void* p = sub_71a4e0();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0x38];
    fn(p, arg);
    return p;
}

// from server: 86% by colin
// roc 2007-08 0071a3d0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a3d0
//
// 0071a3d0  56                   push esi
// 0071a3d1  57                   push edi
// 0071a3d2  8bf9                 mov edi, ecx
// 0071a3d4  e887ffffff           call 0x71a360
// 0071a3d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a3dd  8bf0                 mov esi, eax
// 0071a3df  8b06                 mov eax, dword ptr [esi]
// 0071a3e1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0071a3e7  51                   push ecx
// 0071a3e8  57                   push edi
// 0071a3e9  8bce                 mov ecx, esi
// 0071a3eb  ffd2                 call edx
// 0071a3ed  5f                   pop edi
// 0071a3ee  8bc6                 mov eax, esi
// 0071a3f0  5e                   pop esi
// 0071a3f1  c20400               ret 4

struct CXTPRibbonControlSystemPopupBarListItem
{
    void* m_pUnknown;
    void* CreateItem(void* pParam);
};

void* func_0071a360();

void* CXTPRibbonControlSystemPopupBarListItem::CreateItem(void* pParam)
{
    void* pItem = func_0071a360();
    void** vtbl = *(void***)pItem;
    typedef void* (__thiscall *Fn)(void*, void*);
    Fn fn = (Fn)vtbl[0x38];
    fn(pItem, pParam);
    return pItem;
}

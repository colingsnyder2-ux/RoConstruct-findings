// from server: 100% by colin
// roc 2007-08 0071a210  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a210
//
// 0071a210  56                   push esi
// 0071a211  57                   push edi
// 0071a212  8bf9                 mov edi, ecx
// 0071a214  e887ffffff           call 0x71a1a0
// 0071a219  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a21d  8bf0                 mov esi, eax
// 0071a21f  8b06                 mov eax, dword ptr [esi]
// 0071a221  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0071a227  51                   push ecx
// 0071a228  57                   push edi
// 0071a229  8bce                 mov ecx, esi
// 0071a22b  ffd2                 call edx
// 0071a22d  5f                   pop edi
// 0071a22e  8bc6                 mov eax, esi
// 0071a230  5e                   pop esi
// 0071a231  c20400               ret 4

struct CXTPRibbonControlSystemPopupBarButton
{
    void* GetSomething();
    void* CreateClone(int arg);
};

extern void* __fastcall sub_71A1A0(void* self);

void* CXTPRibbonControlSystemPopupBarButton::CreateClone(int arg)
{
    void* p = sub_71A1A0(this);
    void** vtbl = *(void***)p;
    void* (__thiscall *fn)(void*, void*, int) = (void* (__thiscall *)(void*, void*, int))vtbl[0x38];
    fn(p, this, arg);
    return p;
}

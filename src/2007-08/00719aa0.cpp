// from server: 81% by colin
// roc 2007-08 00719aa0  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719aa0
//
// 00719aa0  56                   push esi
// 00719aa1  8bf1                 mov esi, ecx
// 00719aa3  e85805f2ff           call 0x63a000
// 00719aa8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00719aac  8b10                 mov edx, dword ptr [eax]
// 00719aae  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00719ab1  6a00                 push 0
// 00719ab3  56                   push esi
// 00719ab4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00719ab8  51                   push ecx
// 00719ab9  56                   push esi
// 00719aba  8bc8                 mov ecx, eax
// 00719abc  ffd2                 call edx
// 00719abe  8bc6                 mov eax, esi
// 00719ac0  5e                   pop esi
// 00719ac1  c20800               ret 8

struct CXTPRibbonControlSystemPopupBarButton
{
    void* GetSite();
    void* OnClick(void* item, int x);
};

void* CXTPRibbonControlSystemPopupBarButton::OnClick(void* item, int x)
{
    void* site = GetSite();
    void** vtable = *(void***)site;
    typedef void* (__thiscall *Fn)(void*, void*, int, int);
    Fn fn = (Fn)vtable[0x5c / 4];
    fn(site, item, x, 0);
    return item;
}

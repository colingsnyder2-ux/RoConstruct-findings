// from server: 100% by colin
// roc 2007-08 006a87c0  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a87c0
//
// 006a87c0  56                   push esi
// 006a87c1  8bf1                 mov esi, ecx
// 006a87c3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a87c9  e812f2ffff           call 0x6a79e0
// 006a87ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a87d2  8b10                 mov edx, dword ptr [eax]
// 006a87d4  8b9260010000         mov edx, dword ptr [edx + 0x160]
// 006a87da  56                   push esi
// 006a87db  51                   push ecx
// 006a87dc  8bc8                 mov ecx, eax
// 006a87de  ffd2                 call edx
// 006a87e0  5e                   pop esi
// 006a87e1  c20400               ret 4

struct CXTPControlQuickAccessMorePopup {
    char pad[0xfc];
    void* field_fc;
    void OnClick(int);
};

struct Helper {
    void* GetItem();
};

extern "C" void* __fastcall sub_6a79e0(void*);

void CXTPControlQuickAccessMorePopup::OnClick(int arg)
{
    Helper* h = (Helper*)sub_6a79e0(field_fc);
    void** vt = *(void***)h;
    void (__thiscall *fn)(void*, int, void*) = (void (__thiscall *)(void*, int, void*))vt[0x160/4];
    fn(h, arg, this);
}

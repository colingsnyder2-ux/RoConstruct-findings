// from server: 82% by colin
// roc 2007-08 006a85d0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a85d0
//
// 006a85d0  56                   push esi
// 006a85d1  8bf1                 mov esi, ecx
// 006a85d3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a85d9  e872b3f9ff           call 0x643950
// 006a85de  8bc8                 mov ecx, eax
// 006a85e0  e8fbf3ffff           call 0x6a79e0
// 006a85e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a85e9  8b10                 mov edx, dword ptr [eax]
// 006a85eb  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 006a85f1  56                   push esi
// 006a85f2  51                   push ecx
// 006a85f3  8bc8                 mov ecx, eax
// 006a85f5  ffd2                 call edx
// 006a85f7  5e                   pop esi
// 006a85f8  c20400               ret 4

struct CXTPRibbonBarControlQuickAccessPopup {
    char pad[0xfc];
    void* field_fc;
    void method_6a85d0(int);
};

extern "C" void* __fastcall sub_643950(void*);
extern "C" void* __fastcall sub_6a79e0(void*);

void CXTPRibbonBarControlQuickAccessPopup::method_6a85d0(int arg)
{
    void* p = sub_643950(field_fc);
    void* q = sub_6a79e0(p);
    void** vtbl = *(void***)q;
    void (__stdcall *fn)(void*, int, void*) = (void (__stdcall *)(void*, int, void*))vtbl[0x15c / 4];
    fn(q, arg, this);
}

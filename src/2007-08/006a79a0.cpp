// from server: 96% by colin
// roc 2007-08 006a79a0  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a79a0
//
// 006a79a0  56                   push esi
// 006a79a1  57                   push edi
// 006a79a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a79a6  85ff                 test edi, edi
// 006a79a8  8bf1                 mov esi, ecx
// 006a79aa  7425                 je 0x6a79d1
// 006a79ac  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 006a79b2  85c9                 test ecx, ecx
// 006a79b4  7405                 je 0x6a79bb
// 006a79b6  e82988f8ff           call 0x6301e4
// 006a79bb  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a79c1  8b01                 mov eax, dword ptr [ecx]
// 006a79c3  8b9024020000         mov edx, dword ptr [eax + 0x224]
// 006a79c9  ffd2                 call edx
// 006a79cb  89866c010000         mov dword ptr [esi + 0x16c], eax
// 006a79d1  57                   push edi
// 006a79d2  8bce                 mov ecx, esi
// 006a79d4  e89795fcff           call 0x670f70
// 006a79d9  5f                   pop edi
// 006a79da  5e                   pop esi
// 006a79db  c20400               ret 4

struct CXTPRibbonBar
{
    char pad[0xfc];
    void* field_fc;
    char pad2[0x16c - 0xfc - 4];
    void* field_16c;
    void sub_00670f70(void*);
    void sub_006301e4();
    void func_006a79a0(void*);
};

void CXTPRibbonBar::func_006a79a0(void* arg)
{
    if (arg != 0)
    {
        if (field_16c != 0)
        {
            ((CXTPRibbonBar*)field_16c)->sub_006301e4();
        }
        void** vtbl = *(void***)field_fc;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[0x224 / 4];
        field_16c = fn(field_fc);
    }
    sub_00670f70(arg);
}

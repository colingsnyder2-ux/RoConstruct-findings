// from server: 100% by king_originala
// roc 2008-06 00423ac0  unit: CSelectionTreeCtrl  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423ac0
//
// 00423ac0  56                   push esi
// 00423ac1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00423ac5  57                   push edi
// 00423ac6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00423aca  3bf7                 cmp esi, edi
// 00423acc  7418                 je 0x423ae6
// 00423ace  8bff                 mov edi, edi
// 00423ad0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00423ad4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00423ad8  56                   push esi
// 00423ad9  03c8                 add ecx, eax
// 00423adb  ff542424             call dword ptr [esp + 0x24]
// 00423adf  83c608               add esi, 8
// 00423ae2  3bf7                 cmp esi, edi
// 00423ae4  75ea                 jne 0x423ad0
// 00423ae6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00423aea  8b542420             mov edx, dword ptr [esp + 0x20]
// 00423aee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00423af2  8910                 mov dword ptr [eax], edx
// 00423af4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00423af8  894804               mov dword ptr [eax + 4], ecx
// 00423afb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00423aff  5f                   pop edi
// 00423b00  895008               mov dword ptr [eax + 8], edx
// 00423b03  89480c               mov dword ptr [eax + 0xc], ecx
// 00423b06  5e                   pop esi
// 00423b07  c3                   ret 

struct Target {};

struct Item
{
    char data[8];
};

struct Callback
{
    void (Target::*method)(Item*);
    int adjustment;
    Target* object;
    int extra;
};

Callback __cdecl function_00423ac0(
    int unused1, Item* first, int unused2, Item* last, Callback callback)
{
    while (first != last)
    {
        Target* object =
            (Target*)(callback.adjustment + (char*)callback.object);
        (object->*callback.method)(first);
        ++first;
    }
    return callback;
}

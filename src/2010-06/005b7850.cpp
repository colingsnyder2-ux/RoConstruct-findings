// roc 2010-06 005b7850  unit: RBX::GuiText::W4XAlignment::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7850
//
// 005b7850  8b442404             mov eax, dword ptr [esp + 4]
// 005b7854  56                   push esi
// 005b7855  57                   push edi
// 005b7856  50                   push eax
// 005b7857  8bf1                 mov esi, ecx
// 005b7859  e89265ffff           call 0x5addf0
// 005b785e  8b38                 mov edi, dword ptr [eax]
// 005b7860  83c404               add esp, 4
// 005b7863  85ff                 test edi, edi
// 005b7865  7d07                 jge 0x5b786e
// 005b7867  5f                   pop edi
// 005b7868  33c0                 xor eax, eax
// 005b786a  5e                   pop esi
// 005b786b  c20400               ret 4
// 005b786e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7874  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b787a  c1f902               sar ecx, 2
// 005b787d  3bf9                 cmp edi, ecx
// 005b787f  73e6                 jae 0x5b7867
// 005b7881  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7887  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b788d  c1fa02               sar edx, 2
// 005b7890  3bfa                 cmp edi, edx
// 005b7892  7206                 jb 0x5b789a
// 005b7894  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b789a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b78a0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b78a3  5f                   pop edi
// 005b78a4  5e                   pop esi
// 005b78a5  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAUItem@@ABUKey@@@Z)

#include <vector>

struct Key;
struct Item;

int *lookupIndex(const Key &key);

struct S
{
    char pad[0xa4];
    std::vector<Item *> items;
    Item *f(const Key &key);
};

Item *S::f(const Key &key)
{
    int index = *lookupIndex(key);
    if (index < 0)
        return 0;
    if ((size_t)index >= items.size())
        return 0;
    return items[index];
}
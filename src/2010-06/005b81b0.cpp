// roc 2010-06 005b81b0  unit: RBX::GuiService::W4SpecialKey::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b81b0
//
// 005b81b0  8b442404             mov eax, dword ptr [esp + 4]
// 005b81b4  56                   push esi
// 005b81b5  57                   push edi
// 005b81b6  50                   push eax
// 005b81b7  8bf1                 mov esi, ecx
// 005b81b9  e8a2a7ffff           call 0x5b2960
// 005b81be  8b38                 mov edi, dword ptr [eax]
// 005b81c0  83c404               add esp, 4
// 005b81c3  85ff                 test edi, edi
// 005b81c5  7d07                 jge 0x5b81ce
// 005b81c7  5f                   pop edi
// 005b81c8  33c0                 xor eax, eax
// 005b81ca  5e                   pop esi
// 005b81cb  c20400               ret 4
// 005b81ce  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b81d4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b81da  c1f902               sar ecx, 2
// 005b81dd  3bf9                 cmp edi, ecx
// 005b81df  73e6                 jae 0x5b81c7
// 005b81e1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b81e7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b81ed  c1fa02               sar edx, 2
// 005b81f0  3bfa                 cmp edi, edx
// 005b81f2  7206                 jb 0x5b81fa
// 005b81f4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b81fa  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b8200  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b8203  5f                   pop edi
// 005b8204  5e                   pop esi
// 005b8205  c20400               ret 4
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
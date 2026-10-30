// roc 2010-06 005b7eb0  unit: RBX::PyramidInstance::W4NumSidesEnum::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7eb0
//
// 005b7eb0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7eb4  56                   push esi
// 005b7eb5  57                   push edi
// 005b7eb6  50                   push eax
// 005b7eb7  8bf1                 mov esi, ecx
// 005b7eb9  e88292ffff           call 0x5b1140
// 005b7ebe  8b38                 mov edi, dword ptr [eax]
// 005b7ec0  83c404               add esp, 4
// 005b7ec3  85ff                 test edi, edi
// 005b7ec5  7d07                 jge 0x5b7ece
// 005b7ec7  5f                   pop edi
// 005b7ec8  33c0                 xor eax, eax
// 005b7eca  5e                   pop esi
// 005b7ecb  c20400               ret 4
// 005b7ece  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7ed4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7eda  c1f902               sar ecx, 2
// 005b7edd  3bf9                 cmp edi, ecx
// 005b7edf  73e6                 jae 0x5b7ec7
// 005b7ee1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7ee7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7eed  c1fa02               sar edx, 2
// 005b7ef0  3bfa                 cmp edi, edx
// 005b7ef2  7206                 jb 0x5b7efa
// 005b7ef4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7efa  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7f00  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7f03  5f                   pop edi
// 005b7f04  5e                   pop esi
// 005b7f05  c20400               ret 4
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
// roc 2010-06 005b7a90  unit: RBX::Feature::W4LeftRight::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7a90
//
// 005b7a90  8b442404             mov eax, dword ptr [esp + 4]
// 005b7a94  56                   push esi
// 005b7a95  57                   push edi
// 005b7a96  50                   push eax
// 005b7a97  8bf1                 mov esi, ecx
// 005b7a99  e8f274ffff           call 0x5aef90
// 005b7a9e  8b38                 mov edi, dword ptr [eax]
// 005b7aa0  83c404               add esp, 4
// 005b7aa3  85ff                 test edi, edi
// 005b7aa5  7d07                 jge 0x5b7aae
// 005b7aa7  5f                   pop edi
// 005b7aa8  33c0                 xor eax, eax
// 005b7aaa  5e                   pop esi
// 005b7aab  c20400               ret 4
// 005b7aae  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7ab4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7aba  c1f902               sar ecx, 2
// 005b7abd  3bf9                 cmp edi, ecx
// 005b7abf  73e6                 jae 0x5b7aa7
// 005b7ac1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7ac7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7acd  c1fa02               sar edx, 2
// 005b7ad0  3bfa                 cmp edi, edx
// 005b7ad2  7206                 jb 0x5b7ada
// 005b7ad4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7ada  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7ae0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7ae3  5f                   pop edi
// 005b7ae4  5e                   pop esi
// 005b7ae5  c20400               ret 4
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
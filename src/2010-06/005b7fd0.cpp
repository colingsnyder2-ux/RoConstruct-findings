// roc 2010-06 005b7fd0  unit: RBX::W4SoundType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7fd0
//
// 005b7fd0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7fd4  56                   push esi
// 005b7fd5  57                   push edi
// 005b7fd6  50                   push eax
// 005b7fd7  8bf1                 mov esi, ecx
// 005b7fd9  e8829affff           call 0x5b1a60
// 005b7fde  8b38                 mov edi, dword ptr [eax]
// 005b7fe0  83c404               add esp, 4
// 005b7fe3  85ff                 test edi, edi
// 005b7fe5  7d07                 jge 0x5b7fee
// 005b7fe7  5f                   pop edi
// 005b7fe8  33c0                 xor eax, eax
// 005b7fea  5e                   pop esi
// 005b7feb  c20400               ret 4
// 005b7fee  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7ff4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7ffa  c1f902               sar ecx, 2
// 005b7ffd  3bf9                 cmp edi, ecx
// 005b7fff  73e6                 jae 0x5b7fe7
// 005b8001  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b8007  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b800d  c1fa02               sar edx, 2
// 005b8010  3bfa                 cmp edi, edx
// 005b8012  7206                 jb 0x5b801a
// 005b8014  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b801a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b8020  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b8023  5f                   pop edi
// 005b8024  5e                   pop esi
// 005b8025  c20400               ret 4
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
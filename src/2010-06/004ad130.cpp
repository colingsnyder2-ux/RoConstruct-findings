// roc 2010-06 004ad130  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad130
//
// 004ad130  8b442404             mov eax, dword ptr [esp + 4]
// 004ad134  56                   push esi
// 004ad135  57                   push edi
// 004ad136  50                   push eax
// 004ad137  8bf1                 mov esi, ecx
// 004ad139  e862eaffff           call 0x4abba0
// 004ad13e  8b38                 mov edi, dword ptr [eax]
// 004ad140  83c404               add esp, 4
// 004ad143  85ff                 test edi, edi
// 004ad145  7d07                 jge 0x4ad14e
// 004ad147  5f                   pop edi
// 004ad148  33c0                 xor eax, eax
// 004ad14a  5e                   pop esi
// 004ad14b  c20400               ret 4
// 004ad14e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004ad154  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004ad15a  c1f902               sar ecx, 2
// 004ad15d  3bf9                 cmp edi, ecx
// 004ad15f  73e6                 jae 0x4ad147
// 004ad161  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004ad167  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004ad16d  c1fa02               sar edx, 2
// 004ad170  3bfa                 cmp edi, edx
// 004ad172  7206                 jb 0x4ad17a
// 004ad174  ff150ca99e00         call dword ptr [0x9ea90c]
// 004ad17a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004ad180  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004ad183  5f                   pop edi
// 004ad184  5e                   pop esi
// 004ad185  c20400               ret 4
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
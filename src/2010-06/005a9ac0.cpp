// roc 2010-06 005a9ac0  unit: RBX::W4NormalId::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a9ac0
//
// 005a9ac0  8b442404             mov eax, dword ptr [esp + 4]
// 005a9ac4  56                   push esi
// 005a9ac5  57                   push edi
// 005a9ac6  50                   push eax
// 005a9ac7  8bf1                 mov esi, ecx
// 005a9ac9  e8a2fdffff           call 0x5a9870
// 005a9ace  8b38                 mov edi, dword ptr [eax]
// 005a9ad0  83c404               add esp, 4
// 005a9ad3  85ff                 test edi, edi
// 005a9ad5  7d07                 jge 0x5a9ade
// 005a9ad7  5f                   pop edi
// 005a9ad8  33c0                 xor eax, eax
// 005a9ada  5e                   pop esi
// 005a9adb  c20400               ret 4
// 005a9ade  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005a9ae4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005a9aea  c1f902               sar ecx, 2
// 005a9aed  3bf9                 cmp edi, ecx
// 005a9aef  73e6                 jae 0x5a9ad7
// 005a9af1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005a9af7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005a9afd  c1fa02               sar edx, 2
// 005a9b00  3bfa                 cmp edi, edx
// 005a9b02  7206                 jb 0x5a9b0a
// 005a9b04  ff150ca99e00         call dword ptr [0x9ea90c]
// 005a9b0a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005a9b10  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005a9b13  5f                   pop edi
// 005a9b14  5e                   pop esi
// 005a9b15  c20400               ret 4
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
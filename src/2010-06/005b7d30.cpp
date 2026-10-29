// roc 2010-06 005b7d30  unit: RBX::BasicPartInstance::W4LegacyPartType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7d30
//
// 005b7d30  8b442404             mov eax, dword ptr [esp + 4]
// 005b7d34  56                   push esi
// 005b7d35  57                   push edi
// 005b7d36  50                   push eax
// 005b7d37  8bf1                 mov esi, ecx
// 005b7d39  e80288ffff           call 0x5b0540
// 005b7d3e  8b38                 mov edi, dword ptr [eax]
// 005b7d40  83c404               add esp, 4
// 005b7d43  85ff                 test edi, edi
// 005b7d45  7d07                 jge 0x5b7d4e
// 005b7d47  5f                   pop edi
// 005b7d48  33c0                 xor eax, eax
// 005b7d4a  5e                   pop esi
// 005b7d4b  c20400               ret 4
// 005b7d4e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7d54  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7d5a  c1f902               sar ecx, 2
// 005b7d5d  3bf9                 cmp edi, ecx
// 005b7d5f  73e6                 jae 0x5b7d47
// 005b7d61  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7d67  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7d6d  c1fa02               sar edx, 2
// 005b7d70  3bfa                 cmp edi, edx
// 005b7d72  7206                 jb 0x5b7d7a
// 005b7d74  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7d7a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7d80  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7d83  5f                   pop edi
// 005b7d84  5e                   pop esi
// 005b7d85  c20400               ret 4
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
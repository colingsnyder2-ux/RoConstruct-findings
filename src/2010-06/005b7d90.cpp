// roc 2010-06 005b7d90  unit: RBX::KeyframeSequence::W4Priority::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7d90
//
// 005b7d90  8b442404             mov eax, dword ptr [esp + 4]
// 005b7d94  56                   push esi
// 005b7d95  57                   push edi
// 005b7d96  50                   push eax
// 005b7d97  8bf1                 mov esi, ecx
// 005b7d99  e8928affff           call 0x5b0830
// 005b7d9e  8b38                 mov edi, dword ptr [eax]
// 005b7da0  83c404               add esp, 4
// 005b7da3  85ff                 test edi, edi
// 005b7da5  7d07                 jge 0x5b7dae
// 005b7da7  5f                   pop edi
// 005b7da8  33c0                 xor eax, eax
// 005b7daa  5e                   pop esi
// 005b7dab  c20400               ret 4
// 005b7dae  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7db4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7dba  c1f902               sar ecx, 2
// 005b7dbd  3bf9                 cmp edi, ecx
// 005b7dbf  73e6                 jae 0x5b7da7
// 005b7dc1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7dc7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7dcd  c1fa02               sar edx, 2
// 005b7dd0  3bfa                 cmp edi, edx
// 005b7dd2  7206                 jb 0x5b7dda
// 005b7dd4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7dda  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7de0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7de3  5f                   pop edi
// 005b7de4  5e                   pop esi
// 005b7de5  c20400               ret 4
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
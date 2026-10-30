// roc 2010-06 007a0c50  unit: W4_D3DDEVTYPE::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0c50
//
// 007a0c50  8b442404             mov eax, dword ptr [esp + 4]
// 007a0c54  56                   push esi
// 007a0c55  57                   push edi
// 007a0c56  50                   push eax
// 007a0c57  8bf1                 mov esi, ecx
// 007a0c59  e892faffff           call 0x7a06f0
// 007a0c5e  8b38                 mov edi, dword ptr [eax]
// 007a0c60  83c404               add esp, 4
// 007a0c63  85ff                 test edi, edi
// 007a0c65  7d07                 jge 0x7a0c6e
// 007a0c67  5f                   pop edi
// 007a0c68  33c0                 xor eax, eax
// 007a0c6a  5e                   pop esi
// 007a0c6b  c20400               ret 4
// 007a0c6e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 007a0c74  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 007a0c7a  c1f902               sar ecx, 2
// 007a0c7d  3bf9                 cmp edi, ecx
// 007a0c7f  73e6                 jae 0x7a0c67
// 007a0c81  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 007a0c87  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 007a0c8d  c1fa02               sar edx, 2
// 007a0c90  3bfa                 cmp edi, edx
// 007a0c92  7206                 jb 0x7a0c9a
// 007a0c94  ff150ca99e00         call dword ptr [0x9ea90c]
// 007a0c9a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 007a0ca0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 007a0ca3  5f                   pop edi
// 007a0ca4  5e                   pop esi
// 007a0ca5  c20400               ret 4
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
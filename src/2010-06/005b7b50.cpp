// roc 2010-06 005b7b50  unit: RBX::Joint::W4JointType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7b50
//
// 005b7b50  8b442404             mov eax, dword ptr [esp + 4]
// 005b7b54  56                   push esi
// 005b7b55  57                   push edi
// 005b7b56  50                   push eax
// 005b7b57  8bf1                 mov esi, ecx
// 005b7b59  e8127affff           call 0x5af570
// 005b7b5e  8b38                 mov edi, dword ptr [eax]
// 005b7b60  83c404               add esp, 4
// 005b7b63  85ff                 test edi, edi
// 005b7b65  7d07                 jge 0x5b7b6e
// 005b7b67  5f                   pop edi
// 005b7b68  33c0                 xor eax, eax
// 005b7b6a  5e                   pop esi
// 005b7b6b  c20400               ret 4
// 005b7b6e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7b74  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7b7a  c1f902               sar ecx, 2
// 005b7b7d  3bf9                 cmp edi, ecx
// 005b7b7f  73e6                 jae 0x5b7b67
// 005b7b81  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7b87  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7b8d  c1fa02               sar edx, 2
// 005b7b90  3bfa                 cmp edi, edx
// 005b7b92  7206                 jb 0x5b7b9a
// 005b7b94  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7b9a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7ba0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7ba3  5f                   pop edi
// 005b7ba4  5e                   pop esi
// 005b7ba5  c20400               ret 4
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
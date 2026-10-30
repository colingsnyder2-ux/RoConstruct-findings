// roc 2010-06 005b7e50  unit: RBX::PrismInstance::W4NumSidesEnum::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7e50
//
// 005b7e50  8b442404             mov eax, dword ptr [esp + 4]
// 005b7e54  56                   push esi
// 005b7e55  57                   push edi
// 005b7e56  50                   push eax
// 005b7e57  8bf1                 mov esi, ecx
// 005b7e59  e8f28fffff           call 0x5b0e50
// 005b7e5e  8b38                 mov edi, dword ptr [eax]
// 005b7e60  83c404               add esp, 4
// 005b7e63  85ff                 test edi, edi
// 005b7e65  7d07                 jge 0x5b7e6e
// 005b7e67  5f                   pop edi
// 005b7e68  33c0                 xor eax, eax
// 005b7e6a  5e                   pop esi
// 005b7e6b  c20400               ret 4
// 005b7e6e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7e74  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7e7a  c1f902               sar ecx, 2
// 005b7e7d  3bf9                 cmp edi, ecx
// 005b7e7f  73e6                 jae 0x5b7e67
// 005b7e81  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7e87  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7e8d  c1fa02               sar edx, 2
// 005b7e90  3bfa                 cmp edi, edx
// 005b7e92  7206                 jb 0x5b7e9a
// 005b7e94  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7e9a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7ea0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7ea3  5f                   pop edi
// 005b7ea4  5e                   pop esi
// 005b7ea5  c20400               ret 4
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
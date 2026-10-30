// roc 2010-06 005b7670  unit: RBX::Action::W4ActionType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7670
//
// 005b7670  8b442404             mov eax, dword ptr [esp + 4]
// 005b7674  56                   push esi
// 005b7675  57                   push edi
// 005b7676  50                   push eax
// 005b7677  8bf1                 mov esi, ecx
// 005b7679  e8d256ffff           call 0x5acd50
// 005b767e  8b38                 mov edi, dword ptr [eax]
// 005b7680  83c404               add esp, 4
// 005b7683  85ff                 test edi, edi
// 005b7685  7d07                 jge 0x5b768e
// 005b7687  5f                   pop edi
// 005b7688  33c0                 xor eax, eax
// 005b768a  5e                   pop esi
// 005b768b  c20400               ret 4
// 005b768e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7694  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b769a  c1f902               sar ecx, 2
// 005b769d  3bf9                 cmp edi, ecx
// 005b769f  73e6                 jae 0x5b7687
// 005b76a1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b76a7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b76ad  c1fa02               sar edx, 2
// 005b76b0  3bfa                 cmp edi, edx
// 005b76b2  7206                 jb 0x5b76ba
// 005b76b4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b76ba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b76c0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b76c3  5f                   pop edi
// 005b76c4  5e                   pop esi
// 005b76c5  c20400               ret 4
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
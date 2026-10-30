// roc 2010-06 00592380  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592380
//
// 00592380  8b442404             mov eax, dword ptr [esp + 4]
// 00592384  56                   push esi
// 00592385  57                   push edi
// 00592386  50                   push eax
// 00592387  8bf1                 mov esi, ecx
// 00592389  e842ffffff           call 0x5922d0
// 0059238e  8b38                 mov edi, dword ptr [eax]
// 00592390  83c404               add esp, 4
// 00592393  85ff                 test edi, edi
// 00592395  7d07                 jge 0x59239e
// 00592397  5f                   pop edi
// 00592398  33c0                 xor eax, eax
// 0059239a  5e                   pop esi
// 0059239b  c20400               ret 4
// 0059239e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005923a4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005923aa  c1f902               sar ecx, 2
// 005923ad  3bf9                 cmp edi, ecx
// 005923af  73e6                 jae 0x592397
// 005923b1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005923b7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005923bd  c1fa02               sar edx, 2
// 005923c0  3bfa                 cmp edi, edx
// 005923c2  7206                 jb 0x5923ca
// 005923c4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005923ca  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005923d0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005923d3  5f                   pop edi
// 005923d4  5e                   pop esi
// 005923d5  c20400               ret 4
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
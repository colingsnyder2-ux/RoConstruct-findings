// roc 2010-06 004d15e0  unit: W4PacketReliability::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d15e0
//
// 004d15e0  8b442404             mov eax, dword ptr [esp + 4]
// 004d15e4  56                   push esi
// 004d15e5  57                   push edi
// 004d15e6  50                   push eax
// 004d15e7  8bf1                 mov esi, ecx
// 004d15e9  e8e2f4ffff           call 0x4d0ad0
// 004d15ee  8b38                 mov edi, dword ptr [eax]
// 004d15f0  83c404               add esp, 4
// 004d15f3  85ff                 test edi, edi
// 004d15f5  7d07                 jge 0x4d15fe
// 004d15f7  5f                   pop edi
// 004d15f8  33c0                 xor eax, eax
// 004d15fa  5e                   pop esi
// 004d15fb  c20400               ret 4
// 004d15fe  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004d1604  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004d160a  c1f902               sar ecx, 2
// 004d160d  3bf9                 cmp edi, ecx
// 004d160f  73e6                 jae 0x4d15f7
// 004d1611  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004d1617  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004d161d  c1fa02               sar edx, 2
// 004d1620  3bfa                 cmp edi, edx
// 004d1622  7206                 jb 0x4d162a
// 004d1624  ff150ca99e00         call dword ptr [0x9ea90c]
// 004d162a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004d1630  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004d1633  5f                   pop edi
// 004d1634  5e                   pop esi
// 004d1635  c20400               ret 4
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
// roc 2010-06 005b76d0  unit: W4AffectType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b76d0
//
// 005b76d0  8b442404             mov eax, dword ptr [esp + 4]
// 005b76d4  56                   push esi
// 005b76d5  57                   push edi
// 005b76d6  50                   push eax
// 005b76d7  8bf1                 mov esi, ecx
// 005b76d9  e8525affff           call 0x5ad130
// 005b76de  8b38                 mov edi, dword ptr [eax]
// 005b76e0  83c404               add esp, 4
// 005b76e3  85ff                 test edi, edi
// 005b76e5  7d07                 jge 0x5b76ee
// 005b76e7  5f                   pop edi
// 005b76e8  33c0                 xor eax, eax
// 005b76ea  5e                   pop esi
// 005b76eb  c20400               ret 4
// 005b76ee  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b76f4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b76fa  c1f902               sar ecx, 2
// 005b76fd  3bf9                 cmp edi, ecx
// 005b76ff  73e6                 jae 0x5b76e7
// 005b7701  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7707  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b770d  c1fa02               sar edx, 2
// 005b7710  3bfa                 cmp edi, edx
// 005b7712  7206                 jb 0x5b771a
// 005b7714  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b771a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7720  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7723  5f                   pop edi
// 005b7724  5e                   pop esi
// 005b7725  c20400               ret 4
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
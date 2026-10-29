// roc 2010-06 005b7790  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7790
//
// 005b7790  8b442404             mov eax, dword ptr [esp + 4]
// 005b7794  56                   push esi
// 005b7795  57                   push edi
// 005b7796  50                   push eax
// 005b7797  8bf1                 mov esi, ecx
// 005b7799  e87260ffff           call 0x5ad810
// 005b779e  8b38                 mov edi, dword ptr [eax]
// 005b77a0  83c404               add esp, 4
// 005b77a3  85ff                 test edi, edi
// 005b77a5  7d07                 jge 0x5b77ae
// 005b77a7  5f                   pop edi
// 005b77a8  33c0                 xor eax, eax
// 005b77aa  5e                   pop esi
// 005b77ab  c20400               ret 4
// 005b77ae  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b77b4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b77ba  c1f902               sar ecx, 2
// 005b77bd  3bf9                 cmp edi, ecx
// 005b77bf  73e6                 jae 0x5b77a7
// 005b77c1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b77c7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b77cd  c1fa02               sar edx, 2
// 005b77d0  3bfa                 cmp edi, edx
// 005b77d2  7206                 jb 0x5b77da
// 005b77d4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b77da  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b77e0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b77e3  5f                   pop edi
// 005b77e4  5e                   pop esi
// 005b77e5  c20400               ret 4
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
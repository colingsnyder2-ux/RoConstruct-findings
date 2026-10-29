// roc 2010-06 005b7970  unit: RBX::LegacyController::W4InputType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7970
//
// 005b7970  8b442404             mov eax, dword ptr [esp + 4]
// 005b7974  56                   push esi
// 005b7975  57                   push edi
// 005b7976  50                   push eax
// 005b7977  8bf1                 mov esi, ecx
// 005b7979  e8426dffff           call 0x5ae6c0
// 005b797e  8b38                 mov edi, dword ptr [eax]
// 005b7980  83c404               add esp, 4
// 005b7983  85ff                 test edi, edi
// 005b7985  7d07                 jge 0x5b798e
// 005b7987  5f                   pop edi
// 005b7988  33c0                 xor eax, eax
// 005b798a  5e                   pop esi
// 005b798b  c20400               ret 4
// 005b798e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7994  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b799a  c1f902               sar ecx, 2
// 005b799d  3bf9                 cmp edi, ecx
// 005b799f  73e6                 jae 0x5b7987
// 005b79a1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b79a7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b79ad  c1fa02               sar edx, 2
// 005b79b0  3bfa                 cmp edi, edx
// 005b79b2  7206                 jb 0x5b79ba
// 005b79b4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b79ba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b79c0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b79c3  5f                   pop edi
// 005b79c4  5e                   pop esi
// 005b79c5  c20400               ret 4
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
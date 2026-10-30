// roc 2010-06 00590bb0  unit: RBX::TaskScheduler::Job::W4SleepAdjustMethod::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590bb0
//
// 00590bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00590bb4  56                   push esi
// 00590bb5  57                   push edi
// 00590bb6  50                   push eax
// 00590bb7  8bf1                 mov esi, ecx
// 00590bb9  e872f8ffff           call 0x590430
// 00590bbe  8b38                 mov edi, dword ptr [eax]
// 00590bc0  83c404               add esp, 4
// 00590bc3  85ff                 test edi, edi
// 00590bc5  7d07                 jge 0x590bce
// 00590bc7  5f                   pop edi
// 00590bc8  33c0                 xor eax, eax
// 00590bca  5e                   pop esi
// 00590bcb  c20400               ret 4
// 00590bce  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590bd4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590bda  c1f902               sar ecx, 2
// 00590bdd  3bf9                 cmp edi, ecx
// 00590bdf  73e6                 jae 0x590bc7
// 00590be1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590be7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590bed  c1fa02               sar edx, 2
// 00590bf0  3bfa                 cmp edi, edx
// 00590bf2  7206                 jb 0x590bfa
// 00590bf4  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590bfa  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590c00  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590c03  5f                   pop edi
// 00590c04  5e                   pop esi
// 00590c05  c20400               ret 4
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
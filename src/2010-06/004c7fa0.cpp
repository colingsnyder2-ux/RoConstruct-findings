// roc 2010-06 004c7fa0  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c7fa0
//
// 004c7fa0  8b442404             mov eax, dword ptr [esp + 4]
// 004c7fa4  56                   push esi
// 004c7fa5  57                   push edi
// 004c7fa6  50                   push eax
// 004c7fa7  8bf1                 mov esi, ecx
// 004c7fa9  e862ecffff           call 0x4c6c10
// 004c7fae  8b38                 mov edi, dword ptr [eax]
// 004c7fb0  83c404               add esp, 4
// 004c7fb3  85ff                 test edi, edi
// 004c7fb5  7d07                 jge 0x4c7fbe
// 004c7fb7  5f                   pop edi
// 004c7fb8  33c0                 xor eax, eax
// 004c7fba  5e                   pop esi
// 004c7fbb  c20400               ret 4
// 004c7fbe  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004c7fc4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004c7fca  c1f902               sar ecx, 2
// 004c7fcd  3bf9                 cmp edi, ecx
// 004c7fcf  73e6                 jae 0x4c7fb7
// 004c7fd1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004c7fd7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004c7fdd  c1fa02               sar edx, 2
// 004c7fe0  3bfa                 cmp edi, edx
// 004c7fe2  7206                 jb 0x4c7fea
// 004c7fe4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c7fea  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004c7ff0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004c7ff3  5f                   pop edi
// 004c7ff4  5e                   pop esi
// 004c7ff5  c20400               ret 4
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
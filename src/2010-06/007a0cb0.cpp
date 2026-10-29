// roc 2010-06 007a0cb0  unit: W4_D3DFORMAT::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0cb0
//
// 007a0cb0  8b442404             mov eax, dword ptr [esp + 4]
// 007a0cb4  56                   push esi
// 007a0cb5  57                   push edi
// 007a0cb6  50                   push eax
// 007a0cb7  8bf1                 mov esi, ecx
// 007a0cb9  e8b2feffff           call 0x7a0b70
// 007a0cbe  8b38                 mov edi, dword ptr [eax]
// 007a0cc0  83c404               add esp, 4
// 007a0cc3  85ff                 test edi, edi
// 007a0cc5  7d07                 jge 0x7a0cce
// 007a0cc7  5f                   pop edi
// 007a0cc8  33c0                 xor eax, eax
// 007a0cca  5e                   pop esi
// 007a0ccb  c20400               ret 4
// 007a0cce  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 007a0cd4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 007a0cda  c1f902               sar ecx, 2
// 007a0cdd  3bf9                 cmp edi, ecx
// 007a0cdf  73e6                 jae 0x7a0cc7
// 007a0ce1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 007a0ce7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 007a0ced  c1fa02               sar edx, 2
// 007a0cf0  3bfa                 cmp edi, edx
// 007a0cf2  7206                 jb 0x7a0cfa
// 007a0cf4  ff150ca99e00         call dword ptr [0x9ea90c]
// 007a0cfa  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 007a0d00  8b04b8               mov eax, dword ptr [eax + edi*4]
// 007a0d03  5f                   pop edi
// 007a0d04  5e                   pop esi
// 007a0d05  c20400               ret 4
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
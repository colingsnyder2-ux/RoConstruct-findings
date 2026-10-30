// roc 2010-06 005b80f0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b80f0
//
// 005b80f0  8b442404             mov eax, dword ptr [esp + 4]
// 005b80f4  56                   push esi
// 005b80f5  57                   push edi
// 005b80f6  50                   push eax
// 005b80f7  8bf1                 mov esi, ecx
// 005b80f9  e832a2ffff           call 0x5b2330
// 005b80fe  8b38                 mov edi, dword ptr [eax]
// 005b8100  83c404               add esp, 4
// 005b8103  85ff                 test edi, edi
// 005b8105  7d07                 jge 0x5b810e
// 005b8107  5f                   pop edi
// 005b8108  33c0                 xor eax, eax
// 005b810a  5e                   pop esi
// 005b810b  c20400               ret 4
// 005b810e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b8114  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b811a  c1f902               sar ecx, 2
// 005b811d  3bf9                 cmp edi, ecx
// 005b811f  73e6                 jae 0x5b8107
// 005b8121  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b8127  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b812d  c1fa02               sar edx, 2
// 005b8130  3bfa                 cmp edi, edx
// 005b8132  7206                 jb 0x5b813a
// 005b8134  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b813a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b8140  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b8143  5f                   pop edi
// 005b8144  5e                   pop esi
// 005b8145  c20400               ret 4
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
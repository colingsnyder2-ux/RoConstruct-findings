// roc 2010-06 005b8090  unit: RBX::W4SurfaceType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8090
//
// 005b8090  8b442404             mov eax, dword ptr [esp + 4]
// 005b8094  56                   push esi
// 005b8095  57                   push edi
// 005b8096  50                   push eax
// 005b8097  8bf1                 mov esi, ecx
// 005b8099  e8a29fffff           call 0x5b2040
// 005b809e  8b38                 mov edi, dword ptr [eax]
// 005b80a0  83c404               add esp, 4
// 005b80a3  85ff                 test edi, edi
// 005b80a5  7d07                 jge 0x5b80ae
// 005b80a7  5f                   pop edi
// 005b80a8  33c0                 xor eax, eax
// 005b80aa  5e                   pop esi
// 005b80ab  c20400               ret 4
// 005b80ae  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b80b4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b80ba  c1f902               sar ecx, 2
// 005b80bd  3bf9                 cmp edi, ecx
// 005b80bf  73e6                 jae 0x5b80a7
// 005b80c1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b80c7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b80cd  c1fa02               sar edx, 2
// 005b80d0  3bfa                 cmp edi, edx
// 005b80d2  7206                 jb 0x5b80da
// 005b80d4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b80da  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b80e0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b80e3  5f                   pop edi
// 005b80e4  5e                   pop esi
// 005b80e5  c20400               ret 4
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
// roc 2010-06 005b7c10  unit: RBX::Legacy::W4SurfaceConstraint::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7c10
//
// 005b7c10  8b442404             mov eax, dword ptr [esp + 4]
// 005b7c14  56                   push esi
// 005b7c15  57                   push edi
// 005b7c16  50                   push eax
// 005b7c17  8bf1                 mov esi, ecx
// 005b7c19  e8327fffff           call 0x5afb50
// 005b7c1e  8b38                 mov edi, dword ptr [eax]
// 005b7c20  83c404               add esp, 4
// 005b7c23  85ff                 test edi, edi
// 005b7c25  7d07                 jge 0x5b7c2e
// 005b7c27  5f                   pop edi
// 005b7c28  33c0                 xor eax, eax
// 005b7c2a  5e                   pop esi
// 005b7c2b  c20400               ret 4
// 005b7c2e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7c34  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7c3a  c1f902               sar ecx, 2
// 005b7c3d  3bf9                 cmp edi, ecx
// 005b7c3f  73e6                 jae 0x5b7c27
// 005b7c41  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7c47  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7c4d  c1fa02               sar edx, 2
// 005b7c50  3bfa                 cmp edi, edx
// 005b7c52  7206                 jb 0x5b7c5a
// 005b7c54  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7c5a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7c60  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7c63  5f                   pop edi
// 005b7c64  5e                   pop esi
// 005b7c65  c20400               ret 4
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
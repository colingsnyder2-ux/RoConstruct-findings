// roc 2010-06 005b79d0  unit: RBX::DataModelMesh::W4LODType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b79d0
//
// 005b79d0  8b442404             mov eax, dword ptr [esp + 4]
// 005b79d4  56                   push esi
// 005b79d5  57                   push edi
// 005b79d6  50                   push eax
// 005b79d7  8bf1                 mov esi, ecx
// 005b79d9  e8d26fffff           call 0x5ae9b0
// 005b79de  8b38                 mov edi, dword ptr [eax]
// 005b79e0  83c404               add esp, 4
// 005b79e3  85ff                 test edi, edi
// 005b79e5  7d07                 jge 0x5b79ee
// 005b79e7  5f                   pop edi
// 005b79e8  33c0                 xor eax, eax
// 005b79ea  5e                   pop esi
// 005b79eb  c20400               ret 4
// 005b79ee  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b79f4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b79fa  c1f902               sar ecx, 2
// 005b79fd  3bf9                 cmp edi, ecx
// 005b79ff  73e6                 jae 0x5b79e7
// 005b7a01  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7a07  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7a0d  c1fa02               sar edx, 2
// 005b7a10  3bfa                 cmp edi, edx
// 005b7a12  7206                 jb 0x5b7a1a
// 005b7a14  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7a1a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7a20  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7a23  5f                   pop edi
// 005b7a24  5e                   pop esi
// 005b7a25  c20400               ret 4
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
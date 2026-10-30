// roc 2010-06 005b7c70  unit: G3D::Vector3::W4Axis::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7c70
//
// 005b7c70  8b442404             mov eax, dword ptr [esp + 4]
// 005b7c74  56                   push esi
// 005b7c75  57                   push edi
// 005b7c76  50                   push eax
// 005b7c77  8bf1                 mov esi, ecx
// 005b7c79  e81282ffff           call 0x5afe90
// 005b7c7e  8b38                 mov edi, dword ptr [eax]
// 005b7c80  83c404               add esp, 4
// 005b7c83  85ff                 test edi, edi
// 005b7c85  7d07                 jge 0x5b7c8e
// 005b7c87  5f                   pop edi
// 005b7c88  33c0                 xor eax, eax
// 005b7c8a  5e                   pop esi
// 005b7c8b  c20400               ret 4
// 005b7c8e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7c94  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7c9a  c1f902               sar ecx, 2
// 005b7c9d  3bf9                 cmp edi, ecx
// 005b7c9f  73e6                 jae 0x5b7c87
// 005b7ca1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7ca7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7cad  c1fa02               sar edx, 2
// 005b7cb0  3bfa                 cmp edi, edx
// 005b7cb2  7206                 jb 0x5b7cba
// 005b7cb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7cba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7cc0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7cc3  5f                   pop edi
// 005b7cc4  5e                   pop esi
// 005b7cc5  c20400               ret 4
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
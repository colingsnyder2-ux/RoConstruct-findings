// roc 2010-06 005b7a30  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7a30
//
// 005b7a30  8b442404             mov eax, dword ptr [esp + 4]
// 005b7a34  56                   push esi
// 005b7a35  57                   push edi
// 005b7a36  50                   push eax
// 005b7a37  8bf1                 mov esi, ecx
// 005b7a39  e86272ffff           call 0x5aeca0
// 005b7a3e  8b38                 mov edi, dword ptr [eax]
// 005b7a40  83c404               add esp, 4
// 005b7a43  85ff                 test edi, edi
// 005b7a45  7d07                 jge 0x5b7a4e
// 005b7a47  5f                   pop edi
// 005b7a48  33c0                 xor eax, eax
// 005b7a4a  5e                   pop esi
// 005b7a4b  c20400               ret 4
// 005b7a4e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7a54  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7a5a  c1f902               sar ecx, 2
// 005b7a5d  3bf9                 cmp edi, ecx
// 005b7a5f  73e6                 jae 0x5b7a47
// 005b7a61  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7a67  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7a6d  c1fa02               sar edx, 2
// 005b7a70  3bfa                 cmp edi, edx
// 005b7a72  7206                 jb 0x5b7a7a
// 005b7a74  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7a7a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7a80  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7a83  5f                   pop edi
// 005b7a84  5e                   pop esi
// 005b7a85  c20400               ret 4
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
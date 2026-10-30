// roc 2010-06 005b7df0  unit: RBX::ExtrudedPartInstance::W4VisualTrussStyle::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7df0
//
// 005b7df0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7df4  56                   push esi
// 005b7df5  57                   push edi
// 005b7df6  50                   push eax
// 005b7df7  8bf1                 mov esi, ecx
// 005b7df9  e8628dffff           call 0x5b0b60
// 005b7dfe  8b38                 mov edi, dword ptr [eax]
// 005b7e00  83c404               add esp, 4
// 005b7e03  85ff                 test edi, edi
// 005b7e05  7d07                 jge 0x5b7e0e
// 005b7e07  5f                   pop edi
// 005b7e08  33c0                 xor eax, eax
// 005b7e0a  5e                   pop esi
// 005b7e0b  c20400               ret 4
// 005b7e0e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7e14  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7e1a  c1f902               sar ecx, 2
// 005b7e1d  3bf9                 cmp edi, ecx
// 005b7e1f  73e6                 jae 0x5b7e07
// 005b7e21  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7e27  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7e2d  c1fa02               sar edx, 2
// 005b7e30  3bfa                 cmp edi, edx
// 005b7e32  7206                 jb 0x5b7e3a
// 005b7e34  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7e3a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7e40  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7e43  5f                   pop edi
// 005b7e44  5e                   pop esi
// 005b7e45  c20400               ret 4
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
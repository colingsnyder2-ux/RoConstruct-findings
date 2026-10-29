// roc 2010-06 005b7af0  unit: RBX::Feature::W4TopBottom::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7af0
//
// 005b7af0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7af4  56                   push esi
// 005b7af5  57                   push edi
// 005b7af6  50                   push eax
// 005b7af7  8bf1                 mov esi, ecx
// 005b7af9  e88277ffff           call 0x5af280
// 005b7afe  8b38                 mov edi, dword ptr [eax]
// 005b7b00  83c404               add esp, 4
// 005b7b03  85ff                 test edi, edi
// 005b7b05  7d07                 jge 0x5b7b0e
// 005b7b07  5f                   pop edi
// 005b7b08  33c0                 xor eax, eax
// 005b7b0a  5e                   pop esi
// 005b7b0b  c20400               ret 4
// 005b7b0e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7b14  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7b1a  c1f902               sar ecx, 2
// 005b7b1d  3bf9                 cmp edi, ecx
// 005b7b1f  73e6                 jae 0x5b7b07
// 005b7b21  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7b27  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7b2d  c1fa02               sar edx, 2
// 005b7b30  3bfa                 cmp edi, edx
// 005b7b32  7206                 jb 0x5b7b3a
// 005b7b34  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7b3a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7b40  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7b43  5f                   pop edi
// 005b7b44  5e                   pop esi
// 005b7b45  c20400               ret 4
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
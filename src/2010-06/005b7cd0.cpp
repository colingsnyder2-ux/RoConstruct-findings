// roc 2010-06 005b7cd0  unit: RBX::Humanoid::W4Status::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7cd0
//
// 005b7cd0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7cd4  56                   push esi
// 005b7cd5  57                   push edi
// 005b7cd6  50                   push eax
// 005b7cd7  8bf1                 mov esi, ecx
// 005b7cd9  e87285ffff           call 0x5b0250
// 005b7cde  8b38                 mov edi, dword ptr [eax]
// 005b7ce0  83c404               add esp, 4
// 005b7ce3  85ff                 test edi, edi
// 005b7ce5  7d07                 jge 0x5b7cee
// 005b7ce7  5f                   pop edi
// 005b7ce8  33c0                 xor eax, eax
// 005b7cea  5e                   pop esi
// 005b7ceb  c20400               ret 4
// 005b7cee  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7cf4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7cfa  c1f902               sar ecx, 2
// 005b7cfd  3bf9                 cmp edi, ecx
// 005b7cff  73e6                 jae 0x5b7ce7
// 005b7d01  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7d07  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7d0d  c1fa02               sar edx, 2
// 005b7d10  3bfa                 cmp edi, edx
// 005b7d12  7206                 jb 0x5b7d1a
// 005b7d14  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7d1a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7d20  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7d23  5f                   pop edi
// 005b7d24  5e                   pop esi
// 005b7d25  c20400               ret 4
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
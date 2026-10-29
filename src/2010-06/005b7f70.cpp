// roc 2010-06 005b7f70  unit: RBX::SkateboardPlatform::W4MoveState::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7f70
//
// 005b7f70  8b442404             mov eax, dword ptr [esp + 4]
// 005b7f74  56                   push esi
// 005b7f75  57                   push edi
// 005b7f76  50                   push eax
// 005b7f77  8bf1                 mov esi, ecx
// 005b7f79  e8a297ffff           call 0x5b1720
// 005b7f7e  8b38                 mov edi, dword ptr [eax]
// 005b7f80  83c404               add esp, 4
// 005b7f83  85ff                 test edi, edi
// 005b7f85  7d07                 jge 0x5b7f8e
// 005b7f87  5f                   pop edi
// 005b7f88  33c0                 xor eax, eax
// 005b7f8a  5e                   pop esi
// 005b7f8b  c20400               ret 4
// 005b7f8e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7f94  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b7f9a  c1f902               sar ecx, 2
// 005b7f9d  3bf9                 cmp edi, ecx
// 005b7f9f  73e6                 jae 0x5b7f87
// 005b7fa1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7fa7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b7fad  c1fa02               sar edx, 2
// 005b7fb0  3bfa                 cmp edi, edx
// 005b7fb2  7206                 jb 0x5b7fba
// 005b7fb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b7fba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7fc0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7fc3  5f                   pop edi
// 005b7fc4  5e                   pop esi
// 005b7fc5  c20400               ret 4
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
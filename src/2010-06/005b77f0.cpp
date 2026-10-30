// roc 2010-06 005b77f0  unit: RBX::GuiObject::W4SizeConstraint::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b77f0
//
// 005b77f0  8b442404             mov eax, dword ptr [esp + 4]
// 005b77f4  56                   push esi
// 005b77f5  57                   push edi
// 005b77f6  50                   push eax
// 005b77f7  8bf1                 mov esi, ecx
// 005b77f9  e80263ffff           call 0x5adb00
// 005b77fe  8b38                 mov edi, dword ptr [eax]
// 005b7800  83c404               add esp, 4
// 005b7803  85ff                 test edi, edi
// 005b7805  7d07                 jge 0x5b780e
// 005b7807  5f                   pop edi
// 005b7808  33c0                 xor eax, eax
// 005b780a  5e                   pop esi
// 005b780b  c20400               ret 4
// 005b780e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7814  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b781a  c1f902               sar ecx, 2
// 005b781d  3bf9                 cmp edi, ecx
// 005b781f  73e6                 jae 0x5b7807
// 005b7821  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7827  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b782d  c1fa02               sar edx, 2
// 005b7830  3bfa                 cmp edi, edx
// 005b7832  7206                 jb 0x5b783a
// 005b7834  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b783a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7840  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7843  5f                   pop edi
// 005b7844  5e                   pop esi
// 005b7845  c20400               ret 4
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
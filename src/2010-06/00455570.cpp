// roc 2010-06 00455570  unit: RBX::PartInstance::W4Material::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455570
//
// 00455570  8b442404             mov eax, dword ptr [esp + 4]
// 00455574  56                   push esi
// 00455575  57                   push edi
// 00455576  50                   push eax
// 00455577  8bf1                 mov esi, ecx
// 00455579  e862ffffff           call 0x4554e0
// 0045557e  8b38                 mov edi, dword ptr [eax]
// 00455580  83c404               add esp, 4
// 00455583  85ff                 test edi, edi
// 00455585  7d07                 jge 0x45558e
// 00455587  5f                   pop edi
// 00455588  33c0                 xor eax, eax
// 0045558a  5e                   pop esi
// 0045558b  c20400               ret 4
// 0045558e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00455594  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0045559a  c1f902               sar ecx, 2
// 0045559d  3bf9                 cmp edi, ecx
// 0045559f  73e6                 jae 0x455587
// 004555a1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004555a7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004555ad  c1fa02               sar edx, 2
// 004555b0  3bfa                 cmp edi, edx
// 004555b2  7206                 jb 0x4555ba
// 004555b4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004555ba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004555c0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004555c3  5f                   pop edi
// 004555c4  5e                   pop esi
// 004555c5  c20400               ret 4
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
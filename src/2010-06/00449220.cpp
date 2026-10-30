// roc 2010-06 00449220  unit: RBX::CRenderSettings::W4BevelMode::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00449220
//
// 00449220  8b442404             mov eax, dword ptr [esp + 4]
// 00449224  56                   push esi
// 00449225  57                   push edi
// 00449226  50                   push eax
// 00449227  8bf1                 mov esi, ecx
// 00449229  e8e2f8ffff           call 0x448b10
// 0044922e  8b38                 mov edi, dword ptr [eax]
// 00449230  83c404               add esp, 4
// 00449233  85ff                 test edi, edi
// 00449235  7d07                 jge 0x44923e
// 00449237  5f                   pop edi
// 00449238  33c0                 xor eax, eax
// 0044923a  5e                   pop esi
// 0044923b  c20400               ret 4
// 0044923e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00449244  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0044924a  c1f902               sar ecx, 2
// 0044924d  3bf9                 cmp edi, ecx
// 0044924f  73e6                 jae 0x449237
// 00449251  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00449257  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0044925d  c1fa02               sar edx, 2
// 00449260  3bfa                 cmp edi, edx
// 00449262  7206                 jb 0x44926a
// 00449264  ff150ca99e00         call dword ptr [0x9ea90c]
// 0044926a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00449270  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00449273  5f                   pop edi
// 00449274  5e                   pop esi
// 00449275  c20400               ret 4
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
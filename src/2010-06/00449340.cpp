// roc 2010-06 00449340  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00449340
//
// 00449340  8b442404             mov eax, dword ptr [esp + 4]
// 00449344  56                   push esi
// 00449345  57                   push edi
// 00449346  50                   push eax
// 00449347  8bf1                 mov esi, ecx
// 00449349  e872f9ffff           call 0x448cc0
// 0044934e  8b38                 mov edi, dword ptr [eax]
// 00449350  83c404               add esp, 4
// 00449353  85ff                 test edi, edi
// 00449355  7d07                 jge 0x44935e
// 00449357  5f                   pop edi
// 00449358  33c0                 xor eax, eax
// 0044935a  5e                   pop esi
// 0044935b  c20400               ret 4
// 0044935e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00449364  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0044936a  c1f902               sar ecx, 2
// 0044936d  3bf9                 cmp edi, ecx
// 0044936f  73e6                 jae 0x449357
// 00449371  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00449377  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0044937d  c1fa02               sar edx, 2
// 00449380  3bfa                 cmp edi, edx
// 00449382  7206                 jb 0x44938a
// 00449384  ff150ca99e00         call dword ptr [0x9ea90c]
// 0044938a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00449390  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00449393  5f                   pop edi
// 00449394  5e                   pop esi
// 00449395  c20400               ret 4
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
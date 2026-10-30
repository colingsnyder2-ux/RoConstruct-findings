// roc 2010-06 00449280  unit: RBX::CRenderSettings::W4GeometryQuality::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00449280
//
// 00449280  8b442404             mov eax, dword ptr [esp + 4]
// 00449284  56                   push esi
// 00449285  57                   push edi
// 00449286  50                   push eax
// 00449287  8bf1                 mov esi, ecx
// 00449289  e812f9ffff           call 0x448ba0
// 0044928e  8b38                 mov edi, dword ptr [eax]
// 00449290  83c404               add esp, 4
// 00449293  85ff                 test edi, edi
// 00449295  7d07                 jge 0x44929e
// 00449297  5f                   pop edi
// 00449298  33c0                 xor eax, eax
// 0044929a  5e                   pop esi
// 0044929b  c20400               ret 4
// 0044929e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004492a4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004492aa  c1f902               sar ecx, 2
// 004492ad  3bf9                 cmp edi, ecx
// 004492af  73e6                 jae 0x449297
// 004492b1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004492b7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004492bd  c1fa02               sar edx, 2
// 004492c0  3bfa                 cmp edi, edx
// 004492c2  7206                 jb 0x4492ca
// 004492c4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004492ca  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004492d0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004492d3  5f                   pop edi
// 004492d4  5e                   pop esi
// 004492d5  c20400               ret 4
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
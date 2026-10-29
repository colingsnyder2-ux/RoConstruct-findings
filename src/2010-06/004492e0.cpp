// roc 2010-06 004492e0  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004492e0
//
// 004492e0  8b442404             mov eax, dword ptr [esp + 4]
// 004492e4  56                   push esi
// 004492e5  57                   push edi
// 004492e6  50                   push eax
// 004492e7  8bf1                 mov esi, ecx
// 004492e9  e842f9ffff           call 0x448c30
// 004492ee  8b38                 mov edi, dword ptr [eax]
// 004492f0  83c404               add esp, 4
// 004492f3  85ff                 test edi, edi
// 004492f5  7d07                 jge 0x4492fe
// 004492f7  5f                   pop edi
// 004492f8  33c0                 xor eax, eax
// 004492fa  5e                   pop esi
// 004492fb  c20400               ret 4
// 004492fe  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00449304  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0044930a  c1f902               sar ecx, 2
// 0044930d  3bf9                 cmp edi, ecx
// 0044930f  73e6                 jae 0x4492f7
// 00449311  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00449317  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0044931d  c1fa02               sar edx, 2
// 00449320  3bfa                 cmp edi, edx
// 00449322  7206                 jb 0x44932a
// 00449324  ff150ca99e00         call dword ptr [0x9ea90c]
// 0044932a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00449330  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00449333  5f                   pop edi
// 00449334  5e                   pop esi
// 00449335  c20400               ret 4
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
// roc 2010-06 00449100  unit: RBX::CRenderSettings::W4GraphicsMode::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00449100
//
// 00449100  8b442404             mov eax, dword ptr [esp + 4]
// 00449104  56                   push esi
// 00449105  57                   push edi
// 00449106  50                   push eax
// 00449107  8bf1                 mov esi, ecx
// 00449109  e852f8ffff           call 0x448960
// 0044910e  8b38                 mov edi, dword ptr [eax]
// 00449110  83c404               add esp, 4
// 00449113  85ff                 test edi, edi
// 00449115  7d07                 jge 0x44911e
// 00449117  5f                   pop edi
// 00449118  33c0                 xor eax, eax
// 0044911a  5e                   pop esi
// 0044911b  c20400               ret 4
// 0044911e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00449124  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0044912a  c1f902               sar ecx, 2
// 0044912d  3bf9                 cmp edi, ecx
// 0044912f  73e6                 jae 0x449117
// 00449131  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00449137  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0044913d  c1fa02               sar edx, 2
// 00449140  3bfa                 cmp edi, edx
// 00449142  7206                 jb 0x44914a
// 00449144  ff150ca99e00         call dword ptr [0x9ea90c]
// 0044914a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00449150  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00449153  5f                   pop edi
// 00449154  5e                   pop esi
// 00449155  c20400               ret 4
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
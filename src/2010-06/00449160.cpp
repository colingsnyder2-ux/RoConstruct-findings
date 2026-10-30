// roc 2010-06 00449160  unit: RBX::CRenderSettings::W4FrameRateManagerMode::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00449160
//
// 00449160  8b442404             mov eax, dword ptr [esp + 4]
// 00449164  56                   push esi
// 00449165  57                   push edi
// 00449166  50                   push eax
// 00449167  8bf1                 mov esi, ecx
// 00449169  e882f8ffff           call 0x4489f0
// 0044916e  8b38                 mov edi, dword ptr [eax]
// 00449170  83c404               add esp, 4
// 00449173  85ff                 test edi, edi
// 00449175  7d07                 jge 0x44917e
// 00449177  5f                   pop edi
// 00449178  33c0                 xor eax, eax
// 0044917a  5e                   pop esi
// 0044917b  c20400               ret 4
// 0044917e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00449184  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0044918a  c1f902               sar ecx, 2
// 0044918d  3bf9                 cmp edi, ecx
// 0044918f  73e6                 jae 0x449177
// 00449191  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00449197  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0044919d  c1fa02               sar edx, 2
// 004491a0  3bfa                 cmp edi, edx
// 004491a2  7206                 jb 0x4491aa
// 004491a4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004491aa  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004491b0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004491b3  5f                   pop edi
// 004491b4  5e                   pop esi
// 004491b5  c20400               ret 4
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
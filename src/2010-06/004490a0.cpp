// roc 2010-06 004490a0  unit: RBX::CRenderSettings::W4AASamples::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004490a0
//
// 004490a0  8b442404             mov eax, dword ptr [esp + 4]
// 004490a4  56                   push esi
// 004490a5  57                   push edi
// 004490a6  50                   push eax
// 004490a7  8bf1                 mov esi, ecx
// 004490a9  e822f8ffff           call 0x4488d0
// 004490ae  8b38                 mov edi, dword ptr [eax]
// 004490b0  83c404               add esp, 4
// 004490b3  85ff                 test edi, edi
// 004490b5  7d07                 jge 0x4490be
// 004490b7  5f                   pop edi
// 004490b8  33c0                 xor eax, eax
// 004490ba  5e                   pop esi
// 004490bb  c20400               ret 4
// 004490be  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004490c4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004490ca  c1f902               sar ecx, 2
// 004490cd  3bf9                 cmp edi, ecx
// 004490cf  73e6                 jae 0x4490b7
// 004490d1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004490d7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004490dd  c1fa02               sar edx, 2
// 004490e0  3bfa                 cmp edi, edx
// 004490e2  7206                 jb 0x4490ea
// 004490e4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004490ea  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004490f0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004490f3  5f                   pop edi
// 004490f4  5e                   pop esi
// 004490f5  c20400               ret 4
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
// roc 2010-06 004491c0  unit: RBX::CRenderSettings::W4AntialiasingMode::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004491c0
//
// 004491c0  8b442404             mov eax, dword ptr [esp + 4]
// 004491c4  56                   push esi
// 004491c5  57                   push edi
// 004491c6  50                   push eax
// 004491c7  8bf1                 mov esi, ecx
// 004491c9  e8b2f8ffff           call 0x448a80
// 004491ce  8b38                 mov edi, dword ptr [eax]
// 004491d0  83c404               add esp, 4
// 004491d3  85ff                 test edi, edi
// 004491d5  7d07                 jge 0x4491de
// 004491d7  5f                   pop edi
// 004491d8  33c0                 xor eax, eax
// 004491da  5e                   pop esi
// 004491db  c20400               ret 4
// 004491de  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004491e4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004491ea  c1f902               sar ecx, 2
// 004491ed  3bf9                 cmp edi, ecx
// 004491ef  73e6                 jae 0x4491d7
// 004491f1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004491f7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004491fd  c1fa02               sar edx, 2
// 00449200  3bfa                 cmp edi, edx
// 00449202  7206                 jb 0x44920a
// 00449204  ff150ca99e00         call dword ptr [0x9ea90c]
// 0044920a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00449210  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00449213  5f                   pop edi
// 00449214  5e                   pop esi
// 00449215  c20400               ret 4
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
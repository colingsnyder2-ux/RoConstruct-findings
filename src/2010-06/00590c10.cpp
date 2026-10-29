// roc 2010-06 00590c10  unit: RBX::DebugSettings::W4ErrorReporting::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590c10
//
// 00590c10  8b442404             mov eax, dword ptr [esp + 4]
// 00590c14  56                   push esi
// 00590c15  57                   push edi
// 00590c16  50                   push eax
// 00590c17  8bf1                 mov esi, ecx
// 00590c19  e8a2f8ffff           call 0x5904c0
// 00590c1e  8b38                 mov edi, dword ptr [eax]
// 00590c20  83c404               add esp, 4
// 00590c23  85ff                 test edi, edi
// 00590c25  7d07                 jge 0x590c2e
// 00590c27  5f                   pop edi
// 00590c28  33c0                 xor eax, eax
// 00590c2a  5e                   pop esi
// 00590c2b  c20400               ret 4
// 00590c2e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590c34  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590c3a  c1f902               sar ecx, 2
// 00590c3d  3bf9                 cmp edi, ecx
// 00590c3f  73e6                 jae 0x590c27
// 00590c41  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590c47  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590c4d  c1fa02               sar edx, 2
// 00590c50  3bfa                 cmp edi, edx
// 00590c52  7206                 jb 0x590c5a
// 00590c54  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590c5a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590c60  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590c63  5f                   pop edi
// 00590c64  5e                   pop esi
// 00590c65  c20400               ret 4
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
// roc 2010-06 004d1640  unit: RBX::NetworkSettings::W4PhysicsSendMethod::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1640
//
// 004d1640  8b442404             mov eax, dword ptr [esp + 4]
// 004d1644  56                   push esi
// 004d1645  57                   push edi
// 004d1646  50                   push eax
// 004d1647  8bf1                 mov esi, ecx
// 004d1649  e872f7ffff           call 0x4d0dc0
// 004d164e  8b38                 mov edi, dword ptr [eax]
// 004d1650  83c404               add esp, 4
// 004d1653  85ff                 test edi, edi
// 004d1655  7d07                 jge 0x4d165e
// 004d1657  5f                   pop edi
// 004d1658  33c0                 xor eax, eax
// 004d165a  5e                   pop esi
// 004d165b  c20400               ret 4
// 004d165e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004d1664  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004d166a  c1f902               sar ecx, 2
// 004d166d  3bf9                 cmp edi, ecx
// 004d166f  73e6                 jae 0x4d1657
// 004d1671  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004d1677  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004d167d  c1fa02               sar edx, 2
// 004d1680  3bfa                 cmp edi, edx
// 004d1682  7206                 jb 0x4d168a
// 004d1684  ff150ca99e00         call dword ptr [0x9ea90c]
// 004d168a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004d1690  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004d1693  5f                   pop edi
// 004d1694  5e                   pop esi
// 004d1695  c20400               ret 4
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
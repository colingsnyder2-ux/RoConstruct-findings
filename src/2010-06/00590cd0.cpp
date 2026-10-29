// roc 2010-06 00590cd0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590cd0
//
// 00590cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00590cd4  56                   push esi
// 00590cd5  57                   push edi
// 00590cd6  50                   push eax
// 00590cd7  8bf1                 mov esi, ecx
// 00590cd9  e862fdffff           call 0x590a40
// 00590cde  8b38                 mov edi, dword ptr [eax]
// 00590ce0  83c404               add esp, 4
// 00590ce3  85ff                 test edi, edi
// 00590ce5  7d07                 jge 0x590cee
// 00590ce7  5f                   pop edi
// 00590ce8  33c0                 xor eax, eax
// 00590cea  5e                   pop esi
// 00590ceb  c20400               ret 4
// 00590cee  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590cf4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590cfa  c1f902               sar ecx, 2
// 00590cfd  3bf9                 cmp edi, ecx
// 00590cff  73e6                 jae 0x590ce7
// 00590d01  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590d07  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590d0d  c1fa02               sar edx, 2
// 00590d10  3bfa                 cmp edi, edx
// 00590d12  7206                 jb 0x590d1a
// 00590d14  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590d1a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590d20  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590d23  5f                   pop edi
// 00590d24  5e                   pop esi
// 00590d25  c20400               ret 4
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
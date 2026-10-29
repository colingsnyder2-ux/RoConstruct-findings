// roc 2010-06 00590b50  unit: RBX::TaskScheduler::W4PriorityMethod::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590b50
//
// 00590b50  8b442404             mov eax, dword ptr [esp + 4]
// 00590b54  56                   push esi
// 00590b55  57                   push edi
// 00590b56  50                   push eax
// 00590b57  8bf1                 mov esi, ecx
// 00590b59  e842f8ffff           call 0x5903a0
// 00590b5e  8b38                 mov edi, dword ptr [eax]
// 00590b60  83c404               add esp, 4
// 00590b63  85ff                 test edi, edi
// 00590b65  7d07                 jge 0x590b6e
// 00590b67  5f                   pop edi
// 00590b68  33c0                 xor eax, eax
// 00590b6a  5e                   pop esi
// 00590b6b  c20400               ret 4
// 00590b6e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590b74  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590b7a  c1f902               sar ecx, 2
// 00590b7d  3bf9                 cmp edi, ecx
// 00590b7f  73e6                 jae 0x590b67
// 00590b81  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590b87  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590b8d  c1fa02               sar edx, 2
// 00590b90  3bfa                 cmp edi, edx
// 00590b92  7206                 jb 0x590b9a
// 00590b94  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590b9a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590ba0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590ba3  5f                   pop edi
// 00590ba4  5e                   pop esi
// 00590ba5  c20400               ret 4
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
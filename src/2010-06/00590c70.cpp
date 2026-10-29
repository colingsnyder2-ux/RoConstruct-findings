// roc 2010-06 00590c70  unit: RBX::Time::W4SampleMethod::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590c70
//
// 00590c70  8b442404             mov eax, dword ptr [esp + 4]
// 00590c74  56                   push esi
// 00590c75  57                   push edi
// 00590c76  50                   push eax
// 00590c77  8bf1                 mov esi, ecx
// 00590c79  e8d2f8ffff           call 0x590550
// 00590c7e  8b38                 mov edi, dword ptr [eax]
// 00590c80  83c404               add esp, 4
// 00590c83  85ff                 test edi, edi
// 00590c85  7d07                 jge 0x590c8e
// 00590c87  5f                   pop edi
// 00590c88  33c0                 xor eax, eax
// 00590c8a  5e                   pop esi
// 00590c8b  c20400               ret 4
// 00590c8e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590c94  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590c9a  c1f902               sar ecx, 2
// 00590c9d  3bf9                 cmp edi, ecx
// 00590c9f  73e6                 jae 0x590c87
// 00590ca1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590ca7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590cad  c1fa02               sar edx, 2
// 00590cb0  3bfa                 cmp edi, edx
// 00590cb2  7206                 jb 0x590cba
// 00590cb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590cba  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590cc0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590cc3  5f                   pop edi
// 00590cc4  5e                   pop esi
// 00590cc5  c20400               ret 4
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
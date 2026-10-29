// roc 2010-06 00590af0  unit: RBX::TaskScheduler::W4ThreadPoolConfig::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590af0
//
// 00590af0  8b442404             mov eax, dword ptr [esp + 4]
// 00590af4  56                   push esi
// 00590af5  57                   push edi
// 00590af6  50                   push eax
// 00590af7  8bf1                 mov esi, ecx
// 00590af9  e812f8ffff           call 0x590310
// 00590afe  8b38                 mov edi, dword ptr [eax]
// 00590b00  83c404               add esp, 4
// 00590b03  85ff                 test edi, edi
// 00590b05  7d07                 jge 0x590b0e
// 00590b07  5f                   pop edi
// 00590b08  33c0                 xor eax, eax
// 00590b0a  5e                   pop esi
// 00590b0b  c20400               ret 4
// 00590b0e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00590b14  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 00590b1a  c1f902               sar ecx, 2
// 00590b1d  3bf9                 cmp edi, ecx
// 00590b1f  73e6                 jae 0x590b07
// 00590b21  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00590b27  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 00590b2d  c1fa02               sar edx, 2
// 00590b30  3bfa                 cmp edi, edx
// 00590b32  7206                 jb 0x590b3a
// 00590b34  ff150ca99e00         call dword ptr [0x9ea90c]
// 00590b3a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00590b40  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00590b43  5f                   pop edi
// 00590b44  5e                   pop esi
// 00590b45  c20400               ret 4
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
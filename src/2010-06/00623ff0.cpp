// roc 2010-06 00623ff0  unit: RBX::Soundscape::W4ReverbType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00623ff0
//
// 00623ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00623ff4  56                   push esi
// 00623ff5  57                   push edi
// 00623ff6  50                   push eax
// 00623ff7  8bf1                 mov esi, ecx
// 00623ff9  e8f2fdffff           call 0x623df0
// 00623ffe  8b38                 mov edi, dword ptr [eax]
// 00624000  83c404               add esp, 4
// 00624003  85ff                 test edi, edi
// 00624005  7d07                 jge 0x62400e
// 00624007  5f                   pop edi
// 00624008  33c0                 xor eax, eax
// 0062400a  5e                   pop esi
// 0062400b  c20400               ret 4
// 0062400e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00624014  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 0062401a  c1f902               sar ecx, 2
// 0062401d  3bf9                 cmp edi, ecx
// 0062401f  73e6                 jae 0x624007
// 00624021  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 00624027  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 0062402d  c1fa02               sar edx, 2
// 00624030  3bfa                 cmp edi, edx
// 00624032  7206                 jb 0x62403a
// 00624034  ff150ca99e00         call dword ptr [0x9ea90c]
// 0062403a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00624040  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00624043  5f                   pop edi
// 00624044  5e                   pop esi
// 00624045  c20400               ret 4
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
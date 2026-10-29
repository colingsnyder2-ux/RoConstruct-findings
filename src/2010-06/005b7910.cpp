// roc 2010-06 005b7910  unit: RBX::PlayerCamera::W4CameraType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7910
//
// 005b7910  8b442404             mov eax, dword ptr [esp + 4]
// 005b7914  56                   push esi
// 005b7915  57                   push edi
// 005b7916  50                   push eax
// 005b7917  8bf1                 mov esi, ecx
// 005b7919  e8b26affff           call 0x5ae3d0
// 005b791e  8b38                 mov edi, dword ptr [eax]
// 005b7920  83c404               add esp, 4
// 005b7923  85ff                 test edi, edi
// 005b7925  7d07                 jge 0x5b792e
// 005b7927  5f                   pop edi
// 005b7928  33c0                 xor eax, eax
// 005b792a  5e                   pop esi
// 005b792b  c20400               ret 4
// 005b792e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7934  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b793a  c1f902               sar ecx, 2
// 005b793d  3bf9                 cmp edi, ecx
// 005b793f  73e6                 jae 0x5b7927
// 005b7941  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7947  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b794d  c1fa02               sar edx, 2
// 005b7950  3bfa                 cmp edi, edx
// 005b7952  7206                 jb 0x5b795a
// 005b7954  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b795a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7960  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7963  5f                   pop edi
// 005b7964  5e                   pop esi
// 005b7965  c20400               ret 4
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
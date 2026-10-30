// roc 2010-06 005b8210  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8210
//
// 005b8210  8b442404             mov eax, dword ptr [esp + 4]
// 005b8214  56                   push esi
// 005b8215  57                   push edi
// 005b8216  50                   push eax
// 005b8217  8bf1                 mov esi, ecx
// 005b8219  e832aaffff           call 0x5b2c50
// 005b821e  8b38                 mov edi, dword ptr [eax]
// 005b8220  83c404               add esp, 4
// 005b8223  85ff                 test edi, edi
// 005b8225  7d07                 jge 0x5b822e
// 005b8227  5f                   pop edi
// 005b8228  33c0                 xor eax, eax
// 005b822a  5e                   pop esi
// 005b822b  c20400               ret 4
// 005b822e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b8234  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b823a  c1f902               sar ecx, 2
// 005b823d  3bf9                 cmp edi, ecx
// 005b823f  73e6                 jae 0x5b8227
// 005b8241  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b8247  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b824d  c1fa02               sar edx, 2
// 005b8250  3bfa                 cmp edi, edx
// 005b8252  7206                 jb 0x5b825a
// 005b8254  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b825a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b8260  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b8263  5f                   pop edi
// 005b8264  5e                   pop esi
// 005b8265  c20400               ret 4
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
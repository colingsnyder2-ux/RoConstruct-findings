// roc 2010-06 005b8030  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8030
//
// 005b8030  8b442404             mov eax, dword ptr [esp + 4]
// 005b8034  56                   push esi
// 005b8035  57                   push edi
// 005b8036  50                   push eax
// 005b8037  8bf1                 mov esi, ecx
// 005b8039  e8129dffff           call 0x5b1d50
// 005b803e  8b38                 mov edi, dword ptr [eax]
// 005b8040  83c404               add esp, 4
// 005b8043  85ff                 test edi, edi
// 005b8045  7d07                 jge 0x5b804e
// 005b8047  5f                   pop edi
// 005b8048  33c0                 xor eax, eax
// 005b804a  5e                   pop esi
// 005b804b  c20400               ret 4
// 005b804e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b8054  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b805a  c1f902               sar ecx, 2
// 005b805d  3bf9                 cmp edi, ecx
// 005b805f  73e6                 jae 0x5b8047
// 005b8061  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b8067  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b806d  c1fa02               sar edx, 2
// 005b8070  3bfa                 cmp edi, edx
// 005b8072  7206                 jb 0x5b807a
// 005b8074  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b807a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b8080  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b8083  5f                   pop edi
// 005b8084  5e                   pop esi
// 005b8085  c20400               ret 4
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
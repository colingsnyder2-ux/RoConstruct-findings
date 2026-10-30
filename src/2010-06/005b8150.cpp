// roc 2010-06 005b8150  unit: RBX::BaseScript::W4ScriptExecutionLocation::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8150
//
// 005b8150  8b442404             mov eax, dword ptr [esp + 4]
// 005b8154  56                   push esi
// 005b8155  57                   push edi
// 005b8156  50                   push eax
// 005b8157  8bf1                 mov esi, ecx
// 005b8159  e8c2a4ffff           call 0x5b2620
// 005b815e  8b38                 mov edi, dword ptr [eax]
// 005b8160  83c404               add esp, 4
// 005b8163  85ff                 test edi, edi
// 005b8165  7d07                 jge 0x5b816e
// 005b8167  5f                   pop edi
// 005b8168  33c0                 xor eax, eax
// 005b816a  5e                   pop esi
// 005b816b  c20400               ret 4
// 005b816e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b8174  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b817a  c1f902               sar ecx, 2
// 005b817d  3bf9                 cmp edi, ecx
// 005b817f  73e6                 jae 0x5b8167
// 005b8181  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b8187  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b818d  c1fa02               sar edx, 2
// 005b8190  3bfa                 cmp edi, edx
// 005b8192  7206                 jb 0x5b819a
// 005b8194  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b819a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b81a0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b81a3  5f                   pop edi
// 005b81a4  5e                   pop esi
// 005b81a5  c20400               ret 4
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
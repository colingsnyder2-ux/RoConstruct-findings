// roc 2010-06 005b7730  unit: RBX::Controller::W4Button::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b7730
//
// 005b7730  8b442404             mov eax, dword ptr [esp + 4]
// 005b7734  56                   push esi
// 005b7735  57                   push edi
// 005b7736  50                   push eax
// 005b7737  8bf1                 mov esi, ecx
// 005b7739  e8e25dffff           call 0x5ad520
// 005b773e  8b38                 mov edi, dword ptr [eax]
// 005b7740  83c404               add esp, 4
// 005b7743  85ff                 test edi, edi
// 005b7745  7d07                 jge 0x5b774e
// 005b7747  5f                   pop edi
// 005b7748  33c0                 xor eax, eax
// 005b774a  5e                   pop esi
// 005b774b  c20400               ret 4
// 005b774e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 005b7754  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 005b775a  c1f902               sar ecx, 2
// 005b775d  3bf9                 cmp edi, ecx
// 005b775f  73e6                 jae 0x5b7747
// 005b7761  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 005b7767  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 005b776d  c1fa02               sar edx, 2
// 005b7770  3bfa                 cmp edi, edx
// 005b7772  7206                 jb 0x5b777a
// 005b7774  ff150ca99e00         call dword ptr [0x9ea90c]
// 005b777a  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005b7780  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b7783  5f                   pop edi
// 005b7784  5e                   pop esi
// 005b7785  c20400               ret 4
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
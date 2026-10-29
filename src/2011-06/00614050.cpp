// roc 2011-06 00614050  unit: ArchiveBinder  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614050
//
// 00614050  51                   push ecx
// 00614051  56                   push esi
// 00614052  8bf1                 mov esi, ecx
// 00614054  8b4604               mov eax, dword ptr [esi + 4]
// 00614057  8b08                 mov ecx, dword ptr [eax]
// 00614059  50                   push eax
// 0061405a  51                   push ecx
// 0061405b  8d44240c             lea eax, [esp + 0xc]
// 0061405f  50                   push eax
// 00614060  8bce                 mov ecx, esi
// 00614062  e849d80d00           call 0x6f18b0
// 00614067  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061406a  51                   push ecx
// 0061406b  e8e85f1f00           call 0x80a058
// 00614070  83c404               add esp, 4
// 00614073  33c0                 xor eax, eax
// 00614075  894604               mov dword ptr [esi + 4], eax
// 00614078  894608               mov dword ptr [esi + 8], eax
// 0061407b  5e                   pop esi
// 0061407c  59                   pop ecx
// 0061407d  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
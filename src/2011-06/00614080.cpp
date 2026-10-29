// roc 2011-06 00614080  unit: ArchiveBinder  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614080
//
// 00614080  51                   push ecx
// 00614081  56                   push esi
// 00614082  8bf1                 mov esi, ecx
// 00614084  8b4604               mov eax, dword ptr [esi + 4]
// 00614087  8b08                 mov ecx, dword ptr [eax]
// 00614089  50                   push eax
// 0061408a  51                   push ecx
// 0061408b  8d44240c             lea eax, [esp + 0xc]
// 0061408f  50                   push eax
// 00614090  8bce                 mov ecx, esi
// 00614092  e829feffff           call 0x613ec0
// 00614097  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061409a  51                   push ecx
// 0061409b  e8b85f1f00           call 0x80a058
// 006140a0  83c404               add esp, 4
// 006140a3  33c0                 xor eax, eax
// 006140a5  894604               mov dword ptr [esi + 4], eax
// 006140a8  894608               mov dword ptr [esi + 8], eax
// 006140ab  5e                   pop esi
// 006140ac  59                   pop ecx
// 006140ad  c3                   ret 
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
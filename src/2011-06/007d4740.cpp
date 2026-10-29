// roc 2011-06 007d4740  unit: RBX::ScoreHud  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d4740
//
// 007d4740  51                   push ecx
// 007d4741  56                   push esi
// 007d4742  8bf1                 mov esi, ecx
// 007d4744  8b4604               mov eax, dword ptr [esi + 4]
// 007d4747  8b08                 mov ecx, dword ptr [eax]
// 007d4749  50                   push eax
// 007d474a  51                   push ecx
// 007d474b  8d44240c             lea eax, [esp + 0xc]
// 007d474f  50                   push eax
// 007d4750  8bce                 mov ecx, esi
// 007d4752  e839f0ffff           call 0x7d3790
// 007d4757  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d475a  51                   push ecx
// 007d475b  e8f8580300           call 0x80a058
// 007d4760  83c404               add esp, 4
// 007d4763  33c0                 xor eax, eax
// 007d4765  894604               mov dword ptr [esi + 4], eax
// 007d4768  894608               mov dword ptr [esi + 8], eax
// 007d476b  5e                   pop esi
// 007d476c  59                   pop ecx
// 007d476d  c3                   ret 
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
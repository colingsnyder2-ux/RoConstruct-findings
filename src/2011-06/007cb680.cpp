// roc 2011-06 007cb680  unit: RBX::ChatLine  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007cb680
//
// 007cb680  51                   push ecx
// 007cb681  56                   push esi
// 007cb682  8bf1                 mov esi, ecx
// 007cb684  8b4604               mov eax, dword ptr [esi + 4]
// 007cb687  8b08                 mov ecx, dword ptr [eax]
// 007cb689  50                   push eax
// 007cb68a  51                   push ecx
// 007cb68b  8d44240c             lea eax, [esp + 0xc]
// 007cb68f  50                   push eax
// 007cb690  8bce                 mov ecx, esi
// 007cb692  e849efffff           call 0x7ca5e0
// 007cb697  8b4e04               mov ecx, dword ptr [esi + 4]
// 007cb69a  51                   push ecx
// 007cb69b  e8b8e90300           call 0x80a058
// 007cb6a0  83c404               add esp, 4
// 007cb6a3  33c0                 xor eax, eax
// 007cb6a5  894604               mov dword ptr [esi + 4], eax
// 007cb6a8  894608               mov dword ptr [esi + 8], eax
// 007cb6ab  5e                   pop esi
// 007cb6ac  59                   pop ecx
// 007cb6ad  c3                   ret 
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
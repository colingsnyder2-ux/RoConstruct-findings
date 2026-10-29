// roc 2011-06 007a7740  unit: RBX::PrismPoly  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a7740
//
// 007a7740  83ec08               sub esp, 8
// 007a7743  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a7747  53                   push ebx
// 007a7748  56                   push esi
// 007a7749  57                   push edi
// 007a774a  8bf1                 mov esi, ecx
// 007a774c  50                   push eax
// 007a774d  8d4c2410             lea ecx, [esp + 0x10]
// 007a7751  51                   push ecx
// 007a7752  8bce                 mov ecx, esi
// 007a7754  e8d70e0000           call 0x7a8630
// 007a7759  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a775d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007a7761  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007a7769  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a776d  52                   push edx
// 007a776e  8d44241c             lea eax, [esp + 0x1c]
// 007a7772  50                   push eax
// 007a7773  57                   push edi
// 007a7774  53                   push ebx
// 007a7775  e896fbffff           call 0x7a7310
// 007a777a  83c410               add esp, 0x10
// 007a777d  57                   push edi
// 007a777e  53                   push ebx
// 007a777f  8d4c2414             lea ecx, [esp + 0x14]
// 007a7783  51                   push ecx
// 007a7784  8bce                 mov ecx, esi
// 007a7786  e845fdffff           call 0x7a74d0
// 007a778b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a778f  5f                   pop edi
// 007a7790  5e                   pop esi
// 007a7791  5b                   pop ebx
// 007a7792  83c408               add esp, 8
// 007a7795  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEIABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
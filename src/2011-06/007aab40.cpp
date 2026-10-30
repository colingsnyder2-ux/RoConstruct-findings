// roc 2011-06 007aab40  unit: RBX::CornerWedgePoly  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007aab40
//
// 007aab40  83ec08               sub esp, 8
// 007aab43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007aab47  53                   push ebx
// 007aab48  56                   push esi
// 007aab49  57                   push edi
// 007aab4a  8bf1                 mov esi, ecx
// 007aab4c  50                   push eax
// 007aab4d  8d4c2410             lea ecx, [esp + 0x10]
// 007aab51  51                   push ecx
// 007aab52  8bce                 mov ecx, esi
// 007aab54  e8d7ebffff           call 0x7a9730
// 007aab59  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007aab5d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007aab61  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007aab69  8b542418             mov edx, dword ptr [esp + 0x18]
// 007aab6d  52                   push edx
// 007aab6e  8d44241c             lea eax, [esp + 0x1c]
// 007aab72  50                   push eax
// 007aab73  57                   push edi
// 007aab74  53                   push ebx
// 007aab75  e886fdfdff           call 0x78a900
// 007aab7a  83c410               add esp, 0x10
// 007aab7d  57                   push edi
// 007aab7e  53                   push ebx
// 007aab7f  8d4c2414             lea ecx, [esp + 0x14]
// 007aab83  51                   push ecx
// 007aab84  8bce                 mov ecx, esi
// 007aab86  e8e5feffff           call 0x7aaa70
// 007aab8b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007aab8f  5f                   pop edi
// 007aab90  5e                   pop esi
// 007aab91  5b                   pop ebx
// 007aab92  83c408               add esp, 8
// 007aab95  c20400               ret 4
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
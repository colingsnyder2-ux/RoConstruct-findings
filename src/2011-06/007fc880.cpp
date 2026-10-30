// roc 2011-06 007fc880  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fc880
//
// 007fc880  83ec08               sub esp, 8
// 007fc883  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fc887  53                   push ebx
// 007fc888  56                   push esi
// 007fc889  57                   push edi
// 007fc88a  8bf1                 mov esi, ecx
// 007fc88c  50                   push eax
// 007fc88d  8d4c2410             lea ecx, [esp + 0x10]
// 007fc891  51                   push ecx
// 007fc892  8bce                 mov ecx, esi
// 007fc894  e8a7f9ffff           call 0x7fc240
// 007fc899  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007fc89d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007fc8a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fc8a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fc8ad  52                   push edx
// 007fc8ae  8d44241c             lea eax, [esp + 0x1c]
// 007fc8b2  50                   push eax
// 007fc8b3  57                   push edi
// 007fc8b4  53                   push ebx
// 007fc8b5  e836b5c2ff           call 0x427df0
// 007fc8ba  83c410               add esp, 0x10
// 007fc8bd  57                   push edi
// 007fc8be  53                   push ebx
// 007fc8bf  8d4c2414             lea ecx, [esp + 0x14]
// 007fc8c3  51                   push ecx
// 007fc8c4  8bce                 mov ecx, esi
// 007fc8c6  e815bfc2ff           call 0x4287e0
// 007fc8cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fc8cf  5f                   pop edi
// 007fc8d0  5e                   pop esi
// 007fc8d1  5b                   pop ebx
// 007fc8d2  83c408               add esp, 8
// 007fc8d5  c20400               ret 4
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
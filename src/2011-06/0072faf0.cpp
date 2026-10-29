// roc 2011-06 0072faf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072faf0
//
// 0072faf0  83ec08               sub esp, 8
// 0072faf3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072faf7  53                   push ebx
// 0072faf8  56                   push esi
// 0072faf9  57                   push edi
// 0072fafa  8bf1                 mov esi, ecx
// 0072fafc  50                   push eax
// 0072fafd  8d4c2410             lea ecx, [esp + 0x10]
// 0072fb01  51                   push ecx
// 0072fb02  8bce                 mov ecx, esi
// 0072fb04  e8b7ecffff           call 0x72e7c0
// 0072fb09  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072fb0d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0072fb11  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0072fb19  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072fb1d  52                   push edx
// 0072fb1e  8d44241c             lea eax, [esp + 0x1c]
// 0072fb22  50                   push eax
// 0072fb23  57                   push edi
// 0072fb24  53                   push ebx
// 0072fb25  e886efffff           call 0x72eab0
// 0072fb2a  83c410               add esp, 0x10
// 0072fb2d  57                   push edi
// 0072fb2e  53                   push ebx
// 0072fb2f  8d4c2414             lea ecx, [esp + 0x14]
// 0072fb33  51                   push ecx
// 0072fb34  8bce                 mov ecx, esi
// 0072fb36  e8a5dad9ff           call 0x4cd5e0
// 0072fb3b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072fb3f  5f                   pop edi
// 0072fb40  5e                   pop esi
// 0072fb41  5b                   pop ebx
// 0072fb42  83c408               add esp, 8
// 0072fb45  c20400               ret 4
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
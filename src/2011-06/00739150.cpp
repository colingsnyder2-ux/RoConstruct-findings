// roc 2011-06 00739150  unit: RBX::VInstance::?$NonFactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00739150
//
// 00739150  83ec08               sub esp, 8
// 00739153  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00739157  53                   push ebx
// 00739158  56                   push esi
// 00739159  57                   push edi
// 0073915a  8bf1                 mov esi, ecx
// 0073915c  50                   push eax
// 0073915d  8d4c2410             lea ecx, [esp + 0x10]
// 00739161  51                   push ecx
// 00739162  8bce                 mov ecx, esi
// 00739164  e897e9ffff           call 0x737b00
// 00739169  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073916d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00739171  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00739179  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073917d  52                   push edx
// 0073917e  8d44241c             lea eax, [esp + 0x1c]
// 00739182  50                   push eax
// 00739183  57                   push edi
// 00739184  53                   push ebx
// 00739185  e886e4dbff           call 0x4f7610
// 0073918a  83c410               add esp, 0x10
// 0073918d  57                   push edi
// 0073918e  53                   push ebx
// 0073918f  8d4c2414             lea ecx, [esp + 0x14]
// 00739193  51                   push ecx
// 00739194  8bce                 mov ecx, esi
// 00739196  e855faffff           call 0x738bf0
// 0073919b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073919f  5f                   pop edi
// 007391a0  5e                   pop esi
// 007391a1  5b                   pop ebx
// 007391a2  83c408               add esp, 8
// 007391a5  c20400               ret 4
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
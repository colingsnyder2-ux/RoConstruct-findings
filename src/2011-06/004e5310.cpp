// roc 2011-06 004e5310  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e5310
//
// 004e5310  83ec08               sub esp, 8
// 004e5313  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e5317  53                   push ebx
// 004e5318  56                   push esi
// 004e5319  57                   push edi
// 004e531a  8bf1                 mov esi, ecx
// 004e531c  50                   push eax
// 004e531d  8d4c2410             lea ecx, [esp + 0x10]
// 004e5321  51                   push ecx
// 004e5322  8bce                 mov ecx, esi
// 004e5324  e8c7f3ffff           call 0x4e46f0
// 004e5329  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e532d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004e5331  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004e5339  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e533d  52                   push edx
// 004e533e  8d44241c             lea eax, [esp + 0x1c]
// 004e5342  50                   push eax
// 004e5343  57                   push edi
// 004e5344  53                   push ebx
// 004e5345  e896f4ffff           call 0x4e47e0
// 004e534a  83c410               add esp, 0x10
// 004e534d  57                   push edi
// 004e534e  53                   push ebx
// 004e534f  8d4c2414             lea ecx, [esp + 0x14]
// 004e5353  51                   push ecx
// 004e5354  8bce                 mov ecx, esi
// 004e5356  e88570fcff           call 0x4ac3e0
// 004e535b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e535f  5f                   pop edi
// 004e5360  5e                   pop esi
// 004e5361  5b                   pop ebx
// 004e5362  83c408               add esp, 8
// 004e5365  c20400               ret 4
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
// roc 2011-06 005a86c0  unit: RBX::VFriendService::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a86c0
//
// 005a86c0  83ec08               sub esp, 8
// 005a86c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a86c7  53                   push ebx
// 005a86c8  56                   push esi
// 005a86c9  57                   push edi
// 005a86ca  8bf1                 mov esi, ecx
// 005a86cc  50                   push eax
// 005a86cd  8d4c2410             lea ecx, [esp + 0x10]
// 005a86d1  51                   push ecx
// 005a86d2  8bce                 mov ecx, esi
// 005a86d4  e817f5ffff           call 0x5a7bf0
// 005a86d9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a86dd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005a86e1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a86e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a86ed  52                   push edx
// 005a86ee  8d44241c             lea eax, [esp + 0x1c]
// 005a86f2  50                   push eax
// 005a86f3  57                   push edi
// 005a86f4  53                   push ebx
// 005a86f5  e866962000           call 0x7b1d60
// 005a86fa  83c410               add esp, 0x10
// 005a86fd  57                   push edi
// 005a86fe  53                   push ebx
// 005a86ff  8d4c2414             lea ecx, [esp + 0x14]
// 005a8703  51                   push ecx
// 005a8704  8bce                 mov ecx, esi
// 005a8706  e8853b1300           call 0x6dc290
// 005a870b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a870f  5f                   pop edi
// 005a8710  5e                   pop esi
// 005a8711  5b                   pop ebx
// 005a8712  83c408               add esp, 8
// 005a8715  c20400               ret 4
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
// roc 2011-06 007b1f10  unit: RBX::SleepStage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b1f10
//
// 007b1f10  83ec08               sub esp, 8
// 007b1f13  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b1f17  53                   push ebx
// 007b1f18  56                   push esi
// 007b1f19  57                   push edi
// 007b1f1a  8bf1                 mov esi, ecx
// 007b1f1c  50                   push eax
// 007b1f1d  8d4c2410             lea ecx, [esp + 0x10]
// 007b1f21  51                   push ecx
// 007b1f22  8bce                 mov ecx, esi
// 007b1f24  e8b7bc0300           call 0x7edbe0
// 007b1f29  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b1f2d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007b1f31  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b1f39  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b1f3d  52                   push edx
// 007b1f3e  8d44241c             lea eax, [esp + 0x1c]
// 007b1f42  50                   push eax
// 007b1f43  57                   push edi
// 007b1f44  53                   push ebx
// 007b1f45  e816feffff           call 0x7b1d60
// 007b1f4a  83c410               add esp, 0x10
// 007b1f4d  57                   push edi
// 007b1f4e  53                   push ebx
// 007b1f4f  8d4c2414             lea ecx, [esp + 0x14]
// 007b1f53  51                   push ecx
// 007b1f54  8bce                 mov ecx, esi
// 007b1f56  e835a3f2ff           call 0x6dc290
// 007b1f5b  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b1f5f  5f                   pop edi
// 007b1f60  5e                   pop esi
// 007b1f61  5b                   pop ebx
// 007b1f62  83c408               add esp, 8
// 007b1f65  c20400               ret 4
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
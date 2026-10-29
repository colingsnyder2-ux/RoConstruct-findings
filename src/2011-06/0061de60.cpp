// roc 2011-06 0061de60  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061de60
//
// 0061de60  51                   push ecx
// 0061de61  56                   push esi
// 0061de62  8bf1                 mov esi, ecx
// 0061de64  8b4604               mov eax, dword ptr [esi + 4]
// 0061de67  8b08                 mov ecx, dword ptr [eax]
// 0061de69  50                   push eax
// 0061de6a  51                   push ecx
// 0061de6b  8d44240c             lea eax, [esp + 0xc]
// 0061de6f  50                   push eax
// 0061de70  8bce                 mov ecx, esi
// 0061de72  e8a9f9ffff           call 0x61d820
// 0061de77  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061de7a  51                   push ecx
// 0061de7b  e8d8c11e00           call 0x80a058
// 0061de80  83c404               add esp, 4
// 0061de83  33c0                 xor eax, eax
// 0061de85  894604               mov dword ptr [esi + 4], eax
// 0061de88  894608               mov dword ptr [esi + 8], eax
// 0061de8b  5e                   pop esi
// 0061de8c  59                   pop ecx
// 0061de8d  c3                   ret 
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
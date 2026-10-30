// roc 2011-06 0060ef60  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060ef60
//
// 0060ef60  51                   push ecx
// 0060ef61  56                   push esi
// 0060ef62  8bf1                 mov esi, ecx
// 0060ef64  8b4604               mov eax, dword ptr [esi + 4]
// 0060ef67  8b08                 mov ecx, dword ptr [eax]
// 0060ef69  50                   push eax
// 0060ef6a  51                   push ecx
// 0060ef6b  8d44240c             lea eax, [esp + 0xc]
// 0060ef6f  50                   push eax
// 0060ef70  8bce                 mov ecx, esi
// 0060ef72  e899feffff           call 0x60ee10
// 0060ef77  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060ef7a  51                   push ecx
// 0060ef7b  e8d8b01f00           call 0x80a058
// 0060ef80  83c404               add esp, 4
// 0060ef83  33c0                 xor eax, eax
// 0060ef85  894604               mov dword ptr [esi + 4], eax
// 0060ef88  894608               mov dword ptr [esi + 8], eax
// 0060ef8b  5e                   pop esi
// 0060ef8c  59                   pop ecx
// 0060ef8d  c3                   ret 
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
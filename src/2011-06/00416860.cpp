// roc 2011-06 00416860  unit: CopyVerb  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00416860
//
// 00416860  51                   push ecx
// 00416861  56                   push esi
// 00416862  8bf1                 mov esi, ecx
// 00416864  8b4604               mov eax, dword ptr [esi + 4]
// 00416867  8b08                 mov ecx, dword ptr [eax]
// 00416869  50                   push eax
// 0041686a  51                   push ecx
// 0041686b  8d44240c             lea eax, [esp + 0xc]
// 0041686f  50                   push eax
// 00416870  8bce                 mov ecx, esi
// 00416872  e849feffff           call 0x4166c0
// 00416877  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041687a  51                   push ecx
// 0041687b  e8d8373f00           call 0x80a058
// 00416880  83c404               add esp, 4
// 00416883  33c0                 xor eax, eax
// 00416885  894604               mov dword ptr [esi + 4], eax
// 00416888  894608               mov dword ptr [esi + 8], eax
// 0041688b  5e                   pop esi
// 0041688c  59                   pop ecx
// 0041688d  c3                   ret 
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
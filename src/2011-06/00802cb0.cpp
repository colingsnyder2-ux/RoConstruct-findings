// roc 2011-06 00802cb0  unit: boost::iostreams::zlib_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00802cb0
//
// 00802cb0  51                   push ecx
// 00802cb1  56                   push esi
// 00802cb2  8bf1                 mov esi, ecx
// 00802cb4  8b4604               mov eax, dword ptr [esi + 4]
// 00802cb7  8b08                 mov ecx, dword ptr [eax]
// 00802cb9  50                   push eax
// 00802cba  51                   push ecx
// 00802cbb  8d44240c             lea eax, [esp + 0xc]
// 00802cbf  50                   push eax
// 00802cc0  8bce                 mov ecx, esi
// 00802cc2  e819ffffff           call 0x802be0
// 00802cc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00802cca  51                   push ecx
// 00802ccb  e888730000           call 0x80a058
// 00802cd0  83c404               add esp, 4
// 00802cd3  33c0                 xor eax, eax
// 00802cd5  894604               mov dword ptr [esi + 4], eax
// 00802cd8  894608               mov dword ptr [esi + 8], eax
// 00802cdb  5e                   pop esi
// 00802cdc  59                   pop ecx
// 00802cdd  c3                   ret 
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
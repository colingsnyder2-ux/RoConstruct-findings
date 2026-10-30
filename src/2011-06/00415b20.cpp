// roc 2011-06 00415b20  unit: PasteVerb  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415b20
//
// 00415b20  8b542404             mov edx, dword ptr [esp + 4]
// 00415b24  8b4208               mov eax, dword ptr [edx + 8]
// 00415b27  56                   push esi
// 00415b28  8b30                 mov esi, dword ptr [eax]
// 00415b2a  897208               mov dword ptr [edx + 8], esi
// 00415b2d  8b30                 mov esi, dword ptr [eax]
// 00415b2f  807e4500             cmp byte ptr [esi + 0x45], 0
// 00415b33  7503                 jne 0x415b38
// 00415b35  895604               mov dword ptr [esi + 4], edx
// 00415b38  8b7204               mov esi, dword ptr [edx + 4]
// 00415b3b  897004               mov dword ptr [eax + 4], esi
// 00415b3e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00415b41  5e                   pop esi
// 00415b42  3b5104               cmp edx, dword ptr [ecx + 4]
// 00415b45  750b                 jne 0x415b52
// 00415b47  894104               mov dword ptr [ecx + 4], eax
// 00415b4a  8910                 mov dword ptr [eax], edx
// 00415b4c  894204               mov dword ptr [edx + 4], eax
// 00415b4f  c20400               ret 4
// 00415b52  8b4a04               mov ecx, dword ptr [edx + 4]
// 00415b55  3b11                 cmp edx, dword ptr [ecx]
// 00415b57  750a                 jne 0x415b63
// 00415b59  8901                 mov dword ptr [ecx], eax
// 00415b5b  8910                 mov dword ptr [eax], edx
// 00415b5d  894204               mov dword ptr [edx + 4], eax
// 00415b60  c20400               ret 4
// 00415b63  894108               mov dword ptr [ecx + 8], eax
// 00415b66  8910                 mov dword ptr [eax], edx
// 00415b68  894204               mov dword ptr [edx + 4], eax
// 00415b6b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
// roc 2011-06 00444790  unit: IIHAAH::?$CMap  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00444790
//
// 00444790  8b542404             mov edx, dword ptr [esp + 4]
// 00444794  8b4208               mov eax, dword ptr [edx + 8]
// 00444797  56                   push esi
// 00444798  8b30                 mov esi, dword ptr [eax]
// 0044479a  897208               mov dword ptr [edx + 8], esi
// 0044479d  8b30                 mov esi, dword ptr [eax]
// 0044479f  807e2100             cmp byte ptr [esi + 0x21], 0
// 004447a3  7503                 jne 0x4447a8
// 004447a5  895604               mov dword ptr [esi + 4], edx
// 004447a8  8b7204               mov esi, dword ptr [edx + 4]
// 004447ab  897004               mov dword ptr [eax + 4], esi
// 004447ae  8b4904               mov ecx, dword ptr [ecx + 4]
// 004447b1  5e                   pop esi
// 004447b2  3b5104               cmp edx, dword ptr [ecx + 4]
// 004447b5  750b                 jne 0x4447c2
// 004447b7  894104               mov dword ptr [ecx + 4], eax
// 004447ba  8910                 mov dword ptr [eax], edx
// 004447bc  894204               mov dword ptr [edx + 4], eax
// 004447bf  c20400               ret 4
// 004447c2  8b4a04               mov ecx, dword ptr [edx + 4]
// 004447c5  3b11                 cmp edx, dword ptr [ecx]
// 004447c7  750a                 jne 0x4447d3
// 004447c9  8901                 mov dword ptr [ecx], eax
// 004447cb  8910                 mov dword ptr [eax], edx
// 004447cd  894204               mov dword ptr [edx + 4], eax
// 004447d0  c20400               ret 4
// 004447d3  894108               mov dword ptr [ecx + 8], eax
// 004447d6  8910                 mov dword ptr [eax], edx
// 004447d8  894204               mov dword ptr [edx + 4], eax
// 004447db  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
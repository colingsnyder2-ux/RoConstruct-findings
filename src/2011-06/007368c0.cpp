// roc 2011-06 007368c0  unit: RBX::VStudioTool::?$EventDesc  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007368c0
//
// 007368c0  8b542404             mov edx, dword ptr [esp + 4]
// 007368c4  8b02                 mov eax, dword ptr [edx]
// 007368c6  56                   push esi
// 007368c7  8b7008               mov esi, dword ptr [eax + 8]
// 007368ca  8932                 mov dword ptr [edx], esi
// 007368cc  8b7008               mov esi, dword ptr [eax + 8]
// 007368cf  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 007368d3  7503                 jne 0x7368d8
// 007368d5  895604               mov dword ptr [esi + 4], edx
// 007368d8  8b7204               mov esi, dword ptr [edx + 4]
// 007368db  897004               mov dword ptr [eax + 4], esi
// 007368de  8b4904               mov ecx, dword ptr [ecx + 4]
// 007368e1  5e                   pop esi
// 007368e2  3b5104               cmp edx, dword ptr [ecx + 4]
// 007368e5  750c                 jne 0x7368f3
// 007368e7  894104               mov dword ptr [ecx + 4], eax
// 007368ea  895008               mov dword ptr [eax + 8], edx
// 007368ed  894204               mov dword ptr [edx + 4], eax
// 007368f0  c20400               ret 4
// 007368f3  8b4a04               mov ecx, dword ptr [edx + 4]
// 007368f6  3b5108               cmp edx, dword ptr [ecx + 8]
// 007368f9  750c                 jne 0x736907
// 007368fb  894108               mov dword ptr [ecx + 8], eax
// 007368fe  895008               mov dword ptr [eax + 8], edx
// 00736901  894204               mov dword ptr [edx + 4], eax
// 00736904  c20400               ret 4
// 00736907  8901                 mov dword ptr [ecx], eax
// 00736909  895008               mov dword ptr [eax + 8], edx
// 0073690c  894204               mov dword ptr [edx + 4], eax
// 0073690f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
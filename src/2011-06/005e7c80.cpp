// roc 2011-06 005e7c80  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7c80
//
// 005e7c80  8b542404             mov edx, dword ptr [esp + 4]
// 005e7c84  8b02                 mov eax, dword ptr [edx]
// 005e7c86  56                   push esi
// 005e7c87  8b7008               mov esi, dword ptr [eax + 8]
// 005e7c8a  8932                 mov dword ptr [edx], esi
// 005e7c8c  8b7008               mov esi, dword ptr [eax + 8]
// 005e7c8f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005e7c93  7503                 jne 0x5e7c98
// 005e7c95  895604               mov dword ptr [esi + 4], edx
// 005e7c98  8b7204               mov esi, dword ptr [edx + 4]
// 005e7c9b  897004               mov dword ptr [eax + 4], esi
// 005e7c9e  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e7ca1  5e                   pop esi
// 005e7ca2  3b5104               cmp edx, dword ptr [ecx + 4]
// 005e7ca5  750c                 jne 0x5e7cb3
// 005e7ca7  894104               mov dword ptr [ecx + 4], eax
// 005e7caa  895008               mov dword ptr [eax + 8], edx
// 005e7cad  894204               mov dword ptr [edx + 4], eax
// 005e7cb0  c20400               ret 4
// 005e7cb3  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e7cb6  3b5108               cmp edx, dword ptr [ecx + 8]
// 005e7cb9  750c                 jne 0x5e7cc7
// 005e7cbb  894108               mov dword ptr [ecx + 8], eax
// 005e7cbe  895008               mov dword ptr [eax + 8], edx
// 005e7cc1  894204               mov dword ptr [edx + 4], eax
// 005e7cc4  c20400               ret 4
// 005e7cc7  8901                 mov dword ptr [ecx], eax
// 005e7cc9  895008               mov dword ptr [eax + 8], edx
// 005e7ccc  894204               mov dword ptr [edx + 4], eax
// 005e7ccf  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
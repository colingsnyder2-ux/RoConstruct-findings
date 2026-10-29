// roc 2011-06 007c83e0  unit: RBX::AdornBillboarder  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c83e0
//
// 007c83e0  8b542404             mov edx, dword ptr [esp + 4]
// 007c83e4  8b02                 mov eax, dword ptr [edx]
// 007c83e6  56                   push esi
// 007c83e7  8b7008               mov esi, dword ptr [eax + 8]
// 007c83ea  8932                 mov dword ptr [edx], esi
// 007c83ec  8b7008               mov esi, dword ptr [eax + 8]
// 007c83ef  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 007c83f3  7503                 jne 0x7c83f8
// 007c83f5  895604               mov dword ptr [esi + 4], edx
// 007c83f8  8b7204               mov esi, dword ptr [edx + 4]
// 007c83fb  897004               mov dword ptr [eax + 4], esi
// 007c83fe  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c8401  5e                   pop esi
// 007c8402  3b5104               cmp edx, dword ptr [ecx + 4]
// 007c8405  750c                 jne 0x7c8413
// 007c8407  894104               mov dword ptr [ecx + 4], eax
// 007c840a  895008               mov dword ptr [eax + 8], edx
// 007c840d  894204               mov dword ptr [edx + 4], eax
// 007c8410  c20400               ret 4
// 007c8413  8b4a04               mov ecx, dword ptr [edx + 4]
// 007c8416  3b5108               cmp edx, dword ptr [ecx + 8]
// 007c8419  750c                 jne 0x7c8427
// 007c841b  894108               mov dword ptr [ecx + 8], eax
// 007c841e  895008               mov dword ptr [eax + 8], edx
// 007c8421  894204               mov dword ptr [edx + 4], eax
// 007c8424  c20400               ret 4
// 007c8427  8901                 mov dword ptr [ecx], eax
// 007c8429  895008               mov dword ptr [eax + 8], edx
// 007c842c  894204               mov dword ptr [edx + 4], eax
// 007c842f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
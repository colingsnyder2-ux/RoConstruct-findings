// roc 2011-06 006b2a70  unit: RBX::VInsertService::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2a70
//
// 006b2a70  8b542404             mov edx, dword ptr [esp + 4]
// 006b2a74  8b4208               mov eax, dword ptr [edx + 8]
// 006b2a77  56                   push esi
// 006b2a78  8b30                 mov esi, dword ptr [eax]
// 006b2a7a  897208               mov dword ptr [edx + 8], esi
// 006b2a7d  8b30                 mov esi, dword ptr [eax]
// 006b2a7f  807e7100             cmp byte ptr [esi + 0x71], 0
// 006b2a83  7503                 jne 0x6b2a88
// 006b2a85  895604               mov dword ptr [esi + 4], edx
// 006b2a88  8b7204               mov esi, dword ptr [edx + 4]
// 006b2a8b  897004               mov dword ptr [eax + 4], esi
// 006b2a8e  8b4904               mov ecx, dword ptr [ecx + 4]
// 006b2a91  5e                   pop esi
// 006b2a92  3b5104               cmp edx, dword ptr [ecx + 4]
// 006b2a95  750b                 jne 0x6b2aa2
// 006b2a97  894104               mov dword ptr [ecx + 4], eax
// 006b2a9a  8910                 mov dword ptr [eax], edx
// 006b2a9c  894204               mov dword ptr [edx + 4], eax
// 006b2a9f  c20400               ret 4
// 006b2aa2  8b4a04               mov ecx, dword ptr [edx + 4]
// 006b2aa5  3b11                 cmp edx, dword ptr [ecx]
// 006b2aa7  750a                 jne 0x6b2ab3
// 006b2aa9  8901                 mov dword ptr [ecx], eax
// 006b2aab  8910                 mov dword ptr [eax], edx
// 006b2aad  894204               mov dword ptr [edx + 4], eax
// 006b2ab0  c20400               ret 4
// 006b2ab3  894108               mov dword ptr [ecx + 8], eax
// 006b2ab6  8910                 mov dword ptr [eax], edx
// 006b2ab8  894204               mov dword ptr [edx + 4], eax
// 006b2abb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
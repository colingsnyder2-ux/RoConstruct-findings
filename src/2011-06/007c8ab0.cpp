// roc 2011-06 007c8ab0  unit: RBX::ChatLine  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8ab0
//
// 007c8ab0  8b542404             mov edx, dword ptr [esp + 4]
// 007c8ab4  8b4208               mov eax, dword ptr [edx + 8]
// 007c8ab7  56                   push esi
// 007c8ab8  8b30                 mov esi, dword ptr [eax]
// 007c8aba  897208               mov dword ptr [edx + 8], esi
// 007c8abd  8b30                 mov esi, dword ptr [eax]
// 007c8abf  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 007c8ac3  7503                 jne 0x7c8ac8
// 007c8ac5  895604               mov dword ptr [esi + 4], edx
// 007c8ac8  8b7204               mov esi, dword ptr [edx + 4]
// 007c8acb  897004               mov dword ptr [eax + 4], esi
// 007c8ace  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c8ad1  5e                   pop esi
// 007c8ad2  3b5104               cmp edx, dword ptr [ecx + 4]
// 007c8ad5  750b                 jne 0x7c8ae2
// 007c8ad7  894104               mov dword ptr [ecx + 4], eax
// 007c8ada  8910                 mov dword ptr [eax], edx
// 007c8adc  894204               mov dword ptr [edx + 4], eax
// 007c8adf  c20400               ret 4
// 007c8ae2  8b4a04               mov ecx, dword ptr [edx + 4]
// 007c8ae5  3b11                 cmp edx, dword ptr [ecx]
// 007c8ae7  750a                 jne 0x7c8af3
// 007c8ae9  8901                 mov dword ptr [ecx], eax
// 007c8aeb  8910                 mov dword ptr [eax], edx
// 007c8aed  894204               mov dword ptr [edx + 4], eax
// 007c8af0  c20400               ret 4
// 007c8af3  894108               mov dword ptr [ecx + 8], eax
// 007c8af6  8910                 mov dword ptr [eax], edx
// 007c8af8  894204               mov dword ptr [edx + 4], eax
// 007c8afb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
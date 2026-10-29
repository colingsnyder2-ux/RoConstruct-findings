// roc 2011-06 007c85a0  unit: RBX::AdornBillboarder  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c85a0
//
// 007c85a0  8b542404             mov edx, dword ptr [esp + 4]
// 007c85a4  8b02                 mov eax, dword ptr [edx]
// 007c85a6  56                   push esi
// 007c85a7  8b7008               mov esi, dword ptr [eax + 8]
// 007c85aa  8932                 mov dword ptr [edx], esi
// 007c85ac  8b7008               mov esi, dword ptr [eax + 8]
// 007c85af  807e5900             cmp byte ptr [esi + 0x59], 0
// 007c85b3  7503                 jne 0x7c85b8
// 007c85b5  895604               mov dword ptr [esi + 4], edx
// 007c85b8  8b7204               mov esi, dword ptr [edx + 4]
// 007c85bb  897004               mov dword ptr [eax + 4], esi
// 007c85be  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c85c1  5e                   pop esi
// 007c85c2  3b5104               cmp edx, dword ptr [ecx + 4]
// 007c85c5  750c                 jne 0x7c85d3
// 007c85c7  894104               mov dword ptr [ecx + 4], eax
// 007c85ca  895008               mov dword ptr [eax + 8], edx
// 007c85cd  894204               mov dword ptr [edx + 4], eax
// 007c85d0  c20400               ret 4
// 007c85d3  8b4a04               mov ecx, dword ptr [edx + 4]
// 007c85d6  3b5108               cmp edx, dword ptr [ecx + 8]
// 007c85d9  750c                 jne 0x7c85e7
// 007c85db  894108               mov dword ptr [ecx + 8], eax
// 007c85de  895008               mov dword ptr [eax + 8], edx
// 007c85e1  894204               mov dword ptr [edx + 4], eax
// 007c85e4  c20400               ret 4
// 007c85e7  8901                 mov dword ptr [ecx], eax
// 007c85e9  895008               mov dword ptr [eax + 8], edx
// 007c85ec  894204               mov dword ptr [edx + 4], eax
// 007c85ef  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
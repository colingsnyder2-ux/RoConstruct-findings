// roc 2011-06 00966380  unit: Ogre::RbxCluster  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966380
//
// 00966380  8b542404             mov edx, dword ptr [esp + 4]
// 00966384  8b4208               mov eax, dword ptr [edx + 8]
// 00966387  56                   push esi
// 00966388  8b30                 mov esi, dword ptr [eax]
// 0096638a  897208               mov dword ptr [edx + 8], esi
// 0096638d  8b30                 mov esi, dword ptr [eax]
// 0096638f  807e5d00             cmp byte ptr [esi + 0x5d], 0
// 00966393  7503                 jne 0x966398
// 00966395  895604               mov dword ptr [esi + 4], edx
// 00966398  8b7204               mov esi, dword ptr [edx + 4]
// 0096639b  897004               mov dword ptr [eax + 4], esi
// 0096639e  8b4904               mov ecx, dword ptr [ecx + 4]
// 009663a1  5e                   pop esi
// 009663a2  3b5104               cmp edx, dword ptr [ecx + 4]
// 009663a5  750b                 jne 0x9663b2
// 009663a7  894104               mov dword ptr [ecx + 4], eax
// 009663aa  8910                 mov dword ptr [eax], edx
// 009663ac  894204               mov dword ptr [edx + 4], eax
// 009663af  c20400               ret 4
// 009663b2  8b4a04               mov ecx, dword ptr [edx + 4]
// 009663b5  3b11                 cmp edx, dword ptr [ecx]
// 009663b7  750a                 jne 0x9663c3
// 009663b9  8901                 mov dword ptr [ecx], eax
// 009663bb  8910                 mov dword ptr [eax], edx
// 009663bd  894204               mov dword ptr [edx + 4], eax
// 009663c0  c20400               ret 4
// 009663c3  894108               mov dword ptr [ecx + 8], eax
// 009663c6  8910                 mov dword ptr [eax], edx
// 009663c8  894204               mov dword ptr [edx + 4], eax
// 009663cb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
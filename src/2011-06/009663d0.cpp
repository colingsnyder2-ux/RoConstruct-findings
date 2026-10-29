// roc 2011-06 009663d0  unit: Ogre::RbxCluster  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009663d0
//
// 009663d0  8b542404             mov edx, dword ptr [esp + 4]
// 009663d4  8b02                 mov eax, dword ptr [edx]
// 009663d6  56                   push esi
// 009663d7  8b7008               mov esi, dword ptr [eax + 8]
// 009663da  8932                 mov dword ptr [edx], esi
// 009663dc  8b7008               mov esi, dword ptr [eax + 8]
// 009663df  807e5d00             cmp byte ptr [esi + 0x5d], 0
// 009663e3  7503                 jne 0x9663e8
// 009663e5  895604               mov dword ptr [esi + 4], edx
// 009663e8  8b7204               mov esi, dword ptr [edx + 4]
// 009663eb  897004               mov dword ptr [eax + 4], esi
// 009663ee  8b4904               mov ecx, dword ptr [ecx + 4]
// 009663f1  5e                   pop esi
// 009663f2  3b5104               cmp edx, dword ptr [ecx + 4]
// 009663f5  750c                 jne 0x966403
// 009663f7  894104               mov dword ptr [ecx + 4], eax
// 009663fa  895008               mov dword ptr [eax + 8], edx
// 009663fd  894204               mov dword ptr [edx + 4], eax
// 00966400  c20400               ret 4
// 00966403  8b4a04               mov ecx, dword ptr [edx + 4]
// 00966406  3b5108               cmp edx, dword ptr [ecx + 8]
// 00966409  750c                 jne 0x966417
// 0096640b  894108               mov dword ptr [ecx + 8], eax
// 0096640e  895008               mov dword ptr [eax + 8], edx
// 00966411  894204               mov dword ptr [edx + 4], eax
// 00966414  c20400               ret 4
// 00966417  8901                 mov dword ptr [ecx], eax
// 00966419  895008               mov dword ptr [eax + 8], edx
// 0096641c  894204               mov dword ptr [edx + 4], eax
// 0096641f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
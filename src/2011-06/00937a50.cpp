// roc 2011-06 00937a50  unit: Ogre::VertexStreamer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937a50
//
// 00937a50  8b542404             mov edx, dword ptr [esp + 4]
// 00937a54  8b02                 mov eax, dword ptr [edx]
// 00937a56  56                   push esi
// 00937a57  8b7008               mov esi, dword ptr [eax + 8]
// 00937a5a  8932                 mov dword ptr [edx], esi
// 00937a5c  8b7008               mov esi, dword ptr [eax + 8]
// 00937a5f  807e6900             cmp byte ptr [esi + 0x69], 0
// 00937a63  7503                 jne 0x937a68
// 00937a65  895604               mov dword ptr [esi + 4], edx
// 00937a68  8b7204               mov esi, dword ptr [edx + 4]
// 00937a6b  897004               mov dword ptr [eax + 4], esi
// 00937a6e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00937a71  5e                   pop esi
// 00937a72  3b5104               cmp edx, dword ptr [ecx + 4]
// 00937a75  750c                 jne 0x937a83
// 00937a77  894104               mov dword ptr [ecx + 4], eax
// 00937a7a  895008               mov dword ptr [eax + 8], edx
// 00937a7d  894204               mov dword ptr [edx + 4], eax
// 00937a80  c20400               ret 4
// 00937a83  8b4a04               mov ecx, dword ptr [edx + 4]
// 00937a86  3b5108               cmp edx, dword ptr [ecx + 8]
// 00937a89  750c                 jne 0x937a97
// 00937a8b  894108               mov dword ptr [ecx + 8], eax
// 00937a8e  895008               mov dword ptr [eax + 8], edx
// 00937a91  894204               mov dword ptr [edx + 4], eax
// 00937a94  c20400               ret 4
// 00937a97  8901                 mov dword ptr [ecx], eax
// 00937a99  895008               mov dword ptr [eax + 8], edx
// 00937a9c  894204               mov dword ptr [edx + 4], eax
// 00937a9f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
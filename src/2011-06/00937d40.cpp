// roc 2011-06 00937d40  unit: Ogre::VertexStreamer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937d40
//
// 00937d40  8b542404             mov edx, dword ptr [esp + 4]
// 00937d44  8b4208               mov eax, dword ptr [edx + 8]
// 00937d47  56                   push esi
// 00937d48  8b30                 mov esi, dword ptr [eax]
// 00937d4a  897208               mov dword ptr [edx + 8], esi
// 00937d4d  8b30                 mov esi, dword ptr [eax]
// 00937d4f  807e6900             cmp byte ptr [esi + 0x69], 0
// 00937d53  7503                 jne 0x937d58
// 00937d55  895604               mov dword ptr [esi + 4], edx
// 00937d58  8b7204               mov esi, dword ptr [edx + 4]
// 00937d5b  897004               mov dword ptr [eax + 4], esi
// 00937d5e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00937d61  5e                   pop esi
// 00937d62  3b5104               cmp edx, dword ptr [ecx + 4]
// 00937d65  750b                 jne 0x937d72
// 00937d67  894104               mov dword ptr [ecx + 4], eax
// 00937d6a  8910                 mov dword ptr [eax], edx
// 00937d6c  894204               mov dword ptr [edx + 4], eax
// 00937d6f  c20400               ret 4
// 00937d72  8b4a04               mov ecx, dword ptr [edx + 4]
// 00937d75  3b11                 cmp edx, dword ptr [ecx]
// 00937d77  750a                 jne 0x937d83
// 00937d79  8901                 mov dword ptr [ecx], eax
// 00937d7b  8910                 mov dword ptr [eax], edx
// 00937d7d  894204               mov dword ptr [edx + 4], eax
// 00937d80  c20400               ret 4
// 00937d83  894108               mov dword ptr [ecx + 8], eax
// 00937d86  8910                 mov dword ptr [eax], edx
// 00937d88  894204               mov dword ptr [edx + 4], eax
// 00937d8b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
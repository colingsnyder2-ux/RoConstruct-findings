// roc 2011-06 0096be20  unit: Ogre::istreamDataStream  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096be20
//
// 0096be20  8b542404             mov edx, dword ptr [esp + 4]
// 0096be24  8b4208               mov eax, dword ptr [edx + 8]
// 0096be27  56                   push esi
// 0096be28  8b30                 mov esi, dword ptr [eax]
// 0096be2a  897208               mov dword ptr [edx + 8], esi
// 0096be2d  8b30                 mov esi, dword ptr [eax]
// 0096be2f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0096be33  7503                 jne 0x96be38
// 0096be35  895604               mov dword ptr [esi + 4], edx
// 0096be38  8b7204               mov esi, dword ptr [edx + 4]
// 0096be3b  897004               mov dword ptr [eax + 4], esi
// 0096be3e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0096be41  5e                   pop esi
// 0096be42  3b5104               cmp edx, dword ptr [ecx + 4]
// 0096be45  750b                 jne 0x96be52
// 0096be47  894104               mov dword ptr [ecx + 4], eax
// 0096be4a  8910                 mov dword ptr [eax], edx
// 0096be4c  894204               mov dword ptr [edx + 4], eax
// 0096be4f  c20400               ret 4
// 0096be52  8b4a04               mov ecx, dword ptr [edx + 4]
// 0096be55  3b11                 cmp edx, dword ptr [ecx]
// 0096be57  750a                 jne 0x96be63
// 0096be59  8901                 mov dword ptr [ecx], eax
// 0096be5b  8910                 mov dword ptr [eax], edx
// 0096be5d  894204               mov dword ptr [edx + 4], eax
// 0096be60  c20400               ret 4
// 0096be63  894108               mov dword ptr [ecx + 8], eax
// 0096be66  8910                 mov dword ptr [eax], edx
// 0096be68  894204               mov dword ptr [edx + 4], eax
// 0096be6b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
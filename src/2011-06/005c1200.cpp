// roc 2011-06 005c1200  unit: RBX::VRbxRay::?$TypedPropertyDescriptor  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1200
//
// 005c1200  8b542404             mov edx, dword ptr [esp + 4]
// 005c1204  8b4208               mov eax, dword ptr [edx + 8]
// 005c1207  56                   push esi
// 005c1208  8b30                 mov esi, dword ptr [eax]
// 005c120a  897208               mov dword ptr [edx + 8], esi
// 005c120d  8b30                 mov esi, dword ptr [eax]
// 005c120f  807e1500             cmp byte ptr [esi + 0x15], 0
// 005c1213  7503                 jne 0x5c1218
// 005c1215  895604               mov dword ptr [esi + 4], edx
// 005c1218  8b7204               mov esi, dword ptr [edx + 4]
// 005c121b  897004               mov dword ptr [eax + 4], esi
// 005c121e  8b4904               mov ecx, dword ptr [ecx + 4]
// 005c1221  5e                   pop esi
// 005c1222  3b5104               cmp edx, dword ptr [ecx + 4]
// 005c1225  750b                 jne 0x5c1232
// 005c1227  894104               mov dword ptr [ecx + 4], eax
// 005c122a  8910                 mov dword ptr [eax], edx
// 005c122c  894204               mov dword ptr [edx + 4], eax
// 005c122f  c20400               ret 4
// 005c1232  8b4a04               mov ecx, dword ptr [edx + 4]
// 005c1235  3b11                 cmp edx, dword ptr [ecx]
// 005c1237  750a                 jne 0x5c1243
// 005c1239  8901                 mov dword ptr [ecx], eax
// 005c123b  8910                 mov dword ptr [eax], edx
// 005c123d  894204               mov dword ptr [edx + 4], eax
// 005c1240  c20400               ret 4
// 005c1243  894108               mov dword ptr [ecx + 8], eax
// 005c1246  8910                 mov dword ptr [eax], edx
// 005c1248  894204               mov dword ptr [edx + 4], eax
// 005c124b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
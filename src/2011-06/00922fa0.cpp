// roc 2011-06 00922fa0  unit: Ogre::VDataStream::?$SharedPtr  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00922fa0
//
// 00922fa0  8b542404             mov edx, dword ptr [esp + 4]
// 00922fa4  8b4208               mov eax, dword ptr [edx + 8]
// 00922fa7  56                   push esi
// 00922fa8  8b30                 mov esi, dword ptr [eax]
// 00922faa  897208               mov dword ptr [edx + 8], esi
// 00922fad  8b30                 mov esi, dword ptr [eax]
// 00922faf  807e3900             cmp byte ptr [esi + 0x39], 0
// 00922fb3  7503                 jne 0x922fb8
// 00922fb5  895604               mov dword ptr [esi + 4], edx
// 00922fb8  8b7204               mov esi, dword ptr [edx + 4]
// 00922fbb  897004               mov dword ptr [eax + 4], esi
// 00922fbe  8b4904               mov ecx, dword ptr [ecx + 4]
// 00922fc1  5e                   pop esi
// 00922fc2  3b5104               cmp edx, dword ptr [ecx + 4]
// 00922fc5  750b                 jne 0x922fd2
// 00922fc7  894104               mov dword ptr [ecx + 4], eax
// 00922fca  8910                 mov dword ptr [eax], edx
// 00922fcc  894204               mov dword ptr [edx + 4], eax
// 00922fcf  c20400               ret 4
// 00922fd2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00922fd5  3b11                 cmp edx, dword ptr [ecx]
// 00922fd7  750a                 jne 0x922fe3
// 00922fd9  8901                 mov dword ptr [ecx], eax
// 00922fdb  8910                 mov dword ptr [eax], edx
// 00922fdd  894204               mov dword ptr [edx + 4], eax
// 00922fe0  c20400               ret 4
// 00922fe3  894108               mov dword ptr [ecx + 8], eax
// 00922fe6  8910                 mov dword ptr [eax], edx
// 00922fe8  894204               mov dword ptr [edx + 4], eax
// 00922feb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;
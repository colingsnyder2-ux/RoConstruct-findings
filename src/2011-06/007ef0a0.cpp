// roc 2011-06 007ef0a0  unit: RBX::SpatialFilter  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ef0a0
//
// 007ef0a0  8b542404             mov edx, dword ptr [esp + 4]
// 007ef0a4  8b4208               mov eax, dword ptr [edx + 8]
// 007ef0a7  56                   push esi
// 007ef0a8  8b30                 mov esi, dword ptr [eax]
// 007ef0aa  897208               mov dword ptr [edx + 8], esi
// 007ef0ad  8b30                 mov esi, dword ptr [eax]
// 007ef0af  807e1100             cmp byte ptr [esi + 0x11], 0
// 007ef0b3  7503                 jne 0x7ef0b8
// 007ef0b5  895604               mov dword ptr [esi + 4], edx
// 007ef0b8  8b7204               mov esi, dword ptr [edx + 4]
// 007ef0bb  897004               mov dword ptr [eax + 4], esi
// 007ef0be  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ef0c1  5e                   pop esi
// 007ef0c2  3b5104               cmp edx, dword ptr [ecx + 4]
// 007ef0c5  750b                 jne 0x7ef0d2
// 007ef0c7  894104               mov dword ptr [ecx + 4], eax
// 007ef0ca  8910                 mov dword ptr [eax], edx
// 007ef0cc  894204               mov dword ptr [edx + 4], eax
// 007ef0cf  c20400               ret 4
// 007ef0d2  8b4a04               mov ecx, dword ptr [edx + 4]
// 007ef0d5  3b11                 cmp edx, dword ptr [ecx]
// 007ef0d7  750a                 jne 0x7ef0e3
// 007ef0d9  8901                 mov dword ptr [ecx], eax
// 007ef0db  8910                 mov dword ptr [eax], edx
// 007ef0dd  894204               mov dword ptr [edx + 4], eax
// 007ef0e0  c20400               ret 4
// 007ef0e3  894108               mov dword ptr [ecx + 8], eax
// 007ef0e6  8910                 mov dword ptr [eax], edx
// 007ef0e8  894204               mov dword ptr [edx + 4], eax
// 007ef0eb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x04]; };

typedef std::_Tree<std::_Tset_traits<Value, std::less<Value>, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
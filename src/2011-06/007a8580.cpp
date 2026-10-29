// roc 2011-06 007a8580  unit: RBX::PyramidPoly  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a8580
//
// 007a8580  8b542404             mov edx, dword ptr [esp + 4]
// 007a8584  8b4208               mov eax, dword ptr [edx + 8]
// 007a8587  56                   push esi
// 007a8588  8b30                 mov esi, dword ptr [eax]
// 007a858a  897208               mov dword ptr [edx + 8], esi
// 007a858d  8b30                 mov esi, dword ptr [eax]
// 007a858f  807e2500             cmp byte ptr [esi + 0x25], 0
// 007a8593  7503                 jne 0x7a8598
// 007a8595  895604               mov dword ptr [esi + 4], edx
// 007a8598  8b7204               mov esi, dword ptr [edx + 4]
// 007a859b  897004               mov dword ptr [eax + 4], esi
// 007a859e  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a85a1  5e                   pop esi
// 007a85a2  3b5104               cmp edx, dword ptr [ecx + 4]
// 007a85a5  750b                 jne 0x7a85b2
// 007a85a7  894104               mov dword ptr [ecx + 4], eax
// 007a85aa  8910                 mov dword ptr [eax], edx
// 007a85ac  894204               mov dword ptr [edx + 4], eax
// 007a85af  c20400               ret 4
// 007a85b2  8b4a04               mov ecx, dword ptr [edx + 4]
// 007a85b5  3b11                 cmp edx, dword ptr [ecx]
// 007a85b7  750a                 jne 0x7a85c3
// 007a85b9  8901                 mov dword ptr [ecx], eax
// 007a85bb  8910                 mov dword ptr [eax], edx
// 007a85bd  894204               mov dword ptr [edx + 4], eax
// 007a85c0  c20400               ret 4
// 007a85c3  894108               mov dword ptr [ecx + 8], eax
// 007a85c6  8910                 mov dword ptr [eax], edx
// 007a85c8  894204               mov dword ptr [edx + 4], eax
// 007a85cb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x18]; };

typedef std::_Tree<std::_Tset_traits<Value, std::less<Value>, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
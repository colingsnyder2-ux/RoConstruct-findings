// roc 2011-06 0063e7d0  unit: RBX::Workspace  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e7d0
//
// 0063e7d0  8b542404             mov edx, dword ptr [esp + 4]
// 0063e7d4  8b4208               mov eax, dword ptr [edx + 8]
// 0063e7d7  56                   push esi
// 0063e7d8  8b30                 mov esi, dword ptr [eax]
// 0063e7da  897208               mov dword ptr [edx + 8], esi
// 0063e7dd  8b30                 mov esi, dword ptr [eax]
// 0063e7df  807e2900             cmp byte ptr [esi + 0x29], 0
// 0063e7e3  7503                 jne 0x63e7e8
// 0063e7e5  895604               mov dword ptr [esi + 4], edx
// 0063e7e8  8b7204               mov esi, dword ptr [edx + 4]
// 0063e7eb  897004               mov dword ptr [eax + 4], esi
// 0063e7ee  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063e7f1  5e                   pop esi
// 0063e7f2  3b5104               cmp edx, dword ptr [ecx + 4]
// 0063e7f5  750b                 jne 0x63e802
// 0063e7f7  894104               mov dword ptr [ecx + 4], eax
// 0063e7fa  8910                 mov dword ptr [eax], edx
// 0063e7fc  894204               mov dword ptr [edx + 4], eax
// 0063e7ff  c20400               ret 4
// 0063e802  8b4a04               mov ecx, dword ptr [edx + 4]
// 0063e805  3b11                 cmp edx, dword ptr [ecx]
// 0063e807  750a                 jne 0x63e813
// 0063e809  8901                 mov dword ptr [ecx], eax
// 0063e80b  8910                 mov dword ptr [eax], edx
// 0063e80d  894204               mov dword ptr [edx + 4], eax
// 0063e810  c20400               ret 4
// 0063e813  894108               mov dword ptr [ecx + 8], eax
// 0063e816  8910                 mov dword ptr [eax], edx
// 0063e818  894204               mov dword ptr [edx + 4], eax
// 0063e81b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x1c]; };

typedef std::_Tree<std::_Tset_traits<Value, std::less<Value>, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
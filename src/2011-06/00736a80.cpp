// roc 2011-06 00736a80  unit: RBX::VStudioTool::?$EventDesc  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00736a80
//
// 00736a80  8b542404             mov edx, dword ptr [esp + 4]
// 00736a84  8b4208               mov eax, dword ptr [edx + 8]
// 00736a87  56                   push esi
// 00736a88  8b30                 mov esi, dword ptr [eax]
// 00736a8a  897208               mov dword ptr [edx + 8], esi
// 00736a8d  8b30                 mov esi, dword ptr [eax]
// 00736a8f  807e0e00             cmp byte ptr [esi + 0xe], 0
// 00736a93  7503                 jne 0x736a98
// 00736a95  895604               mov dword ptr [esi + 4], edx
// 00736a98  8b7204               mov esi, dword ptr [edx + 4]
// 00736a9b  897004               mov dword ptr [eax + 4], esi
// 00736a9e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00736aa1  5e                   pop esi
// 00736aa2  3b5104               cmp edx, dword ptr [ecx + 4]
// 00736aa5  750b                 jne 0x736ab2
// 00736aa7  894104               mov dword ptr [ecx + 4], eax
// 00736aaa  8910                 mov dword ptr [eax], edx
// 00736aac  894204               mov dword ptr [edx + 4], eax
// 00736aaf  c20400               ret 4
// 00736ab2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00736ab5  3b11                 cmp edx, dword ptr [ecx]
// 00736ab7  750a                 jne 0x736ac3
// 00736ab9  8901                 mov dword ptr [ecx], eax
// 00736abb  8910                 mov dword ptr [eax], edx
// 00736abd  894204               mov dword ptr [edx + 4], eax
// 00736ac0  c20400               ret 4
// 00736ac3  894108               mov dword ptr [ecx + 8], eax
// 00736ac6  8910                 mov dword ptr [eax], edx
// 00736ac8  894204               mov dword ptr [edx + 4], eax
// 00736acb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x1]; };

typedef std::_Tree<std::_Tset_traits<Value, std::less<Value>, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
// roc 2011-06 004c8530  unit: RBX::Network::Players  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c8530
//
// 004c8530  8b542404             mov edx, dword ptr [esp + 4]
// 004c8534  8b4208               mov eax, dword ptr [edx + 8]
// 004c8537  56                   push esi
// 004c8538  8b30                 mov esi, dword ptr [eax]
// 004c853a  897208               mov dword ptr [edx + 8], esi
// 004c853d  8b30                 mov esi, dword ptr [eax]
// 004c853f  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c8543  7503                 jne 0x4c8548
// 004c8545  895604               mov dword ptr [esi + 4], edx
// 004c8548  8b7204               mov esi, dword ptr [edx + 4]
// 004c854b  897004               mov dword ptr [eax + 4], esi
// 004c854e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c8551  5e                   pop esi
// 004c8552  3b5104               cmp edx, dword ptr [ecx + 4]
// 004c8555  750b                 jne 0x4c8562
// 004c8557  894104               mov dword ptr [ecx + 4], eax
// 004c855a  8910                 mov dword ptr [eax], edx
// 004c855c  894204               mov dword ptr [edx + 4], eax
// 004c855f  c20400               ret 4
// 004c8562  8b4a04               mov ecx, dword ptr [edx + 4]
// 004c8565  3b11                 cmp edx, dword ptr [ecx]
// 004c8567  750a                 jne 0x4c8573
// 004c8569  8901                 mov dword ptr [ecx], eax
// 004c856b  8910                 mov dword ptr [eax], edx
// 004c856d  894204               mov dword ptr [edx + 4], eax
// 004c8570  c20400               ret 4
// 004c8573  894108               mov dword ptr [ecx + 8], eax
// 004c8576  8910                 mov dword ptr [eax], edx
// 004c8578  894204               mov dword ptr [edx + 4], eax
// 004c857b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@U?$less@UValue@@@std@@V?$allocator@UValue@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0xc]; };

typedef std::_Tree<std::_Tset_traits<Value, std::less<Value>, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
// roc 2011-06 0092be90  unit: Ogre::GfxClustererPart  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092be90
//
// 0092be90  8b542404             mov edx, dword ptr [esp + 4]
// 0092be94  8b4208               mov eax, dword ptr [edx + 8]
// 0092be97  56                   push esi
// 0092be98  8b30                 mov esi, dword ptr [eax]
// 0092be9a  897208               mov dword ptr [edx + 8], esi
// 0092be9d  8b30                 mov esi, dword ptr [eax]
// 0092be9f  807e2900             cmp byte ptr [esi + 0x29], 0
// 0092bea3  7503                 jne 0x92bea8
// 0092bea5  895604               mov dword ptr [esi + 4], edx
// 0092bea8  8b7204               mov esi, dword ptr [edx + 4]
// 0092beab  897004               mov dword ptr [eax + 4], esi
// 0092beae  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0092beb1  5e                   pop esi
// 0092beb2  3b5104               cmp edx, dword ptr [ecx + 4]
// 0092beb5  750b                 jne 0x92bec2
// 0092beb7  894104               mov dword ptr [ecx + 4], eax
// 0092beba  8910                 mov dword ptr [eax], edx
// 0092bebc  894204               mov dword ptr [edx + 4], eax
// 0092bebf  c20400               ret 4
// 0092bec2  8b4a04               mov ecx, dword ptr [edx + 4]
// 0092bec5  3b11                 cmp edx, dword ptr [ecx]
// 0092bec7  750a                 jne 0x92bed3
// 0092bec9  8901                 mov dword ptr [ecx], eax
// 0092becb  8910                 mov dword ptr [eax], edx
// 0092becd  894204               mov dword ptr [edx + 4], eax
// 0092bed0  c20400               ret 4
// 0092bed3  894108               mov dword ptr [ecx + 8], eax
// 0092bed6  8910                 mov dword ptr [eax], edx
// 0092bed8  894204               mov dword ptr [edx + 4], eax
// 0092bedb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@ULess@@V?$allocator@UValue@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@ULess@@V?$allocator@UValue@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x1c]; };
// _Myhead at +0x10: comparator carries 4 bytes of state.
struct Less { int state; bool operator()(const Value&, const Value&) const; };

typedef std::_Tree<std::_Tset_traits<Value, Less, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
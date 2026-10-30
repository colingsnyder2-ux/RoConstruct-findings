// roc 2011-06 0092c020  unit: Ogre::GfxClustererPart  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092c020
//
// 0092c020  8b542404             mov edx, dword ptr [esp + 4]
// 0092c024  8b4208               mov eax, dword ptr [edx + 8]
// 0092c027  56                   push esi
// 0092c028  8b30                 mov esi, dword ptr [eax]
// 0092c02a  897208               mov dword ptr [edx + 8], esi
// 0092c02d  8b30                 mov esi, dword ptr [eax]
// 0092c02f  807e4500             cmp byte ptr [esi + 0x45], 0
// 0092c033  7503                 jne 0x92c038
// 0092c035  895604               mov dword ptr [esi + 4], edx
// 0092c038  8b7204               mov esi, dword ptr [edx + 4]
// 0092c03b  897004               mov dword ptr [eax + 4], esi
// 0092c03e  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0092c041  5e                   pop esi
// 0092c042  3b5104               cmp edx, dword ptr [ecx + 4]
// 0092c045  750b                 jne 0x92c052
// 0092c047  894104               mov dword ptr [ecx + 4], eax
// 0092c04a  8910                 mov dword ptr [eax], edx
// 0092c04c  894204               mov dword ptr [edx + 4], eax
// 0092c04f  c20400               ret 4
// 0092c052  8b4a04               mov ecx, dword ptr [edx + 4]
// 0092c055  3b11                 cmp edx, dword ptr [ecx]
// 0092c057  750a                 jne 0x92c063
// 0092c059  8901                 mov dword ptr [ecx], eax
// 0092c05b  8910                 mov dword ptr [eax], edx
// 0092c05d  894204               mov dword ptr [edx + 4], eax
// 0092c060  c20400               ret 4
// 0092c063  894108               mov dword ptr [ecx + 8], eax
// 0092c066  8910                 mov dword ptr [eax], edx
// 0092c068  894204               mov dword ptr [edx + 4], eax
// 0092c06b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue@@ULess@@V?$allocator@UValue@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue@@ULess@@V?$allocator@UValue@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value { char bytes[0x38]; };
// _Myhead at +0x10: comparator carries 4 bytes of state.
struct Less { int state; bool operator()(const Value&, const Value&) const; };

typedef std::_Tree<std::_Tset_traits<Value, Less, std::allocator<Value>, false> > Tree;
template void Tree::_Lrotate(Tree::_Nodeptr);
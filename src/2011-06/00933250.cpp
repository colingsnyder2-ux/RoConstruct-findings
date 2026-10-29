// roc 2011-06 00933250  unit: Ogre::VRbxSky::?$SharedPtr  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00933250
//
// 00933250  8b542404             mov edx, dword ptr [esp + 4]
// 00933254  8b4208               mov eax, dword ptr [edx + 8]
// 00933257  56                   push esi
// 00933258  8b30                 mov esi, dword ptr [eax]
// 0093325a  897208               mov dword ptr [edx + 8], esi
// 0093325d  8b30                 mov esi, dword ptr [eax]
// 0093325f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00933263  7503                 jne 0x933268
// 00933265  895604               mov dword ptr [esi + 4], edx
// 00933268  8b7204               mov esi, dword ptr [edx + 4]
// 0093326b  897004               mov dword ptr [eax + 4], esi
// 0093326e  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00933271  5e                   pop esi
// 00933272  3b5104               cmp edx, dword ptr [ecx + 4]
// 00933275  750b                 jne 0x933282
// 00933277  894104               mov dword ptr [ecx + 4], eax
// 0093327a  8910                 mov dword ptr [eax], edx
// 0093327c  894204               mov dword ptr [edx + 4], eax
// 0093327f  c20400               ret 4
// 00933282  8b4a04               mov ecx, dword ptr [edx + 4]
// 00933285  3b11                 cmp edx, dword ptr [ecx]
// 00933287  750a                 jne 0x933293
// 00933289  8901                 mov dword ptr [ecx], eax
// 0093328b  8910                 mov dword ptr [eax], edx
// 0093328d  894204               mov dword ptr [edx + 4], eax
// 00933290  c20400               ret 4
// 00933293  894108               mov dword ptr [ecx + 8], eax
// 00933296  8910                 mov dword ptr [eax], edx
// 00933298  894204               mov dword ptr [edx + 4], eax
// 0093329b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x2d) - 0xd bytes.
struct Value { int words[7]; };
// _Myhead at +0x10: comparator carries 4 bytes of state.
struct Less { int state; bool operator()(int, int) const; };
template class std::_Tree<std::_Tmap_traits<int, Value, Less,
    std::allocator<std::pair<const int, Value> >, false> >;
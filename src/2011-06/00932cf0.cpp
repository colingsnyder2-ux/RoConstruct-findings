// roc 2011-06 00932cf0  unit: Ogre::VResource::?$SharedPtr  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00932cf0
//
// 00932cf0  8b542404             mov edx, dword ptr [esp + 4]
// 00932cf4  8b02                 mov eax, dword ptr [edx]
// 00932cf6  56                   push esi
// 00932cf7  8b7008               mov esi, dword ptr [eax + 8]
// 00932cfa  8932                 mov dword ptr [edx], esi
// 00932cfc  8b7008               mov esi, dword ptr [eax + 8]
// 00932cff  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00932d03  7503                 jne 0x932d08
// 00932d05  895604               mov dword ptr [esi + 4], edx
// 00932d08  8b7204               mov esi, dword ptr [edx + 4]
// 00932d0b  897004               mov dword ptr [eax + 4], esi
// 00932d0e  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00932d11  5e                   pop esi
// 00932d12  3b5104               cmp edx, dword ptr [ecx + 4]
// 00932d15  750c                 jne 0x932d23
// 00932d17  894104               mov dword ptr [ecx + 4], eax
// 00932d1a  895008               mov dword ptr [eax + 8], edx
// 00932d1d  894204               mov dword ptr [edx + 4], eax
// 00932d20  c20400               ret 4
// 00932d23  8b4a04               mov ecx, dword ptr [edx + 4]
// 00932d26  3b5108               cmp edx, dword ptr [ecx + 8]
// 00932d29  750c                 jne 0x932d37
// 00932d2b  894108               mov dword ptr [ecx + 8], eax
// 00932d2e  895008               mov dword ptr [eax + 8], edx
// 00932d31  894204               mov dword ptr [edx + 4], eax
// 00932d34  c20400               ret 4
// 00932d37  8901                 mov dword ptr [ecx], eax
// 00932d39  895008               mov dword ptr [eax + 8], edx
// 00932d3c  894204               mov dword ptr [edx + 4], eax
// 00932d3f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@2@@Z)

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
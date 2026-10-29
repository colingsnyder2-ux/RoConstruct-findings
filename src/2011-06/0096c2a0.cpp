// roc 2011-06 0096c2a0  unit: Ogre::istreamDataStream  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096c2a0
//
// 0096c2a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0096c2a4  56                   push esi
// 0096c2a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0096c2a9  3bce                 cmp ecx, esi
// 0096c2ab  7456                 je 0x96c303
// 0096c2ad  8b542410             mov edx, dword ptr [esp + 0x10]
// 0096c2b1  ff02                 inc dword ptr [edx]
// 0096c2b3  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0096c2b7  7546                 jne 0x96c2ff
// 0096c2b9  8b4108               mov eax, dword ptr [ecx + 8]
// 0096c2bc  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096c2c0  751a                 jne 0x96c2dc
// 0096c2c2  8bc8                 mov ecx, eax
// 0096c2c4  8b01                 mov eax, dword ptr [ecx]
// 0096c2c6  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096c2ca  752f                 jne 0x96c2fb
// 0096c2cc  8d642400             lea esp, [esp]
// 0096c2d0  8bc8                 mov ecx, eax
// 0096c2d2  8b01                 mov eax, dword ptr [ecx]
// 0096c2d4  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096c2d8  74f6                 je 0x96c2d0
// 0096c2da  eb1f                 jmp 0x96c2fb
// 0096c2dc  8b4104               mov eax, dword ptr [ecx + 4]
// 0096c2df  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096c2e3  7514                 jne 0x96c2f9
// 0096c2e5  3b4808               cmp ecx, dword ptr [eax + 8]
// 0096c2e8  750f                 jne 0x96c2f9
// 0096c2ea  8bc8                 mov ecx, eax
// 0096c2ec  894c2408             mov dword ptr [esp + 8], ecx
// 0096c2f0  8b4004               mov eax, dword ptr [eax + 4]
// 0096c2f3  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096c2f7  74ec                 je 0x96c2e5
// 0096c2f9  8bc8                 mov ecx, eax
// 0096c2fb  894c2408             mov dword ptr [esp + 8], ecx
// 0096c2ff  3bce                 cmp ecx, esi
// 0096c301  75ae                 jne 0x96c2b1
// 0096c303  5e                   pop esi
// 0096c304  c3                   ret 
// copied from an identical function in another client (function ??$_Distance2@Viterator@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

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
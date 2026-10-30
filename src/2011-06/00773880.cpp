// roc 2011-06 00773880  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00773880
//
// 00773880  8b01                 mov eax, dword ptr [ecx]
// 00773882  80784500             cmp byte ptr [eax + 0x45], 0
// 00773886  7406                 je 0x77388e
// 00773888  8b4008               mov eax, dword ptr [eax + 8]
// 0077388b  8901                 mov dword ptr [ecx], eax
// 0077388d  c3                   ret 
// 0077388e  8b10                 mov edx, dword ptr [eax]
// 00773890  807a4500             cmp byte ptr [edx + 0x45], 0
// 00773894  7518                 jne 0x7738ae
// 00773896  8b4208               mov eax, dword ptr [edx + 8]
// 00773899  80784500             cmp byte ptr [eax + 0x45], 0
// 0077389d  750c                 jne 0x7738ab
// 0077389f  90                   nop 
// 007738a0  8bd0                 mov edx, eax
// 007738a2  8b4208               mov eax, dword ptr [edx + 8]
// 007738a5  80784500             cmp byte ptr [eax + 0x45], 0
// 007738a9  74f5                 je 0x7738a0
// 007738ab  8911                 mov dword ptr [ecx], edx
// 007738ad  c3                   ret 
// 007738ae  8b4004               mov eax, dword ptr [eax + 4]
// 007738b1  80784500             cmp byte ptr [eax + 0x45], 0
// 007738b5  7511                 jne 0x7738c8
// 007738b7  8b11                 mov edx, dword ptr [ecx]
// 007738b9  3b10                 cmp edx, dword ptr [eax]
// 007738bb  750b                 jne 0x7738c8
// 007738bd  8901                 mov dword ptr [ecx], eax
// 007738bf  8b4004               mov eax, dword ptr [eax + 4]
// 007738c2  80784500             cmp byte ptr [eax + 0x45], 0
// 007738c6  74ef                 je 0x7738b7
// 007738c8  8b11                 mov edx, dword ptr [ecx]
// 007738ca  807a4500             cmp byte ptr [edx + 0x45], 0
// 007738ce  7502                 jne 0x7738d2
// 007738d0  8901                 mov dword ptr [ecx], eax
// 007738d2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
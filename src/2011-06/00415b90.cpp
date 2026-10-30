// roc 2011-06 00415b90  unit: PasteVerb  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415b90
//
// 00415b90  8b542404             mov edx, dword ptr [esp + 4]
// 00415b94  8b02                 mov eax, dword ptr [edx]
// 00415b96  56                   push esi
// 00415b97  8b7008               mov esi, dword ptr [eax + 8]
// 00415b9a  8932                 mov dword ptr [edx], esi
// 00415b9c  8b7008               mov esi, dword ptr [eax + 8]
// 00415b9f  807e4500             cmp byte ptr [esi + 0x45], 0
// 00415ba3  7503                 jne 0x415ba8
// 00415ba5  895604               mov dword ptr [esi + 4], edx
// 00415ba8  8b7204               mov esi, dword ptr [edx + 4]
// 00415bab  897004               mov dword ptr [eax + 4], esi
// 00415bae  8b4904               mov ecx, dword ptr [ecx + 4]
// 00415bb1  5e                   pop esi
// 00415bb2  3b5104               cmp edx, dword ptr [ecx + 4]
// 00415bb5  750c                 jne 0x415bc3
// 00415bb7  894104               mov dword ptr [ecx + 4], eax
// 00415bba  895008               mov dword ptr [eax + 8], edx
// 00415bbd  894204               mov dword ptr [edx + 4], eax
// 00415bc0  c20400               ret 4
// 00415bc3  8b4a04               mov ecx, dword ptr [edx + 4]
// 00415bc6  3b5108               cmp edx, dword ptr [ecx + 8]
// 00415bc9  750c                 jne 0x415bd7
// 00415bcb  894108               mov dword ptr [ecx + 8], eax
// 00415bce  895008               mov dword ptr [eax + 8], edx
// 00415bd1  894204               mov dword ptr [edx + 4], eax
// 00415bd4  c20400               ret 4
// 00415bd7  8901                 mov dword ptr [ecx], eax
// 00415bd9  895008               mov dword ptr [eax + 8], edx
// 00415bdc  894204               mov dword ptr [edx + 4], eax
// 00415bdf  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
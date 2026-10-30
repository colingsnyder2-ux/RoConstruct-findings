// roc 2011-06 0064b9a0  unit: RBX::GameBasicSettings  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064b9a0
//
// 0064b9a0  8b542404             mov edx, dword ptr [esp + 4]
// 0064b9a4  8b02                 mov eax, dword ptr [edx]
// 0064b9a6  56                   push esi
// 0064b9a7  8b7008               mov esi, dword ptr [eax + 8]
// 0064b9aa  8932                 mov dword ptr [edx], esi
// 0064b9ac  8b7008               mov esi, dword ptr [eax + 8]
// 0064b9af  807e2100             cmp byte ptr [esi + 0x21], 0
// 0064b9b3  7503                 jne 0x64b9b8
// 0064b9b5  895604               mov dword ptr [esi + 4], edx
// 0064b9b8  8b7204               mov esi, dword ptr [edx + 4]
// 0064b9bb  897004               mov dword ptr [eax + 4], esi
// 0064b9be  8b4904               mov ecx, dword ptr [ecx + 4]
// 0064b9c1  5e                   pop esi
// 0064b9c2  3b5104               cmp edx, dword ptr [ecx + 4]
// 0064b9c5  750c                 jne 0x64b9d3
// 0064b9c7  894104               mov dword ptr [ecx + 4], eax
// 0064b9ca  895008               mov dword ptr [eax + 8], edx
// 0064b9cd  894204               mov dword ptr [edx + 4], eax
// 0064b9d0  c20400               ret 4
// 0064b9d3  8b4a04               mov ecx, dword ptr [edx + 4]
// 0064b9d6  3b5108               cmp edx, dword ptr [ecx + 8]
// 0064b9d9  750c                 jne 0x64b9e7
// 0064b9db  894108               mov dword ptr [ecx + 8], eax
// 0064b9de  895008               mov dword ptr [eax + 8], edx
// 0064b9e1  894204               mov dword ptr [edx + 4], eax
// 0064b9e4  c20400               ret 4
// 0064b9e7  8901                 mov dword ptr [ecx], eax
// 0064b9e9  895008               mov dword ptr [eax + 8], edx
// 0064b9ec  894204               mov dword ptr [edx + 4], eax
// 0064b9ef  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
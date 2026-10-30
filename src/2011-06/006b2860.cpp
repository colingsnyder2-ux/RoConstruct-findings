// roc 2011-06 006b2860  unit: RBX::GuiButton  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2860
//
// 006b2860  8b542404             mov edx, dword ptr [esp + 4]
// 006b2864  8b02                 mov eax, dword ptr [edx]
// 006b2866  56                   push esi
// 006b2867  8b7008               mov esi, dword ptr [eax + 8]
// 006b286a  8932                 mov dword ptr [edx], esi
// 006b286c  8b7008               mov esi, dword ptr [eax + 8]
// 006b286f  807e7100             cmp byte ptr [esi + 0x71], 0
// 006b2873  7503                 jne 0x6b2878
// 006b2875  895604               mov dword ptr [esi + 4], edx
// 006b2878  8b7204               mov esi, dword ptr [edx + 4]
// 006b287b  897004               mov dword ptr [eax + 4], esi
// 006b287e  8b4904               mov ecx, dword ptr [ecx + 4]
// 006b2881  5e                   pop esi
// 006b2882  3b5104               cmp edx, dword ptr [ecx + 4]
// 006b2885  750c                 jne 0x6b2893
// 006b2887  894104               mov dword ptr [ecx + 4], eax
// 006b288a  895008               mov dword ptr [eax + 8], edx
// 006b288d  894204               mov dword ptr [edx + 4], eax
// 006b2890  c20400               ret 4
// 006b2893  8b4a04               mov ecx, dword ptr [edx + 4]
// 006b2896  3b5108               cmp edx, dword ptr [ecx + 8]
// 006b2899  750c                 jne 0x6b28a7
// 006b289b  894108               mov dword ptr [ecx + 8], eax
// 006b289e  895008               mov dword ptr [eax + 8], edx
// 006b28a1  894204               mov dword ptr [edx + 4], eax
// 006b28a4  c20400               ret 4
// 006b28a7  8901                 mov dword ptr [ecx], eax
// 006b28a9  895008               mov dword ptr [eax + 8], edx
// 006b28ac  894204               mov dword ptr [edx + 4], eax
// 006b28af  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
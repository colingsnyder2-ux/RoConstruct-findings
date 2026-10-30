// roc 2011-06 0072e760  unit: RBX::MeshContentProvider  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072e760
//
// 0072e760  8b542404             mov edx, dword ptr [esp + 4]
// 0072e764  8b02                 mov eax, dword ptr [edx]
// 0072e766  56                   push esi
// 0072e767  8b7008               mov esi, dword ptr [eax + 8]
// 0072e76a  8932                 mov dword ptr [edx], esi
// 0072e76c  8b7008               mov esi, dword ptr [eax + 8]
// 0072e76f  807e3100             cmp byte ptr [esi + 0x31], 0
// 0072e773  7503                 jne 0x72e778
// 0072e775  895604               mov dword ptr [esi + 4], edx
// 0072e778  8b7204               mov esi, dword ptr [edx + 4]
// 0072e77b  897004               mov dword ptr [eax + 4], esi
// 0072e77e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0072e781  5e                   pop esi
// 0072e782  3b5104               cmp edx, dword ptr [ecx + 4]
// 0072e785  750c                 jne 0x72e793
// 0072e787  894104               mov dword ptr [ecx + 4], eax
// 0072e78a  895008               mov dword ptr [eax + 8], edx
// 0072e78d  894204               mov dword ptr [edx + 4], eax
// 0072e790  c20400               ret 4
// 0072e793  8b4a04               mov ecx, dword ptr [edx + 4]
// 0072e796  3b5108               cmp edx, dword ptr [ecx + 8]
// 0072e799  750c                 jne 0x72e7a7
// 0072e79b  894108               mov dword ptr [ecx + 8], eax
// 0072e79e  895008               mov dword ptr [eax + 8], edx
// 0072e7a1  894204               mov dword ptr [edx + 4], eax
// 0072e7a4  c20400               ret 4
// 0072e7a7  8901                 mov dword ptr [ecx], eax
// 0072e7a9  895008               mov dword ptr [eax + 8], edx
// 0072e7ac  894204               mov dword ptr [edx + 4], eax
// 0072e7af  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
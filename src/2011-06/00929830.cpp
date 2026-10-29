// roc 2011-06 00929830  unit: std::D::DU?$char_traits::V?$basic_string::?$STLAllocator  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00929830
//
// 00929830  8b542404             mov edx, dword ptr [esp + 4]
// 00929834  8b02                 mov eax, dword ptr [edx]
// 00929836  56                   push esi
// 00929837  8b7008               mov esi, dword ptr [eax + 8]
// 0092983a  8932                 mov dword ptr [edx], esi
// 0092983c  8b7008               mov esi, dword ptr [eax + 8]
// 0092983f  807e3900             cmp byte ptr [esi + 0x39], 0
// 00929843  7503                 jne 0x929848
// 00929845  895604               mov dword ptr [esi + 4], edx
// 00929848  8b7204               mov esi, dword ptr [edx + 4]
// 0092984b  897004               mov dword ptr [eax + 4], esi
// 0092984e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00929851  5e                   pop esi
// 00929852  3b5104               cmp edx, dword ptr [ecx + 4]
// 00929855  750c                 jne 0x929863
// 00929857  894104               mov dword ptr [ecx + 4], eax
// 0092985a  895008               mov dword ptr [eax + 8], edx
// 0092985d  894204               mov dword ptr [edx + 4], eax
// 00929860  c20400               ret 4
// 00929863  8b4a04               mov ecx, dword ptr [edx + 4]
// 00929866  3b5108               cmp edx, dword ptr [ecx + 8]
// 00929869  750c                 jne 0x929877
// 0092986b  894108               mov dword ptr [ecx + 8], eax
// 0092986e  895008               mov dword ptr [eax + 8], edx
// 00929871  894204               mov dword ptr [edx + 4], eax
// 00929874  c20400               ret 4
// 00929877  8901                 mov dword ptr [ecx], eax
// 00929879  895008               mov dword ptr [eax + 8], edx
// 0092987c  894204               mov dword ptr [edx + 4], eax
// 0092987f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;
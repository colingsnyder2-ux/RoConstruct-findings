// roc 2011-06 004dcdf0  unit: RBX::Network::Replicator  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dcdf0
//
// 004dcdf0  8b542404             mov edx, dword ptr [esp + 4]
// 004dcdf4  8b02                 mov eax, dword ptr [edx]
// 004dcdf6  56                   push esi
// 004dcdf7  8b7008               mov esi, dword ptr [eax + 8]
// 004dcdfa  8932                 mov dword ptr [edx], esi
// 004dcdfc  8b7008               mov esi, dword ptr [eax + 8]
// 004dcdff  807e1500             cmp byte ptr [esi + 0x15], 0
// 004dce03  7503                 jne 0x4dce08
// 004dce05  895604               mov dword ptr [esi + 4], edx
// 004dce08  8b7204               mov esi, dword ptr [edx + 4]
// 004dce0b  897004               mov dword ptr [eax + 4], esi
// 004dce0e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004dce11  5e                   pop esi
// 004dce12  3b5104               cmp edx, dword ptr [ecx + 4]
// 004dce15  750c                 jne 0x4dce23
// 004dce17  894104               mov dword ptr [ecx + 4], eax
// 004dce1a  895008               mov dword ptr [eax + 8], edx
// 004dce1d  894204               mov dword ptr [edx + 4], eax
// 004dce20  c20400               ret 4
// 004dce23  8b4a04               mov ecx, dword ptr [edx + 4]
// 004dce26  3b5108               cmp edx, dword ptr [ecx + 8]
// 004dce29  750c                 jne 0x4dce37
// 004dce2b  894108               mov dword ptr [ecx + 8], eax
// 004dce2e  895008               mov dword ptr [eax + 8], edx
// 004dce31  894204               mov dword ptr [edx + 4], eax
// 004dce34  c20400               ret 4
// 004dce37  8901                 mov dword ptr [ecx], eax
// 004dce39  895008               mov dword ptr [eax + 8], edx
// 004dce3c  894204               mov dword ptr [edx + 4], eax
// 004dce3f  c20400               ret 4
// copied from an identical function in another client (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
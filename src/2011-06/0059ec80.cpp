// roc 2011-06 0059ec80  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059ec80
//
// 0059ec80  8b542404             mov edx, dword ptr [esp + 4]
// 0059ec84  8b4208               mov eax, dword ptr [edx + 8]
// 0059ec87  56                   push esi
// 0059ec88  8b30                 mov esi, dword ptr [eax]
// 0059ec8a  897208               mov dword ptr [edx + 8], esi
// 0059ec8d  8b30                 mov esi, dword ptr [eax]
// 0059ec8f  807e3500             cmp byte ptr [esi + 0x35], 0
// 0059ec93  7503                 jne 0x59ec98
// 0059ec95  895604               mov dword ptr [esi + 4], edx
// 0059ec98  8b7204               mov esi, dword ptr [edx + 4]
// 0059ec9b  897004               mov dword ptr [eax + 4], esi
// 0059ec9e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059eca1  5e                   pop esi
// 0059eca2  3b5104               cmp edx, dword ptr [ecx + 4]
// 0059eca5  750b                 jne 0x59ecb2
// 0059eca7  894104               mov dword ptr [ecx + 4], eax
// 0059ecaa  8910                 mov dword ptr [eax], edx
// 0059ecac  894204               mov dword ptr [edx + 4], eax
// 0059ecaf  c20400               ret 4
// 0059ecb2  8b4a04               mov ecx, dword ptr [edx + 4]
// 0059ecb5  3b11                 cmp edx, dword ptr [ecx]
// 0059ecb7  750a                 jne 0x59ecc3
// 0059ecb9  8901                 mov dword ptr [ecx], eax
// 0059ecbb  8910                 mov dword ptr [eax], edx
// 0059ecbd  894204               mov dword ptr [edx + 4], eax
// 0059ecc0  c20400               ret 4
// 0059ecc3  894108               mov dword ptr [ecx + 8], eax
// 0059ecc6  8910                 mov dword ptr [eax], edx
// 0059ecc8  894204               mov dword ptr [edx + 4], eax
// 0059eccb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@UValue28@@U?$less@UValue28@@@std@@V?$allocator@UValue28@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@UValue28@@U?$less@UValue28@@@std@@V?$allocator@UValue28@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <set>

struct Value28 { char bytes[0x28]; };

typedef std::_Tree<std::_Tset_traits<Value28, std::less<Value28>, std::allocator<Value28>, false> > Tree28;
template void Tree28::_Lrotate(Tree28::_Nodeptr);
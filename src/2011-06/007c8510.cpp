// roc 2011-06 007c8510  unit: RBX::AdornBillboarder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8510
//
// 007c8510  8b542404             mov edx, dword ptr [esp + 4]
// 007c8514  8b4208               mov eax, dword ptr [edx + 8]
// 007c8517  56                   push esi
// 007c8518  8b30                 mov esi, dword ptr [eax]
// 007c851a  897208               mov dword ptr [edx + 8], esi
// 007c851d  8b30                 mov esi, dword ptr [eax]
// 007c851f  807e5900             cmp byte ptr [esi + 0x59], 0
// 007c8523  7503                 jne 0x7c8528
// 007c8525  895604               mov dword ptr [esi + 4], edx
// 007c8528  8b7204               mov esi, dword ptr [edx + 4]
// 007c852b  897004               mov dword ptr [eax + 4], esi
// 007c852e  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c8531  5e                   pop esi
// 007c8532  3b5104               cmp edx, dword ptr [ecx + 4]
// 007c8535  750b                 jne 0x7c8542
// 007c8537  894104               mov dword ptr [ecx + 4], eax
// 007c853a  8910                 mov dword ptr [eax], edx
// 007c853c  894204               mov dword ptr [edx + 4], eax
// 007c853f  c20400               ret 4
// 007c8542  8b4a04               mov ecx, dword ptr [edx + 4]
// 007c8545  3b11                 cmp edx, dword ptr [ecx]
// 007c8547  750a                 jne 0x7c8553
// 007c8549  8901                 mov dword ptr [ecx], eax
// 007c854b  8910                 mov dword ptr [eax], edx
// 007c854d  894204               mov dword ptr [edx + 4], eax
// 007c8550  c20400               ret 4
// 007c8553  894108               mov dword ptr [ecx + 8], eax
// 007c8556  8910                 mov dword ptr [eax], edx
// 007c8558  894204               mov dword ptr [edx + 4], eax
// 007c855b  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
// roc 2011-06 00722ba0  unit: RBX::P8PVInstance::?$SetImpl  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00722ba0
//
// 00722ba0  8b542404             mov edx, dword ptr [esp + 4]
// 00722ba4  8b4208               mov eax, dword ptr [edx + 8]
// 00722ba7  56                   push esi
// 00722ba8  8b30                 mov esi, dword ptr [eax]
// 00722baa  897208               mov dword ptr [edx + 8], esi
// 00722bad  8b30                 mov esi, dword ptr [eax]
// 00722baf  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00722bb3  7503                 jne 0x722bb8
// 00722bb5  895604               mov dword ptr [esi + 4], edx
// 00722bb8  8b7204               mov esi, dword ptr [edx + 4]
// 00722bbb  897004               mov dword ptr [eax + 4], esi
// 00722bbe  8b4904               mov ecx, dword ptr [ecx + 4]
// 00722bc1  5e                   pop esi
// 00722bc2  3b5104               cmp edx, dword ptr [ecx + 4]
// 00722bc5  750b                 jne 0x722bd2
// 00722bc7  894104               mov dword ptr [ecx + 4], eax
// 00722bca  8910                 mov dword ptr [eax], edx
// 00722bcc  894204               mov dword ptr [edx + 4], eax
// 00722bcf  c20400               ret 4
// 00722bd2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00722bd5  3b11                 cmp edx, dword ptr [ecx]
// 00722bd7  750a                 jne 0x722be3
// 00722bd9  8901                 mov dword ptr [ecx], eax
// 00722bdb  8910                 mov dword ptr [eax], edx
// 00722bdd  894204               mov dword ptr [edx + 4], eax
// 00722be0  c20400               ret 4
// 00722be3  894108               mov dword ptr [ecx + 8], eax
// 00722be6  8910                 mov dword ptr [eax], edx
// 00722be8  894204               mov dword ptr [edx + 4], eax
// 00722beb  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
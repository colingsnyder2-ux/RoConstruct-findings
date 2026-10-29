// roc 2011-06 00613960  unit: TextXmlParser  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613960
//
// 00613960  8b542404             mov edx, dword ptr [esp + 4]
// 00613964  8b4208               mov eax, dword ptr [edx + 8]
// 00613967  56                   push esi
// 00613968  8b30                 mov esi, dword ptr [eax]
// 0061396a  897208               mov dword ptr [edx + 8], esi
// 0061396d  8b30                 mov esi, dword ptr [eax]
// 0061396f  807e3100             cmp byte ptr [esi + 0x31], 0
// 00613973  7503                 jne 0x613978
// 00613975  895604               mov dword ptr [esi + 4], edx
// 00613978  8b7204               mov esi, dword ptr [edx + 4]
// 0061397b  897004               mov dword ptr [eax + 4], esi
// 0061397e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00613981  5e                   pop esi
// 00613982  3b5104               cmp edx, dword ptr [ecx + 4]
// 00613985  750b                 jne 0x613992
// 00613987  894104               mov dword ptr [ecx + 4], eax
// 0061398a  8910                 mov dword ptr [eax], edx
// 0061398c  894204               mov dword ptr [edx + 4], eax
// 0061398f  c20400               ret 4
// 00613992  8b4a04               mov ecx, dword ptr [edx + 4]
// 00613995  3b11                 cmp edx, dword ptr [ecx]
// 00613997  750a                 jne 0x6139a3
// 00613999  8901                 mov dword ptr [ecx], eax
// 0061399b  8910                 mov dword ptr [eax], edx
// 0061399d  894204               mov dword ptr [edx + 4], eax
// 006139a0  c20400               ret 4
// 006139a3  894108               mov dword ptr [ecx + 8], eax
// 006139a6  8910                 mov dword ptr [eax], edx
// 006139a8  894204               mov dword ptr [edx + 4], eax
// 006139ab  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
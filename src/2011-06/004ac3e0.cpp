// roc 2011-06 004ac3e0  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ac3e0
//
// 004ac3e0  51                   push ecx
// 004ac3e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ac3e5  56                   push esi
// 004ac3e6  8bf1                 mov esi, ecx
// 004ac3e8  8b4604               mov eax, dword ptr [esi + 4]
// 004ac3eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ac3ef  3b08                 cmp ecx, dword ptr [eax]
// 004ac3f1  7537                 jne 0x4ac42a
// 004ac3f3  3bd0                 cmp edx, eax
// 004ac3f5  7533                 jne 0x4ac42a
// 004ac3f7  8b4004               mov eax, dword ptr [eax + 4]
// 004ac3fa  50                   push eax
// 004ac3fb  8bce                 mov ecx, esi
// 004ac3fd  e83edeffff           call 0x4aa240
// 004ac402  8b4604               mov eax, dword ptr [esi + 4]
// 004ac405  894004               mov dword ptr [eax + 4], eax
// 004ac408  8b4604               mov eax, dword ptr [esi + 4]
// 004ac40b  c7460800000000       mov dword ptr [esi + 8], 0
// 004ac412  8900                 mov dword ptr [eax], eax
// 004ac414  8b4604               mov eax, dword ptr [esi + 4]
// 004ac417  894008               mov dword ptr [eax + 8], eax
// 004ac41a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ac41d  8b11                 mov edx, dword ptr [ecx]
// 004ac41f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ac423  8910                 mov dword ptr [eax], edx
// 004ac425  5e                   pop esi
// 004ac426  59                   pop ecx
// 004ac427  c20c00               ret 0xc
// 004ac42a  3bca                 cmp ecx, edx
// 004ac42c  7471                 je 0x4ac49f
// 004ac42e  8bff                 mov edi, edi
// 004ac430  80793100             cmp byte ptr [ecx + 0x31], 0
// 004ac434  8bd1                 mov edx, ecx
// 004ac436  7550                 jne 0x4ac488
// 004ac438  8b4108               mov eax, dword ptr [ecx + 8]
// 004ac43b  80783100             cmp byte ptr [eax + 0x31], 0
// 004ac43f  751f                 jne 0x4ac460
// 004ac441  8bc8                 mov ecx, eax
// 004ac443  8b01                 mov eax, dword ptr [ecx]
// 004ac445  80783100             cmp byte ptr [eax + 0x31], 0
// 004ac449  750f                 jne 0x4ac45a
// 004ac44b  eb03                 jmp 0x4ac450
// 004ac44d  8d4900               lea ecx, [ecx]
// 004ac450  8bc8                 mov ecx, eax
// 004ac452  8b01                 mov eax, dword ptr [ecx]
// 004ac454  80783100             cmp byte ptr [eax + 0x31], 0
// 004ac458  74f6                 je 0x4ac450
// 004ac45a  894c2410             mov dword ptr [esp + 0x10], ecx
// 004ac45e  eb28                 jmp 0x4ac488
// 004ac460  8b4104               mov eax, dword ptr [ecx + 4]
// 004ac463  80783100             cmp byte ptr [eax + 0x31], 0
// 004ac467  751b                 jne 0x4ac484
// 004ac469  8da42400000000       lea esp, [esp]
// 004ac470  3b4808               cmp ecx, dword ptr [eax + 8]
// 004ac473  750f                 jne 0x4ac484
// 004ac475  8bc8                 mov ecx, eax
// 004ac477  894c2410             mov dword ptr [esp + 0x10], ecx
// 004ac47b  8b4004               mov eax, dword ptr [eax + 4]
// 004ac47e  80783100             cmp byte ptr [eax + 0x31], 0
// 004ac482  74ec                 je 0x4ac470
// 004ac484  89442410             mov dword ptr [esp + 0x10], eax
// 004ac488  52                   push edx
// 004ac489  8d442408             lea eax, [esp + 8]
// 004ac48d  50                   push eax
// 004ac48e  8bce                 mov ecx, esi
// 004ac490  e8abdaffff           call 0x4a9f40
// 004ac495  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ac499  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 004ac49d  7591                 jne 0x4ac430
// 004ac49f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ac4a3  8908                 mov dword ptr [eax], ecx
// 004ac4a5  5e                   pop esi
// 004ac4a6  59                   pop ecx
// 004ac4a7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
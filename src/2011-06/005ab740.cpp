// roc 2011-06 005ab740  unit: RBX::VFriendService::?$BoundFuncDesc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ab740
//
// 005ab740  51                   push ecx
// 005ab741  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ab745  56                   push esi
// 005ab746  8bf1                 mov esi, ecx
// 005ab748  8b4604               mov eax, dword ptr [esi + 4]
// 005ab74b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ab74f  3b08                 cmp ecx, dword ptr [eax]
// 005ab751  7537                 jne 0x5ab78a
// 005ab753  3bd0                 cmp edx, eax
// 005ab755  7533                 jne 0x5ab78a
// 005ab757  8b4004               mov eax, dword ptr [eax + 4]
// 005ab75a  50                   push eax
// 005ab75b  8bce                 mov ecx, esi
// 005ab75d  e86ee8ffff           call 0x5a9fd0
// 005ab762  8b4604               mov eax, dword ptr [esi + 4]
// 005ab765  894004               mov dword ptr [eax + 4], eax
// 005ab768  8b4604               mov eax, dword ptr [esi + 4]
// 005ab76b  c7460800000000       mov dword ptr [esi + 8], 0
// 005ab772  8900                 mov dword ptr [eax], eax
// 005ab774  8b4604               mov eax, dword ptr [esi + 4]
// 005ab777  894008               mov dword ptr [eax + 8], eax
// 005ab77a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ab77d  8b11                 mov edx, dword ptr [ecx]
// 005ab77f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab783  8910                 mov dword ptr [eax], edx
// 005ab785  5e                   pop esi
// 005ab786  59                   pop ecx
// 005ab787  c20c00               ret 0xc
// 005ab78a  3bca                 cmp ecx, edx
// 005ab78c  7471                 je 0x5ab7ff
// 005ab78e  8bff                 mov edi, edi
// 005ab790  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 005ab794  8bd1                 mov edx, ecx
// 005ab796  7550                 jne 0x5ab7e8
// 005ab798  8b4108               mov eax, dword ptr [ecx + 8]
// 005ab79b  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005ab79f  751f                 jne 0x5ab7c0
// 005ab7a1  8bc8                 mov ecx, eax
// 005ab7a3  8b01                 mov eax, dword ptr [ecx]
// 005ab7a5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005ab7a9  750f                 jne 0x5ab7ba
// 005ab7ab  eb03                 jmp 0x5ab7b0
// 005ab7ad  8d4900               lea ecx, [ecx]
// 005ab7b0  8bc8                 mov ecx, eax
// 005ab7b2  8b01                 mov eax, dword ptr [ecx]
// 005ab7b4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005ab7b8  74f6                 je 0x5ab7b0
// 005ab7ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ab7be  eb28                 jmp 0x5ab7e8
// 005ab7c0  8b4104               mov eax, dword ptr [ecx + 4]
// 005ab7c3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005ab7c7  751b                 jne 0x5ab7e4
// 005ab7c9  8da42400000000       lea esp, [esp]
// 005ab7d0  3b4808               cmp ecx, dword ptr [eax + 8]
// 005ab7d3  750f                 jne 0x5ab7e4
// 005ab7d5  8bc8                 mov ecx, eax
// 005ab7d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ab7db  8b4004               mov eax, dword ptr [eax + 4]
// 005ab7de  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005ab7e2  74ec                 je 0x5ab7d0
// 005ab7e4  89442410             mov dword ptr [esp + 0x10], eax
// 005ab7e8  52                   push edx
// 005ab7e9  8d442408             lea eax, [esp + 8]
// 005ab7ed  50                   push eax
// 005ab7ee  8bce                 mov ecx, esi
// 005ab7f0  e8cbebffff           call 0x5aa3c0
// 005ab7f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ab7f9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 005ab7fd  7591                 jne 0x5ab790
// 005ab7ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab803  8908                 mov dword ptr [eax], ecx
// 005ab805  5e                   pop esi
// 005ab806  59                   pop ecx
// 005ab807  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
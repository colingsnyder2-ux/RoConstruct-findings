// roc 2011-06 006f18b0  unit: RBX::VCollectionService::?$FactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f18b0
//
// 006f18b0  51                   push ecx
// 006f18b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f18b5  56                   push esi
// 006f18b6  8bf1                 mov esi, ecx
// 006f18b8  8b4604               mov eax, dword ptr [esi + 4]
// 006f18bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f18bf  3b08                 cmp ecx, dword ptr [eax]
// 006f18c1  7537                 jne 0x6f18fa
// 006f18c3  3bd0                 cmp edx, eax
// 006f18c5  7533                 jne 0x6f18fa
// 006f18c7  8b4004               mov eax, dword ptr [eax + 4]
// 006f18ca  50                   push eax
// 006f18cb  8bce                 mov ecx, esi
// 006f18cd  e81effffff           call 0x6f17f0
// 006f18d2  8b4604               mov eax, dword ptr [esi + 4]
// 006f18d5  894004               mov dword ptr [eax + 4], eax
// 006f18d8  8b4604               mov eax, dword ptr [esi + 4]
// 006f18db  c7460800000000       mov dword ptr [esi + 8], 0
// 006f18e2  8900                 mov dword ptr [eax], eax
// 006f18e4  8b4604               mov eax, dword ptr [esi + 4]
// 006f18e7  894008               mov dword ptr [eax + 8], eax
// 006f18ea  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f18ed  8b11                 mov edx, dword ptr [ecx]
// 006f18ef  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f18f3  8910                 mov dword ptr [eax], edx
// 006f18f5  5e                   pop esi
// 006f18f6  59                   pop ecx
// 006f18f7  c20c00               ret 0xc
// 006f18fa  3bca                 cmp ecx, edx
// 006f18fc  7471                 je 0x6f196f
// 006f18fe  8bff                 mov edi, edi
// 006f1900  80793100             cmp byte ptr [ecx + 0x31], 0
// 006f1904  8bd1                 mov edx, ecx
// 006f1906  7550                 jne 0x6f1958
// 006f1908  8b4108               mov eax, dword ptr [ecx + 8]
// 006f190b  80783100             cmp byte ptr [eax + 0x31], 0
// 006f190f  751f                 jne 0x6f1930
// 006f1911  8bc8                 mov ecx, eax
// 006f1913  8b01                 mov eax, dword ptr [ecx]
// 006f1915  80783100             cmp byte ptr [eax + 0x31], 0
// 006f1919  750f                 jne 0x6f192a
// 006f191b  eb03                 jmp 0x6f1920
// 006f191d  8d4900               lea ecx, [ecx]
// 006f1920  8bc8                 mov ecx, eax
// 006f1922  8b01                 mov eax, dword ptr [ecx]
// 006f1924  80783100             cmp byte ptr [eax + 0x31], 0
// 006f1928  74f6                 je 0x6f1920
// 006f192a  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f192e  eb28                 jmp 0x6f1958
// 006f1930  8b4104               mov eax, dword ptr [ecx + 4]
// 006f1933  80783100             cmp byte ptr [eax + 0x31], 0
// 006f1937  751b                 jne 0x6f1954
// 006f1939  8da42400000000       lea esp, [esp]
// 006f1940  3b4808               cmp ecx, dword ptr [eax + 8]
// 006f1943  750f                 jne 0x6f1954
// 006f1945  8bc8                 mov ecx, eax
// 006f1947  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f194b  8b4004               mov eax, dword ptr [eax + 4]
// 006f194e  80783100             cmp byte ptr [eax + 0x31], 0
// 006f1952  74ec                 je 0x6f1940
// 006f1954  89442410             mov dword ptr [esp + 0x10], eax
// 006f1958  52                   push edx
// 006f1959  8d442408             lea eax, [esp + 8]
// 006f195d  50                   push eax
// 006f195e  8bce                 mov ecx, esi
// 006f1960  e8bbfbffff           call 0x6f1520
// 006f1965  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f1969  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 006f196d  7591                 jne 0x6f1900
// 006f196f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f1973  8908                 mov dword ptr [eax], ecx
// 006f1975  5e                   pop esi
// 006f1976  59                   pop ecx
// 006f1977  c20c00               ret 0xc
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
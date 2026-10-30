// roc 2011-06 006b65b0  unit: RBX::VInsertService::?$FactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b65b0
//
// 006b65b0  51                   push ecx
// 006b65b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b65b5  56                   push esi
// 006b65b6  8bf1                 mov esi, ecx
// 006b65b8  8b4604               mov eax, dword ptr [esi + 4]
// 006b65bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b65bf  3b08                 cmp ecx, dword ptr [eax]
// 006b65c1  7537                 jne 0x6b65fa
// 006b65c3  3bd0                 cmp edx, eax
// 006b65c5  7533                 jne 0x6b65fa
// 006b65c7  8b4004               mov eax, dword ptr [eax + 4]
// 006b65ca  50                   push eax
// 006b65cb  8bce                 mov ecx, esi
// 006b65cd  e8eee2ffff           call 0x6b48c0
// 006b65d2  8b4604               mov eax, dword ptr [esi + 4]
// 006b65d5  894004               mov dword ptr [eax + 4], eax
// 006b65d8  8b4604               mov eax, dword ptr [esi + 4]
// 006b65db  c7460800000000       mov dword ptr [esi + 8], 0
// 006b65e2  8900                 mov dword ptr [eax], eax
// 006b65e4  8b4604               mov eax, dword ptr [esi + 4]
// 006b65e7  894008               mov dword ptr [eax + 8], eax
// 006b65ea  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b65ed  8b11                 mov edx, dword ptr [ecx]
// 006b65ef  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b65f3  8910                 mov dword ptr [eax], edx
// 006b65f5  5e                   pop esi
// 006b65f6  59                   pop ecx
// 006b65f7  c20c00               ret 0xc
// 006b65fa  3bca                 cmp ecx, edx
// 006b65fc  7471                 je 0x6b666f
// 006b65fe  8bff                 mov edi, edi
// 006b6600  80797100             cmp byte ptr [ecx + 0x71], 0
// 006b6604  8bd1                 mov edx, ecx
// 006b6606  7550                 jne 0x6b6658
// 006b6608  8b4108               mov eax, dword ptr [ecx + 8]
// 006b660b  80787100             cmp byte ptr [eax + 0x71], 0
// 006b660f  751f                 jne 0x6b6630
// 006b6611  8bc8                 mov ecx, eax
// 006b6613  8b01                 mov eax, dword ptr [ecx]
// 006b6615  80787100             cmp byte ptr [eax + 0x71], 0
// 006b6619  750f                 jne 0x6b662a
// 006b661b  eb03                 jmp 0x6b6620
// 006b661d  8d4900               lea ecx, [ecx]
// 006b6620  8bc8                 mov ecx, eax
// 006b6622  8b01                 mov eax, dword ptr [ecx]
// 006b6624  80787100             cmp byte ptr [eax + 0x71], 0
// 006b6628  74f6                 je 0x6b6620
// 006b662a  894c2410             mov dword ptr [esp + 0x10], ecx
// 006b662e  eb28                 jmp 0x6b6658
// 006b6630  8b4104               mov eax, dword ptr [ecx + 4]
// 006b6633  80787100             cmp byte ptr [eax + 0x71], 0
// 006b6637  751b                 jne 0x6b6654
// 006b6639  8da42400000000       lea esp, [esp]
// 006b6640  3b4808               cmp ecx, dword ptr [eax + 8]
// 006b6643  750f                 jne 0x6b6654
// 006b6645  8bc8                 mov ecx, eax
// 006b6647  894c2410             mov dword ptr [esp + 0x10], ecx
// 006b664b  8b4004               mov eax, dword ptr [eax + 4]
// 006b664e  80787100             cmp byte ptr [eax + 0x71], 0
// 006b6652  74ec                 je 0x6b6640
// 006b6654  89442410             mov dword ptr [esp + 0x10], eax
// 006b6658  52                   push edx
// 006b6659  8d442408             lea eax, [esp + 8]
// 006b665d  50                   push eax
// 006b665e  8bce                 mov ecx, esi
// 006b6660  e8dbebffff           call 0x6b5240
// 006b6665  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b6669  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 006b666d  7591                 jne 0x6b6600
// 006b666f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b6673  8908                 mov dword ptr [eax], ecx
// 006b6675  5e                   pop esi
// 006b6676  59                   pop ecx
// 006b6677  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
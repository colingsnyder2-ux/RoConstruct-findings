// roc 2011-06 0096cd70  unit: RBX::SceneUpdater  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096cd70
//
// 0096cd70  51                   push ecx
// 0096cd71  8b542410             mov edx, dword ptr [esp + 0x10]
// 0096cd75  56                   push esi
// 0096cd76  8bf1                 mov esi, ecx
// 0096cd78  8b4604               mov eax, dword ptr [esi + 4]
// 0096cd7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0096cd7f  3b08                 cmp ecx, dword ptr [eax]
// 0096cd81  7537                 jne 0x96cdba
// 0096cd83  3bd0                 cmp edx, eax
// 0096cd85  7533                 jne 0x96cdba
// 0096cd87  8b4004               mov eax, dword ptr [eax + 4]
// 0096cd8a  50                   push eax
// 0096cd8b  8bce                 mov ecx, esi
// 0096cd8d  e84ef8ffff           call 0x96c5e0
// 0096cd92  8b4604               mov eax, dword ptr [esi + 4]
// 0096cd95  894004               mov dword ptr [eax + 4], eax
// 0096cd98  8b4604               mov eax, dword ptr [esi + 4]
// 0096cd9b  c7460800000000       mov dword ptr [esi + 8], 0
// 0096cda2  8900                 mov dword ptr [eax], eax
// 0096cda4  8b4604               mov eax, dword ptr [esi + 4]
// 0096cda7  894008               mov dword ptr [eax + 8], eax
// 0096cdaa  8b4e04               mov ecx, dword ptr [esi + 4]
// 0096cdad  8b11                 mov edx, dword ptr [ecx]
// 0096cdaf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096cdb3  8910                 mov dword ptr [eax], edx
// 0096cdb5  5e                   pop esi
// 0096cdb6  59                   pop ecx
// 0096cdb7  c20c00               ret 0xc
// 0096cdba  3bca                 cmp ecx, edx
// 0096cdbc  7471                 je 0x96ce2f
// 0096cdbe  8bff                 mov edi, edi
// 0096cdc0  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0096cdc4  8bd1                 mov edx, ecx
// 0096cdc6  7550                 jne 0x96ce18
// 0096cdc8  8b4108               mov eax, dword ptr [ecx + 8]
// 0096cdcb  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096cdcf  751f                 jne 0x96cdf0
// 0096cdd1  8bc8                 mov ecx, eax
// 0096cdd3  8b01                 mov eax, dword ptr [ecx]
// 0096cdd5  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096cdd9  750f                 jne 0x96cdea
// 0096cddb  eb03                 jmp 0x96cde0
// 0096cddd  8d4900               lea ecx, [ecx]
// 0096cde0  8bc8                 mov ecx, eax
// 0096cde2  8b01                 mov eax, dword ptr [ecx]
// 0096cde4  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096cde8  74f6                 je 0x96cde0
// 0096cdea  894c2410             mov dword ptr [esp + 0x10], ecx
// 0096cdee  eb28                 jmp 0x96ce18
// 0096cdf0  8b4104               mov eax, dword ptr [ecx + 4]
// 0096cdf3  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096cdf7  751b                 jne 0x96ce14
// 0096cdf9  8da42400000000       lea esp, [esp]
// 0096ce00  3b4808               cmp ecx, dword ptr [eax + 8]
// 0096ce03  750f                 jne 0x96ce14
// 0096ce05  8bc8                 mov ecx, eax
// 0096ce07  894c2410             mov dword ptr [esp + 0x10], ecx
// 0096ce0b  8b4004               mov eax, dword ptr [eax + 4]
// 0096ce0e  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0096ce12  74ec                 je 0x96ce00
// 0096ce14  89442410             mov dword ptr [esp + 0x10], eax
// 0096ce18  52                   push edx
// 0096ce19  8d442408             lea eax, [esp + 8]
// 0096ce1d  50                   push eax
// 0096ce1e  8bce                 mov ecx, esi
// 0096ce20  e86bf8ffff           call 0x96c690
// 0096ce25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0096ce29  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0096ce2d  7591                 jne 0x96cdc0
// 0096ce2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096ce33  8908                 mov dword ptr [eax], ecx
// 0096ce35  5e                   pop esi
// 0096ce36  59                   pop ecx
// 0096ce37  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
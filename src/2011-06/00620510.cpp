// roc 2011-06 00620510  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00620510
//
// 00620510  51                   push ecx
// 00620511  8b542410             mov edx, dword ptr [esp + 0x10]
// 00620515  56                   push esi
// 00620516  8bf1                 mov esi, ecx
// 00620518  8b4604               mov eax, dword ptr [esi + 4]
// 0062051b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062051f  3b08                 cmp ecx, dword ptr [eax]
// 00620521  7537                 jne 0x62055a
// 00620523  3bd0                 cmp edx, eax
// 00620525  7533                 jne 0x62055a
// 00620527  8b4004               mov eax, dword ptr [eax + 4]
// 0062052a  50                   push eax
// 0062052b  8bce                 mov ecx, esi
// 0062052d  e88ee1ffff           call 0x61e6c0
// 00620532  8b4604               mov eax, dword ptr [esi + 4]
// 00620535  894004               mov dword ptr [eax + 4], eax
// 00620538  8b4604               mov eax, dword ptr [esi + 4]
// 0062053b  c7460800000000       mov dword ptr [esi + 8], 0
// 00620542  8900                 mov dword ptr [eax], eax
// 00620544  8b4604               mov eax, dword ptr [esi + 4]
// 00620547  894008               mov dword ptr [eax + 8], eax
// 0062054a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062054d  8b11                 mov edx, dword ptr [ecx]
// 0062054f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00620553  8910                 mov dword ptr [eax], edx
// 00620555  5e                   pop esi
// 00620556  59                   pop ecx
// 00620557  c20c00               ret 0xc
// 0062055a  3bca                 cmp ecx, edx
// 0062055c  7471                 je 0x6205cf
// 0062055e  8bff                 mov edi, edi
// 00620560  80793900             cmp byte ptr [ecx + 0x39], 0
// 00620564  8bd1                 mov edx, ecx
// 00620566  7550                 jne 0x6205b8
// 00620568  8b4108               mov eax, dword ptr [ecx + 8]
// 0062056b  80783900             cmp byte ptr [eax + 0x39], 0
// 0062056f  751f                 jne 0x620590
// 00620571  8bc8                 mov ecx, eax
// 00620573  8b01                 mov eax, dword ptr [ecx]
// 00620575  80783900             cmp byte ptr [eax + 0x39], 0
// 00620579  750f                 jne 0x62058a
// 0062057b  eb03                 jmp 0x620580
// 0062057d  8d4900               lea ecx, [ecx]
// 00620580  8bc8                 mov ecx, eax
// 00620582  8b01                 mov eax, dword ptr [ecx]
// 00620584  80783900             cmp byte ptr [eax + 0x39], 0
// 00620588  74f6                 je 0x620580
// 0062058a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0062058e  eb28                 jmp 0x6205b8
// 00620590  8b4104               mov eax, dword ptr [ecx + 4]
// 00620593  80783900             cmp byte ptr [eax + 0x39], 0
// 00620597  751b                 jne 0x6205b4
// 00620599  8da42400000000       lea esp, [esp]
// 006205a0  3b4808               cmp ecx, dword ptr [eax + 8]
// 006205a3  750f                 jne 0x6205b4
// 006205a5  8bc8                 mov ecx, eax
// 006205a7  894c2410             mov dword ptr [esp + 0x10], ecx
// 006205ab  8b4004               mov eax, dword ptr [eax + 4]
// 006205ae  80783900             cmp byte ptr [eax + 0x39], 0
// 006205b2  74ec                 je 0x6205a0
// 006205b4  89442410             mov dword ptr [esp + 0x10], eax
// 006205b8  52                   push edx
// 006205b9  8d442408             lea eax, [esp + 8]
// 006205bd  50                   push eax
// 006205be  8bce                 mov ecx, esi
// 006205c0  e80bdeffff           call 0x61e3d0
// 006205c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006205c9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 006205cd  7591                 jne 0x620560
// 006205cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006205d3  8908                 mov dword ptr [eax], ecx
// 006205d5  5e                   pop esi
// 006205d6  59                   pop ecx
// 006205d7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;
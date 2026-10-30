// roc 2011-06 004d9110  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d9110
//
// 004d9110  51                   push ecx
// 004d9111  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d9115  56                   push esi
// 004d9116  8bf1                 mov esi, ecx
// 004d9118  8b4604               mov eax, dword ptr [esi + 4]
// 004d911b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d911f  3b08                 cmp ecx, dword ptr [eax]
// 004d9121  7537                 jne 0x4d915a
// 004d9123  3bd0                 cmp edx, eax
// 004d9125  7533                 jne 0x4d915a
// 004d9127  8b4004               mov eax, dword ptr [eax + 4]
// 004d912a  50                   push eax
// 004d912b  8bce                 mov ecx, esi
// 004d912d  e89ed6ffff           call 0x4d67d0
// 004d9132  8b4604               mov eax, dword ptr [esi + 4]
// 004d9135  894004               mov dword ptr [eax + 4], eax
// 004d9138  8b4604               mov eax, dword ptr [esi + 4]
// 004d913b  c7460800000000       mov dword ptr [esi + 8], 0
// 004d9142  8900                 mov dword ptr [eax], eax
// 004d9144  8b4604               mov eax, dword ptr [esi + 4]
// 004d9147  894008               mov dword ptr [eax + 8], eax
// 004d914a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d914d  8b11                 mov edx, dword ptr [ecx]
// 004d914f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d9153  8910                 mov dword ptr [eax], edx
// 004d9155  5e                   pop esi
// 004d9156  59                   pop ecx
// 004d9157  c20c00               ret 0xc
// 004d915a  3bca                 cmp ecx, edx
// 004d915c  7471                 je 0x4d91cf
// 004d915e  8bff                 mov edi, edi
// 004d9160  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004d9164  8bd1                 mov edx, ecx
// 004d9166  7550                 jne 0x4d91b8
// 004d9168  8b4108               mov eax, dword ptr [ecx + 8]
// 004d916b  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d916f  751f                 jne 0x4d9190
// 004d9171  8bc8                 mov ecx, eax
// 004d9173  8b01                 mov eax, dword ptr [ecx]
// 004d9175  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d9179  750f                 jne 0x4d918a
// 004d917b  eb03                 jmp 0x4d9180
// 004d917d  8d4900               lea ecx, [ecx]
// 004d9180  8bc8                 mov ecx, eax
// 004d9182  8b01                 mov eax, dword ptr [ecx]
// 004d9184  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d9188  74f6                 je 0x4d9180
// 004d918a  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d918e  eb28                 jmp 0x4d91b8
// 004d9190  8b4104               mov eax, dword ptr [ecx + 4]
// 004d9193  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d9197  751b                 jne 0x4d91b4
// 004d9199  8da42400000000       lea esp, [esp]
// 004d91a0  3b4808               cmp ecx, dword ptr [eax + 8]
// 004d91a3  750f                 jne 0x4d91b4
// 004d91a5  8bc8                 mov ecx, eax
// 004d91a7  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d91ab  8b4004               mov eax, dword ptr [eax + 4]
// 004d91ae  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d91b2  74ec                 je 0x4d91a0
// 004d91b4  89442410             mov dword ptr [esp + 0x10], eax
// 004d91b8  52                   push edx
// 004d91b9  8d442408             lea eax, [esp + 8]
// 004d91bd  50                   push eax
// 004d91be  8bce                 mov ecx, esi
// 004d91c0  e81bd3ffff           call 0x4d64e0
// 004d91c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d91c9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 004d91cd  7591                 jne 0x4d9160
// 004d91cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d91d3  8908                 mov dword ptr [eax], ecx
// 004d91d5  5e                   pop esi
// 004d91d6  59                   pop ecx
// 004d91d7  c20c00               ret 0xc
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
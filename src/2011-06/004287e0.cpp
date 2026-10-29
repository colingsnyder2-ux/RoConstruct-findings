// roc 2011-06 004287e0  unit: CSelectionTreeCtrl  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004287e0
//
// 004287e0  51                   push ecx
// 004287e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004287e5  56                   push esi
// 004287e6  8bf1                 mov esi, ecx
// 004287e8  8b4604               mov eax, dword ptr [esi + 4]
// 004287eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004287ef  3b08                 cmp ecx, dword ptr [eax]
// 004287f1  7537                 jne 0x42882a
// 004287f3  3bd0                 cmp edx, eax
// 004287f5  7533                 jne 0x42882a
// 004287f7  8b4004               mov eax, dword ptr [eax + 4]
// 004287fa  50                   push eax
// 004287fb  8bce                 mov ecx, esi
// 004287fd  e82efaffff           call 0x428230
// 00428802  8b4604               mov eax, dword ptr [esi + 4]
// 00428805  894004               mov dword ptr [eax + 4], eax
// 00428808  8b4604               mov eax, dword ptr [esi + 4]
// 0042880b  c7460800000000       mov dword ptr [esi + 8], 0
// 00428812  8900                 mov dword ptr [eax], eax
// 00428814  8b4604               mov eax, dword ptr [esi + 4]
// 00428817  894008               mov dword ptr [eax + 8], eax
// 0042881a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042881d  8b11                 mov edx, dword ptr [ecx]
// 0042881f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00428823  8910                 mov dword ptr [eax], edx
// 00428825  5e                   pop esi
// 00428826  59                   pop ecx
// 00428827  c20c00               ret 0xc
// 0042882a  3bca                 cmp ecx, edx
// 0042882c  7471                 je 0x42889f
// 0042882e  8bff                 mov edi, edi
// 00428830  80791500             cmp byte ptr [ecx + 0x15], 0
// 00428834  8bd1                 mov edx, ecx
// 00428836  7550                 jne 0x428888
// 00428838  8b4108               mov eax, dword ptr [ecx + 8]
// 0042883b  80781500             cmp byte ptr [eax + 0x15], 0
// 0042883f  751f                 jne 0x428860
// 00428841  8bc8                 mov ecx, eax
// 00428843  8b01                 mov eax, dword ptr [ecx]
// 00428845  80781500             cmp byte ptr [eax + 0x15], 0
// 00428849  750f                 jne 0x42885a
// 0042884b  eb03                 jmp 0x428850
// 0042884d  8d4900               lea ecx, [ecx]
// 00428850  8bc8                 mov ecx, eax
// 00428852  8b01                 mov eax, dword ptr [ecx]
// 00428854  80781500             cmp byte ptr [eax + 0x15], 0
// 00428858  74f6                 je 0x428850
// 0042885a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042885e  eb28                 jmp 0x428888
// 00428860  8b4104               mov eax, dword ptr [ecx + 4]
// 00428863  80781500             cmp byte ptr [eax + 0x15], 0
// 00428867  751b                 jne 0x428884
// 00428869  8da42400000000       lea esp, [esp]
// 00428870  3b4808               cmp ecx, dword ptr [eax + 8]
// 00428873  750f                 jne 0x428884
// 00428875  8bc8                 mov ecx, eax
// 00428877  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042887b  8b4004               mov eax, dword ptr [eax + 4]
// 0042887e  80781500             cmp byte ptr [eax + 0x15], 0
// 00428882  74ec                 je 0x428870
// 00428884  89442410             mov dword ptr [esp + 0x10], eax
// 00428888  52                   push edx
// 00428889  8d442408             lea eax, [esp + 8]
// 0042888d  50                   push eax
// 0042888e  8bce                 mov ecx, esi
// 00428890  e8ebfaffff           call 0x428380
// 00428895  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00428899  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0042889d  7591                 jne 0x428830
// 0042889f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004288a3  8908                 mov dword ptr [eax], ecx
// 004288a5  5e                   pop esi
// 004288a6  59                   pop ecx
// 004288a7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
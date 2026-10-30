// roc 2011-06 007ca5e0  unit: RBX::ChatLine  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ca5e0
//
// 007ca5e0  51                   push ecx
// 007ca5e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ca5e5  56                   push esi
// 007ca5e6  8bf1                 mov esi, ecx
// 007ca5e8  8b4604               mov eax, dword ptr [esi + 4]
// 007ca5eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ca5ef  3b08                 cmp ecx, dword ptr [eax]
// 007ca5f1  7537                 jne 0x7ca62a
// 007ca5f3  3bd0                 cmp edx, eax
// 007ca5f5  7533                 jne 0x7ca62a
// 007ca5f7  8b4004               mov eax, dword ptr [eax + 4]
// 007ca5fa  50                   push eax
// 007ca5fb  8bce                 mov ecx, esi
// 007ca5fd  e8beeaffff           call 0x7c90c0
// 007ca602  8b4604               mov eax, dword ptr [esi + 4]
// 007ca605  894004               mov dword ptr [eax + 4], eax
// 007ca608  8b4604               mov eax, dword ptr [esi + 4]
// 007ca60b  c7460800000000       mov dword ptr [esi + 8], 0
// 007ca612  8900                 mov dword ptr [eax], eax
// 007ca614  8b4604               mov eax, dword ptr [esi + 4]
// 007ca617  894008               mov dword ptr [eax + 8], eax
// 007ca61a  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ca61d  8b11                 mov edx, dword ptr [ecx]
// 007ca61f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ca623  8910                 mov dword ptr [eax], edx
// 007ca625  5e                   pop esi
// 007ca626  59                   pop ecx
// 007ca627  c20c00               ret 0xc
// 007ca62a  3bca                 cmp ecx, edx
// 007ca62c  7471                 je 0x7ca69f
// 007ca62e  8bff                 mov edi, edi
// 007ca630  80795900             cmp byte ptr [ecx + 0x59], 0
// 007ca634  8bd1                 mov edx, ecx
// 007ca636  7550                 jne 0x7ca688
// 007ca638  8b4108               mov eax, dword ptr [ecx + 8]
// 007ca63b  80785900             cmp byte ptr [eax + 0x59], 0
// 007ca63f  751f                 jne 0x7ca660
// 007ca641  8bc8                 mov ecx, eax
// 007ca643  8b01                 mov eax, dword ptr [ecx]
// 007ca645  80785900             cmp byte ptr [eax + 0x59], 0
// 007ca649  750f                 jne 0x7ca65a
// 007ca64b  eb03                 jmp 0x7ca650
// 007ca64d  8d4900               lea ecx, [ecx]
// 007ca650  8bc8                 mov ecx, eax
// 007ca652  8b01                 mov eax, dword ptr [ecx]
// 007ca654  80785900             cmp byte ptr [eax + 0x59], 0
// 007ca658  74f6                 je 0x7ca650
// 007ca65a  894c2410             mov dword ptr [esp + 0x10], ecx
// 007ca65e  eb28                 jmp 0x7ca688
// 007ca660  8b4104               mov eax, dword ptr [ecx + 4]
// 007ca663  80785900             cmp byte ptr [eax + 0x59], 0
// 007ca667  751b                 jne 0x7ca684
// 007ca669  8da42400000000       lea esp, [esp]
// 007ca670  3b4808               cmp ecx, dword ptr [eax + 8]
// 007ca673  750f                 jne 0x7ca684
// 007ca675  8bc8                 mov ecx, eax
// 007ca677  894c2410             mov dword ptr [esp + 0x10], ecx
// 007ca67b  8b4004               mov eax, dword ptr [eax + 4]
// 007ca67e  80785900             cmp byte ptr [eax + 0x59], 0
// 007ca682  74ec                 je 0x7ca670
// 007ca684  89442410             mov dword ptr [esp + 0x10], eax
// 007ca688  52                   push edx
// 007ca689  8d442408             lea eax, [esp + 8]
// 007ca68d  50                   push eax
// 007ca68e  8bce                 mov ecx, esi
// 007ca690  e8dbe6ffff           call 0x7c8d70
// 007ca695  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ca699  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007ca69d  7591                 jne 0x7ca630
// 007ca69f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ca6a3  8908                 mov dword ptr [eax], ecx
// 007ca6a5  5e                   pop esi
// 007ca6a6  59                   pop ecx
// 007ca6a7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
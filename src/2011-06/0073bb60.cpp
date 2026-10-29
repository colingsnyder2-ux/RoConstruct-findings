// roc 2011-06 0073bb60  unit: RBX::VGuiService::?$BoundFuncDesc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073bb60
//
// 0073bb60  51                   push ecx
// 0073bb61  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073bb65  56                   push esi
// 0073bb66  8bf1                 mov esi, ecx
// 0073bb68  8b4604               mov eax, dword ptr [esi + 4]
// 0073bb6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073bb6f  3b08                 cmp ecx, dword ptr [eax]
// 0073bb71  7537                 jne 0x73bbaa
// 0073bb73  3bd0                 cmp edx, eax
// 0073bb75  7533                 jne 0x73bbaa
// 0073bb77  8b4004               mov eax, dword ptr [eax + 4]
// 0073bb7a  50                   push eax
// 0073bb7b  8bce                 mov ecx, esi
// 0073bb7d  e80ee4ffff           call 0x739f90
// 0073bb82  8b4604               mov eax, dword ptr [esi + 4]
// 0073bb85  894004               mov dword ptr [eax + 4], eax
// 0073bb88  8b4604               mov eax, dword ptr [esi + 4]
// 0073bb8b  c7460800000000       mov dword ptr [esi + 8], 0
// 0073bb92  8900                 mov dword ptr [eax], eax
// 0073bb94  8b4604               mov eax, dword ptr [esi + 4]
// 0073bb97  894008               mov dword ptr [eax + 8], eax
// 0073bb9a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073bb9d  8b11                 mov edx, dword ptr [ecx]
// 0073bb9f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073bba3  8910                 mov dword ptr [eax], edx
// 0073bba5  5e                   pop esi
// 0073bba6  59                   pop ecx
// 0073bba7  c20c00               ret 0xc
// 0073bbaa  3bca                 cmp ecx, edx
// 0073bbac  7471                 je 0x73bc1f
// 0073bbae  8bff                 mov edi, edi
// 0073bbb0  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0073bbb4  8bd1                 mov edx, ecx
// 0073bbb6  7550                 jne 0x73bc08
// 0073bbb8  8b4108               mov eax, dword ptr [ecx + 8]
// 0073bbbb  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0073bbbf  751f                 jne 0x73bbe0
// 0073bbc1  8bc8                 mov ecx, eax
// 0073bbc3  8b01                 mov eax, dword ptr [ecx]
// 0073bbc5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0073bbc9  750f                 jne 0x73bbda
// 0073bbcb  eb03                 jmp 0x73bbd0
// 0073bbcd  8d4900               lea ecx, [ecx]
// 0073bbd0  8bc8                 mov ecx, eax
// 0073bbd2  8b01                 mov eax, dword ptr [ecx]
// 0073bbd4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0073bbd8  74f6                 je 0x73bbd0
// 0073bbda  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073bbde  eb28                 jmp 0x73bc08
// 0073bbe0  8b4104               mov eax, dword ptr [ecx + 4]
// 0073bbe3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0073bbe7  751b                 jne 0x73bc04
// 0073bbe9  8da42400000000       lea esp, [esp]
// 0073bbf0  3b4808               cmp ecx, dword ptr [eax + 8]
// 0073bbf3  750f                 jne 0x73bc04
// 0073bbf5  8bc8                 mov ecx, eax
// 0073bbf7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073bbfb  8b4004               mov eax, dword ptr [eax + 4]
// 0073bbfe  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0073bc02  74ec                 je 0x73bbf0
// 0073bc04  89442410             mov dword ptr [esp + 0x10], eax
// 0073bc08  52                   push edx
// 0073bc09  8d442408             lea eax, [esp + 8]
// 0073bc0d  50                   push eax
// 0073bc0e  8bce                 mov ecx, esi
// 0073bc10  e8abe0ffff           call 0x739cc0
// 0073bc15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073bc19  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0073bc1d  7591                 jne 0x73bbb0
// 0073bc1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073bc23  8908                 mov dword ptr [eax], ecx
// 0073bc25  5e                   pop esi
// 0073bc26  59                   pop ecx
// 0073bc27  c20c00               ret 0xc
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
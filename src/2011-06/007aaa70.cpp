// roc 2011-06 007aaa70  unit: RBX::CornerWedgePoly  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007aaa70
//
// 007aaa70  51                   push ecx
// 007aaa71  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aaa75  56                   push esi
// 007aaa76  8bf1                 mov esi, ecx
// 007aaa78  8b4604               mov eax, dword ptr [esi + 4]
// 007aaa7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007aaa7f  3b08                 cmp ecx, dword ptr [eax]
// 007aaa81  7537                 jne 0x7aaaba
// 007aaa83  3bd0                 cmp edx, eax
// 007aaa85  7533                 jne 0x7aaaba
// 007aaa87  8b4004               mov eax, dword ptr [eax + 4]
// 007aaa8a  50                   push eax
// 007aaa8b  8bce                 mov ecx, esi
// 007aaa8d  e88ee5ffff           call 0x7a9020
// 007aaa92  8b4604               mov eax, dword ptr [esi + 4]
// 007aaa95  894004               mov dword ptr [eax + 4], eax
// 007aaa98  8b4604               mov eax, dword ptr [esi + 4]
// 007aaa9b  c7460800000000       mov dword ptr [esi + 8], 0
// 007aaaa2  8900                 mov dword ptr [eax], eax
// 007aaaa4  8b4604               mov eax, dword ptr [esi + 4]
// 007aaaa7  894008               mov dword ptr [eax + 8], eax
// 007aaaaa  8b4e04               mov ecx, dword ptr [esi + 4]
// 007aaaad  8b11                 mov edx, dword ptr [ecx]
// 007aaaaf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007aaab3  8910                 mov dword ptr [eax], edx
// 007aaab5  5e                   pop esi
// 007aaab6  59                   pop ecx
// 007aaab7  c20c00               ret 0xc
// 007aaaba  3bca                 cmp ecx, edx
// 007aaabc  7471                 je 0x7aab2f
// 007aaabe  8bff                 mov edi, edi
// 007aaac0  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 007aaac4  8bd1                 mov edx, ecx
// 007aaac6  7550                 jne 0x7aab18
// 007aaac8  8b4108               mov eax, dword ptr [ecx + 8]
// 007aaacb  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aaacf  751f                 jne 0x7aaaf0
// 007aaad1  8bc8                 mov ecx, eax
// 007aaad3  8b01                 mov eax, dword ptr [ecx]
// 007aaad5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aaad9  750f                 jne 0x7aaaea
// 007aaadb  eb03                 jmp 0x7aaae0
// 007aaadd  8d4900               lea ecx, [ecx]
// 007aaae0  8bc8                 mov ecx, eax
// 007aaae2  8b01                 mov eax, dword ptr [ecx]
// 007aaae4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aaae8  74f6                 je 0x7aaae0
// 007aaaea  894c2410             mov dword ptr [esp + 0x10], ecx
// 007aaaee  eb28                 jmp 0x7aab18
// 007aaaf0  8b4104               mov eax, dword ptr [ecx + 4]
// 007aaaf3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aaaf7  751b                 jne 0x7aab14
// 007aaaf9  8da42400000000       lea esp, [esp]
// 007aab00  3b4808               cmp ecx, dword ptr [eax + 8]
// 007aab03  750f                 jne 0x7aab14
// 007aab05  8bc8                 mov ecx, eax
// 007aab07  894c2410             mov dword ptr [esp + 0x10], ecx
// 007aab0b  8b4004               mov eax, dword ptr [eax + 4]
// 007aab0e  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aab12  74ec                 je 0x7aab00
// 007aab14  89442410             mov dword ptr [esp + 0x10], eax
// 007aab18  52                   push edx
// 007aab19  8d442408             lea eax, [esp + 8]
// 007aab1d  50                   push eax
// 007aab1e  8bce                 mov ecx, esi
// 007aab20  e87bfcffff           call 0x7aa7a0
// 007aab25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007aab29  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007aab2d  7591                 jne 0x7aaac0
// 007aab2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007aab33  8908                 mov dword ptr [eax], ecx
// 007aab35  5e                   pop esi
// 007aab36  59                   pop ecx
// 007aab37  c20c00               ret 0xc
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
// roc 2011-06 007d2820  unit: RBX::ScoreHud  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d2820
//
// 007d2820  51                   push ecx
// 007d2821  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d2825  56                   push esi
// 007d2826  8bf1                 mov esi, ecx
// 007d2828  8b4604               mov eax, dword ptr [esi + 4]
// 007d282b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d282f  3b08                 cmp ecx, dword ptr [eax]
// 007d2831  7537                 jne 0x7d286a
// 007d2833  3bd0                 cmp edx, eax
// 007d2835  7533                 jne 0x7d286a
// 007d2837  8b4004               mov eax, dword ptr [eax + 4]
// 007d283a  50                   push eax
// 007d283b  8bce                 mov ecx, esi
// 007d283d  e8bef4ffff           call 0x7d1d00
// 007d2842  8b4604               mov eax, dword ptr [esi + 4]
// 007d2845  894004               mov dword ptr [eax + 4], eax
// 007d2848  8b4604               mov eax, dword ptr [esi + 4]
// 007d284b  c7460800000000       mov dword ptr [esi + 8], 0
// 007d2852  8900                 mov dword ptr [eax], eax
// 007d2854  8b4604               mov eax, dword ptr [esi + 4]
// 007d2857  894008               mov dword ptr [eax + 8], eax
// 007d285a  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d285d  8b11                 mov edx, dword ptr [ecx]
// 007d285f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d2863  8910                 mov dword ptr [eax], edx
// 007d2865  5e                   pop esi
// 007d2866  59                   pop ecx
// 007d2867  c20c00               ret 0xc
// 007d286a  3bca                 cmp ecx, edx
// 007d286c  7471                 je 0x7d28df
// 007d286e  8bff                 mov edi, edi
// 007d2870  80792100             cmp byte ptr [ecx + 0x21], 0
// 007d2874  8bd1                 mov edx, ecx
// 007d2876  7550                 jne 0x7d28c8
// 007d2878  8b4108               mov eax, dword ptr [ecx + 8]
// 007d287b  80782100             cmp byte ptr [eax + 0x21], 0
// 007d287f  751f                 jne 0x7d28a0
// 007d2881  8bc8                 mov ecx, eax
// 007d2883  8b01                 mov eax, dword ptr [ecx]
// 007d2885  80782100             cmp byte ptr [eax + 0x21], 0
// 007d2889  750f                 jne 0x7d289a
// 007d288b  eb03                 jmp 0x7d2890
// 007d288d  8d4900               lea ecx, [ecx]
// 007d2890  8bc8                 mov ecx, eax
// 007d2892  8b01                 mov eax, dword ptr [ecx]
// 007d2894  80782100             cmp byte ptr [eax + 0x21], 0
// 007d2898  74f6                 je 0x7d2890
// 007d289a  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d289e  eb28                 jmp 0x7d28c8
// 007d28a0  8b4104               mov eax, dword ptr [ecx + 4]
// 007d28a3  80782100             cmp byte ptr [eax + 0x21], 0
// 007d28a7  751b                 jne 0x7d28c4
// 007d28a9  8da42400000000       lea esp, [esp]
// 007d28b0  3b4808               cmp ecx, dword ptr [eax + 8]
// 007d28b3  750f                 jne 0x7d28c4
// 007d28b5  8bc8                 mov ecx, eax
// 007d28b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d28bb  8b4004               mov eax, dword ptr [eax + 4]
// 007d28be  80782100             cmp byte ptr [eax + 0x21], 0
// 007d28c2  74ec                 je 0x7d28b0
// 007d28c4  89442410             mov dword ptr [esp + 0x10], eax
// 007d28c8  52                   push edx
// 007d28c9  8d442408             lea eax, [esp + 8]
// 007d28cd  50                   push eax
// 007d28ce  8bce                 mov ecx, esi
// 007d28d0  e8ebefffff           call 0x7d18c0
// 007d28d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d28d9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007d28dd  7591                 jne 0x7d2870
// 007d28df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d28e3  8908                 mov dword ptr [eax], ecx
// 007d28e5  5e                   pop esi
// 007d28e6  59                   pop ecx
// 007d28e7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
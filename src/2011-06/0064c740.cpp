// roc 2011-06 0064c740  unit: RBX::GameBasicSettings  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c740
//
// 0064c740  51                   push ecx
// 0064c741  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064c745  56                   push esi
// 0064c746  8bf1                 mov esi, ecx
// 0064c748  8b4604               mov eax, dword ptr [esi + 4]
// 0064c74b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064c74f  3b08                 cmp ecx, dword ptr [eax]
// 0064c751  7537                 jne 0x64c78a
// 0064c753  3bd0                 cmp edx, eax
// 0064c755  7533                 jne 0x64c78a
// 0064c757  8b4004               mov eax, dword ptr [eax + 4]
// 0064c75a  50                   push eax
// 0064c75b  8bce                 mov ecx, esi
// 0064c75d  e85ef7ffff           call 0x64bec0
// 0064c762  8b4604               mov eax, dword ptr [esi + 4]
// 0064c765  894004               mov dword ptr [eax + 4], eax
// 0064c768  8b4604               mov eax, dword ptr [esi + 4]
// 0064c76b  c7460800000000       mov dword ptr [esi + 8], 0
// 0064c772  8900                 mov dword ptr [eax], eax
// 0064c774  8b4604               mov eax, dword ptr [esi + 4]
// 0064c777  894008               mov dword ptr [eax + 8], eax
// 0064c77a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c77d  8b11                 mov edx, dword ptr [ecx]
// 0064c77f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064c783  8910                 mov dword ptr [eax], edx
// 0064c785  5e                   pop esi
// 0064c786  59                   pop ecx
// 0064c787  c20c00               ret 0xc
// 0064c78a  3bca                 cmp ecx, edx
// 0064c78c  7471                 je 0x64c7ff
// 0064c78e  8bff                 mov edi, edi
// 0064c790  80792100             cmp byte ptr [ecx + 0x21], 0
// 0064c794  8bd1                 mov edx, ecx
// 0064c796  7550                 jne 0x64c7e8
// 0064c798  8b4108               mov eax, dword ptr [ecx + 8]
// 0064c79b  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c79f  751f                 jne 0x64c7c0
// 0064c7a1  8bc8                 mov ecx, eax
// 0064c7a3  8b01                 mov eax, dword ptr [ecx]
// 0064c7a5  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c7a9  750f                 jne 0x64c7ba
// 0064c7ab  eb03                 jmp 0x64c7b0
// 0064c7ad  8d4900               lea ecx, [ecx]
// 0064c7b0  8bc8                 mov ecx, eax
// 0064c7b2  8b01                 mov eax, dword ptr [ecx]
// 0064c7b4  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c7b8  74f6                 je 0x64c7b0
// 0064c7ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 0064c7be  eb28                 jmp 0x64c7e8
// 0064c7c0  8b4104               mov eax, dword ptr [ecx + 4]
// 0064c7c3  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c7c7  751b                 jne 0x64c7e4
// 0064c7c9  8da42400000000       lea esp, [esp]
// 0064c7d0  3b4808               cmp ecx, dword ptr [eax + 8]
// 0064c7d3  750f                 jne 0x64c7e4
// 0064c7d5  8bc8                 mov ecx, eax
// 0064c7d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0064c7db  8b4004               mov eax, dword ptr [eax + 4]
// 0064c7de  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c7e2  74ec                 je 0x64c7d0
// 0064c7e4  89442410             mov dword ptr [esp + 0x10], eax
// 0064c7e8  52                   push edx
// 0064c7e9  8d442408             lea eax, [esp + 8]
// 0064c7ed  50                   push eax
// 0064c7ee  8bce                 mov ecx, esi
// 0064c7f0  e8bbf3ffff           call 0x64bbb0
// 0064c7f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064c7f9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0064c7fd  7591                 jne 0x64c790
// 0064c7ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064c803  8908                 mov dword ptr [eax], ecx
// 0064c805  5e                   pop esi
// 0064c806  59                   pop ecx
// 0064c807  c20c00               ret 0xc
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
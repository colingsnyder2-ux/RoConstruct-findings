// roc 2011-06 0044ecd0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044ecd0
//
// 0044ecd0  51                   push ecx
// 0044ecd1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ecd5  56                   push esi
// 0044ecd6  8bf1                 mov esi, ecx
// 0044ecd8  8b4604               mov eax, dword ptr [esi + 4]
// 0044ecdb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044ecdf  3b08                 cmp ecx, dword ptr [eax]
// 0044ece1  7537                 jne 0x44ed1a
// 0044ece3  3bd0                 cmp edx, eax
// 0044ece5  7533                 jne 0x44ed1a
// 0044ece7  8b4004               mov eax, dword ptr [eax + 4]
// 0044ecea  50                   push eax
// 0044eceb  8bce                 mov ecx, esi
// 0044eced  e84ef8ffff           call 0x44e540
// 0044ecf2  8b4604               mov eax, dword ptr [esi + 4]
// 0044ecf5  894004               mov dword ptr [eax + 4], eax
// 0044ecf8  8b4604               mov eax, dword ptr [esi + 4]
// 0044ecfb  c7460800000000       mov dword ptr [esi + 8], 0
// 0044ed02  8900                 mov dword ptr [eax], eax
// 0044ed04  8b4604               mov eax, dword ptr [esi + 4]
// 0044ed07  894008               mov dword ptr [eax + 8], eax
// 0044ed0a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044ed0d  8b11                 mov edx, dword ptr [ecx]
// 0044ed0f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044ed13  8910                 mov dword ptr [eax], edx
// 0044ed15  5e                   pop esi
// 0044ed16  59                   pop ecx
// 0044ed17  c20c00               ret 0xc
// 0044ed1a  3bca                 cmp ecx, edx
// 0044ed1c  7471                 je 0x44ed8f
// 0044ed1e  8bff                 mov edi, edi
// 0044ed20  80792100             cmp byte ptr [ecx + 0x21], 0
// 0044ed24  8bd1                 mov edx, ecx
// 0044ed26  7550                 jne 0x44ed78
// 0044ed28  8b4108               mov eax, dword ptr [ecx + 8]
// 0044ed2b  80782100             cmp byte ptr [eax + 0x21], 0
// 0044ed2f  751f                 jne 0x44ed50
// 0044ed31  8bc8                 mov ecx, eax
// 0044ed33  8b01                 mov eax, dword ptr [ecx]
// 0044ed35  80782100             cmp byte ptr [eax + 0x21], 0
// 0044ed39  750f                 jne 0x44ed4a
// 0044ed3b  eb03                 jmp 0x44ed40
// 0044ed3d  8d4900               lea ecx, [ecx]
// 0044ed40  8bc8                 mov ecx, eax
// 0044ed42  8b01                 mov eax, dword ptr [ecx]
// 0044ed44  80782100             cmp byte ptr [eax + 0x21], 0
// 0044ed48  74f6                 je 0x44ed40
// 0044ed4a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044ed4e  eb28                 jmp 0x44ed78
// 0044ed50  8b4104               mov eax, dword ptr [ecx + 4]
// 0044ed53  80782100             cmp byte ptr [eax + 0x21], 0
// 0044ed57  751b                 jne 0x44ed74
// 0044ed59  8da42400000000       lea esp, [esp]
// 0044ed60  3b4808               cmp ecx, dword ptr [eax + 8]
// 0044ed63  750f                 jne 0x44ed74
// 0044ed65  8bc8                 mov ecx, eax
// 0044ed67  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044ed6b  8b4004               mov eax, dword ptr [eax + 4]
// 0044ed6e  80782100             cmp byte ptr [eax + 0x21], 0
// 0044ed72  74ec                 je 0x44ed60
// 0044ed74  89442410             mov dword ptr [esp + 0x10], eax
// 0044ed78  52                   push edx
// 0044ed79  8d442408             lea eax, [esp + 8]
// 0044ed7d  50                   push eax
// 0044ed7e  8bce                 mov ecx, esi
// 0044ed80  e84bf3ffff           call 0x44e0d0
// 0044ed85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044ed89  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0044ed8d  7591                 jne 0x44ed20
// 0044ed8f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044ed93  8908                 mov dword ptr [eax], ecx
// 0044ed95  5e                   pop esi
// 0044ed96  59                   pop ecx
// 0044ed97  c20c00               ret 0xc
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
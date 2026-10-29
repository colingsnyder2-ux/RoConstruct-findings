// roc 2011-06 0078e090  unit: RBX::UniversalTool  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078e090
//
// 0078e090  51                   push ecx
// 0078e091  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078e095  56                   push esi
// 0078e096  8bf1                 mov esi, ecx
// 0078e098  8b4604               mov eax, dword ptr [esi + 4]
// 0078e09b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078e09f  3b08                 cmp ecx, dword ptr [eax]
// 0078e0a1  7537                 jne 0x78e0da
// 0078e0a3  3bd0                 cmp edx, eax
// 0078e0a5  7533                 jne 0x78e0da
// 0078e0a7  8b4004               mov eax, dword ptr [eax + 4]
// 0078e0aa  50                   push eax
// 0078e0ab  8bce                 mov ecx, esi
// 0078e0ad  e83efdffff           call 0x78ddf0
// 0078e0b2  8b4604               mov eax, dword ptr [esi + 4]
// 0078e0b5  894004               mov dword ptr [eax + 4], eax
// 0078e0b8  8b4604               mov eax, dword ptr [esi + 4]
// 0078e0bb  c7460800000000       mov dword ptr [esi + 8], 0
// 0078e0c2  8900                 mov dword ptr [eax], eax
// 0078e0c4  8b4604               mov eax, dword ptr [esi + 4]
// 0078e0c7  894008               mov dword ptr [eax + 8], eax
// 0078e0ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 0078e0cd  8b11                 mov edx, dword ptr [ecx]
// 0078e0cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078e0d3  8910                 mov dword ptr [eax], edx
// 0078e0d5  5e                   pop esi
// 0078e0d6  59                   pop ecx
// 0078e0d7  c20c00               ret 0xc
// 0078e0da  3bca                 cmp ecx, edx
// 0078e0dc  7471                 je 0x78e14f
// 0078e0de  8bff                 mov edi, edi
// 0078e0e0  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0078e0e4  8bd1                 mov edx, ecx
// 0078e0e6  7550                 jne 0x78e138
// 0078e0e8  8b4108               mov eax, dword ptr [ecx + 8]
// 0078e0eb  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0078e0ef  751f                 jne 0x78e110
// 0078e0f1  8bc8                 mov ecx, eax
// 0078e0f3  8b01                 mov eax, dword ptr [ecx]
// 0078e0f5  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0078e0f9  750f                 jne 0x78e10a
// 0078e0fb  eb03                 jmp 0x78e100
// 0078e0fd  8d4900               lea ecx, [ecx]
// 0078e100  8bc8                 mov ecx, eax
// 0078e102  8b01                 mov eax, dword ptr [ecx]
// 0078e104  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0078e108  74f6                 je 0x78e100
// 0078e10a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078e10e  eb28                 jmp 0x78e138
// 0078e110  8b4104               mov eax, dword ptr [ecx + 4]
// 0078e113  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0078e117  751b                 jne 0x78e134
// 0078e119  8da42400000000       lea esp, [esp]
// 0078e120  3b4808               cmp ecx, dword ptr [eax + 8]
// 0078e123  750f                 jne 0x78e134
// 0078e125  8bc8                 mov ecx, eax
// 0078e127  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078e12b  8b4004               mov eax, dword ptr [eax + 4]
// 0078e12e  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0078e132  74ec                 je 0x78e120
// 0078e134  89442410             mov dword ptr [esp + 0x10], eax
// 0078e138  52                   push edx
// 0078e139  8d442408             lea eax, [esp + 8]
// 0078e13d  50                   push eax
// 0078e13e  8bce                 mov ecx, esi
// 0078e140  e8dbf9ffff           call 0x78db20
// 0078e145  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078e149  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0078e14d  7591                 jne 0x78e0e0
// 0078e14f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078e153  8908                 mov dword ptr [eax], ecx
// 0078e155  5e                   pop esi
// 0078e156  59                   pop ecx
// 0078e157  c20c00               ret 0xc
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
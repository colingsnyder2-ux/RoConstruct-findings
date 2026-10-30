// roc 2011-06 0093bfa0  unit: Ogre::RbxTextureCompositorSceneManager  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093bfa0
//
// 0093bfa0  51                   push ecx
// 0093bfa1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093bfa5  56                   push esi
// 0093bfa6  8bf1                 mov esi, ecx
// 0093bfa8  8b4604               mov eax, dword ptr [esi + 4]
// 0093bfab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0093bfaf  3b08                 cmp ecx, dword ptr [eax]
// 0093bfb1  7537                 jne 0x93bfea
// 0093bfb3  3bd0                 cmp edx, eax
// 0093bfb5  7533                 jne 0x93bfea
// 0093bfb7  8b4004               mov eax, dword ptr [eax + 4]
// 0093bfba  50                   push eax
// 0093bfbb  8bce                 mov ecx, esi
// 0093bfbd  e83ef4ffff           call 0x93b400
// 0093bfc2  8b4604               mov eax, dword ptr [esi + 4]
// 0093bfc5  894004               mov dword ptr [eax + 4], eax
// 0093bfc8  8b4604               mov eax, dword ptr [esi + 4]
// 0093bfcb  c7460800000000       mov dword ptr [esi + 8], 0
// 0093bfd2  8900                 mov dword ptr [eax], eax
// 0093bfd4  8b4604               mov eax, dword ptr [esi + 4]
// 0093bfd7  894008               mov dword ptr [eax + 8], eax
// 0093bfda  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093bfdd  8b11                 mov edx, dword ptr [ecx]
// 0093bfdf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093bfe3  8910                 mov dword ptr [eax], edx
// 0093bfe5  5e                   pop esi
// 0093bfe6  59                   pop ecx
// 0093bfe7  c20c00               ret 0xc
// 0093bfea  3bca                 cmp ecx, edx
// 0093bfec  7471                 je 0x93c05f
// 0093bfee  8bff                 mov edi, edi
// 0093bff0  80796900             cmp byte ptr [ecx + 0x69], 0
// 0093bff4  8bd1                 mov edx, ecx
// 0093bff6  7550                 jne 0x93c048
// 0093bff8  8b4108               mov eax, dword ptr [ecx + 8]
// 0093bffb  80786900             cmp byte ptr [eax + 0x69], 0
// 0093bfff  751f                 jne 0x93c020
// 0093c001  8bc8                 mov ecx, eax
// 0093c003  8b01                 mov eax, dword ptr [ecx]
// 0093c005  80786900             cmp byte ptr [eax + 0x69], 0
// 0093c009  750f                 jne 0x93c01a
// 0093c00b  eb03                 jmp 0x93c010
// 0093c00d  8d4900               lea ecx, [ecx]
// 0093c010  8bc8                 mov ecx, eax
// 0093c012  8b01                 mov eax, dword ptr [ecx]
// 0093c014  80786900             cmp byte ptr [eax + 0x69], 0
// 0093c018  74f6                 je 0x93c010
// 0093c01a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0093c01e  eb28                 jmp 0x93c048
// 0093c020  8b4104               mov eax, dword ptr [ecx + 4]
// 0093c023  80786900             cmp byte ptr [eax + 0x69], 0
// 0093c027  751b                 jne 0x93c044
// 0093c029  8da42400000000       lea esp, [esp]
// 0093c030  3b4808               cmp ecx, dword ptr [eax + 8]
// 0093c033  750f                 jne 0x93c044
// 0093c035  8bc8                 mov ecx, eax
// 0093c037  894c2410             mov dword ptr [esp + 0x10], ecx
// 0093c03b  8b4004               mov eax, dword ptr [eax + 4]
// 0093c03e  80786900             cmp byte ptr [eax + 0x69], 0
// 0093c042  74ec                 je 0x93c030
// 0093c044  89442410             mov dword ptr [esp + 0x10], eax
// 0093c048  52                   push edx
// 0093c049  8d442408             lea eax, [esp + 8]
// 0093c04d  50                   push eax
// 0093c04e  8bce                 mov ecx, esi
// 0093c050  e8bbf0ffff           call 0x93b110
// 0093c055  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0093c059  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0093c05d  7591                 jne 0x93bff0
// 0093c05f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093c063  8908                 mov dword ptr [eax], ecx
// 0093c065  5e                   pop esi
// 0093c066  59                   pop ecx
// 0093c067  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;
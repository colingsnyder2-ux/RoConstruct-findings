// roc 2011-06 00802be0  unit: boost::iostreams::zlib_error  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00802be0
//
// 00802be0  51                   push ecx
// 00802be1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00802be5  56                   push esi
// 00802be6  8bf1                 mov esi, ecx
// 00802be8  8b4604               mov eax, dword ptr [esi + 4]
// 00802beb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00802bef  3b08                 cmp ecx, dword ptr [eax]
// 00802bf1  7537                 jne 0x802c2a
// 00802bf3  3bd0                 cmp edx, eax
// 00802bf5  7533                 jne 0x802c2a
// 00802bf7  8b4004               mov eax, dword ptr [eax + 4]
// 00802bfa  50                   push eax
// 00802bfb  8bce                 mov ecx, esi
// 00802bfd  e80eecc1ff           call 0x421810
// 00802c02  8b4604               mov eax, dword ptr [esi + 4]
// 00802c05  894004               mov dword ptr [eax + 4], eax
// 00802c08  8b4604               mov eax, dword ptr [esi + 4]
// 00802c0b  c7460800000000       mov dword ptr [esi + 8], 0
// 00802c12  8900                 mov dword ptr [eax], eax
// 00802c14  8b4604               mov eax, dword ptr [esi + 4]
// 00802c17  894008               mov dword ptr [eax + 8], eax
// 00802c1a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00802c1d  8b11                 mov edx, dword ptr [ecx]
// 00802c1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00802c23  8910                 mov dword ptr [eax], edx
// 00802c25  5e                   pop esi
// 00802c26  59                   pop ecx
// 00802c27  c20c00               ret 0xc
// 00802c2a  3bca                 cmp ecx, edx
// 00802c2c  7471                 je 0x802c9f
// 00802c2e  8bff                 mov edi, edi
// 00802c30  80791500             cmp byte ptr [ecx + 0x15], 0
// 00802c34  8bd1                 mov edx, ecx
// 00802c36  7550                 jne 0x802c88
// 00802c38  8b4108               mov eax, dword ptr [ecx + 8]
// 00802c3b  80781500             cmp byte ptr [eax + 0x15], 0
// 00802c3f  751f                 jne 0x802c60
// 00802c41  8bc8                 mov ecx, eax
// 00802c43  8b01                 mov eax, dword ptr [ecx]
// 00802c45  80781500             cmp byte ptr [eax + 0x15], 0
// 00802c49  750f                 jne 0x802c5a
// 00802c4b  eb03                 jmp 0x802c50
// 00802c4d  8d4900               lea ecx, [ecx]
// 00802c50  8bc8                 mov ecx, eax
// 00802c52  8b01                 mov eax, dword ptr [ecx]
// 00802c54  80781500             cmp byte ptr [eax + 0x15], 0
// 00802c58  74f6                 je 0x802c50
// 00802c5a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00802c5e  eb28                 jmp 0x802c88
// 00802c60  8b4104               mov eax, dword ptr [ecx + 4]
// 00802c63  80781500             cmp byte ptr [eax + 0x15], 0
// 00802c67  751b                 jne 0x802c84
// 00802c69  8da42400000000       lea esp, [esp]
// 00802c70  3b4808               cmp ecx, dword ptr [eax + 8]
// 00802c73  750f                 jne 0x802c84
// 00802c75  8bc8                 mov ecx, eax
// 00802c77  894c2410             mov dword ptr [esp + 0x10], ecx
// 00802c7b  8b4004               mov eax, dword ptr [eax + 4]
// 00802c7e  80781500             cmp byte ptr [eax + 0x15], 0
// 00802c82  74ec                 je 0x802c70
// 00802c84  89442410             mov dword ptr [esp + 0x10], eax
// 00802c88  52                   push edx
// 00802c89  8d442408             lea eax, [esp + 8]
// 00802c8d  50                   push eax
// 00802c8e  8bce                 mov ecx, esi
// 00802c90  e88bfcffff           call 0x802920
// 00802c95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00802c99  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00802c9d  7591                 jne 0x802c30
// 00802c9f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00802ca3  8908                 mov dword ptr [eax], ecx
// 00802ca5  5e                   pop esi
// 00802ca6  59                   pop ecx
// 00802ca7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
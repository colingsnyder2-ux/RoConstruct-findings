// roc 2011-06 00401ae0  unit: CAboutRobloxDialog  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401ae0
//
// 00401ae0  51                   push ecx
// 00401ae1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00401ae5  56                   push esi
// 00401ae6  8bf1                 mov esi, ecx
// 00401ae8  8b4604               mov eax, dword ptr [esi + 4]
// 00401aeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00401aef  3b08                 cmp ecx, dword ptr [eax]
// 00401af1  7537                 jne 0x401b2a
// 00401af3  3bd0                 cmp edx, eax
// 00401af5  7533                 jne 0x401b2a
// 00401af7  8b4004               mov eax, dword ptr [eax + 4]
// 00401afa  50                   push eax
// 00401afb  8bce                 mov ecx, esi
// 00401afd  e80efd0100           call 0x421810
// 00401b02  8b4604               mov eax, dword ptr [esi + 4]
// 00401b05  894004               mov dword ptr [eax + 4], eax
// 00401b08  8b4604               mov eax, dword ptr [esi + 4]
// 00401b0b  c7460800000000       mov dword ptr [esi + 8], 0
// 00401b12  8900                 mov dword ptr [eax], eax
// 00401b14  8b4604               mov eax, dword ptr [esi + 4]
// 00401b17  894008               mov dword ptr [eax + 8], eax
// 00401b1a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00401b1d  8b11                 mov edx, dword ptr [ecx]
// 00401b1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00401b23  8910                 mov dword ptr [eax], edx
// 00401b25  5e                   pop esi
// 00401b26  59                   pop ecx
// 00401b27  c20c00               ret 0xc
// 00401b2a  3bca                 cmp ecx, edx
// 00401b2c  7471                 je 0x401b9f
// 00401b2e  8bff                 mov edi, edi
// 00401b30  80791500             cmp byte ptr [ecx + 0x15], 0
// 00401b34  8bd1                 mov edx, ecx
// 00401b36  7550                 jne 0x401b88
// 00401b38  8b4108               mov eax, dword ptr [ecx + 8]
// 00401b3b  80781500             cmp byte ptr [eax + 0x15], 0
// 00401b3f  751f                 jne 0x401b60
// 00401b41  8bc8                 mov ecx, eax
// 00401b43  8b01                 mov eax, dword ptr [ecx]
// 00401b45  80781500             cmp byte ptr [eax + 0x15], 0
// 00401b49  750f                 jne 0x401b5a
// 00401b4b  eb03                 jmp 0x401b50
// 00401b4d  8d4900               lea ecx, [ecx]
// 00401b50  8bc8                 mov ecx, eax
// 00401b52  8b01                 mov eax, dword ptr [ecx]
// 00401b54  80781500             cmp byte ptr [eax + 0x15], 0
// 00401b58  74f6                 je 0x401b50
// 00401b5a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00401b5e  eb28                 jmp 0x401b88
// 00401b60  8b4104               mov eax, dword ptr [ecx + 4]
// 00401b63  80781500             cmp byte ptr [eax + 0x15], 0
// 00401b67  751b                 jne 0x401b84
// 00401b69  8da42400000000       lea esp, [esp]
// 00401b70  3b4808               cmp ecx, dword ptr [eax + 8]
// 00401b73  750f                 jne 0x401b84
// 00401b75  8bc8                 mov ecx, eax
// 00401b77  894c2410             mov dword ptr [esp + 0x10], ecx
// 00401b7b  8b4004               mov eax, dword ptr [eax + 4]
// 00401b7e  80781500             cmp byte ptr [eax + 0x15], 0
// 00401b82  74ec                 je 0x401b70
// 00401b84  89442410             mov dword ptr [esp + 0x10], eax
// 00401b88  52                   push edx
// 00401b89  8d442408             lea eax, [esp + 8]
// 00401b8d  50                   push eax
// 00401b8e  8bce                 mov ecx, esi
// 00401b90  e8abfbffff           call 0x401740
// 00401b95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00401b99  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00401b9d  7591                 jne 0x401b30
// 00401b9f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00401ba3  8908                 mov dword ptr [eax], ecx
// 00401ba5  5e                   pop esi
// 00401ba6  59                   pop ecx
// 00401ba7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
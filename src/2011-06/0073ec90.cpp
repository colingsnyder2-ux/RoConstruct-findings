// roc 2011-06 0073ec90  unit: RBX::TweenService  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073ec90
//
// 0073ec90  51                   push ecx
// 0073ec91  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073ec95  56                   push esi
// 0073ec96  8bf1                 mov esi, ecx
// 0073ec98  8b4604               mov eax, dword ptr [esi + 4]
// 0073ec9b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073ec9f  3b08                 cmp ecx, dword ptr [eax]
// 0073eca1  7537                 jne 0x73ecda
// 0073eca3  3bd0                 cmp edx, eax
// 0073eca5  7533                 jne 0x73ecda
// 0073eca7  8b4004               mov eax, dword ptr [eax + 4]
// 0073ecaa  50                   push eax
// 0073ecab  8bce                 mov ecx, esi
// 0073ecad  e89ef9ffff           call 0x73e650
// 0073ecb2  8b4604               mov eax, dword ptr [esi + 4]
// 0073ecb5  894004               mov dword ptr [eax + 4], eax
// 0073ecb8  8b4604               mov eax, dword ptr [esi + 4]
// 0073ecbb  c7460800000000       mov dword ptr [esi + 8], 0
// 0073ecc2  8900                 mov dword ptr [eax], eax
// 0073ecc4  8b4604               mov eax, dword ptr [esi + 4]
// 0073ecc7  894008               mov dword ptr [eax + 8], eax
// 0073ecca  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073eccd  8b11                 mov edx, dword ptr [ecx]
// 0073eccf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073ecd3  8910                 mov dword ptr [eax], edx
// 0073ecd5  5e                   pop esi
// 0073ecd6  59                   pop ecx
// 0073ecd7  c20c00               ret 0xc
// 0073ecda  3bca                 cmp ecx, edx
// 0073ecdc  7471                 je 0x73ed4f
// 0073ecde  8bff                 mov edi, edi
// 0073ece0  80791500             cmp byte ptr [ecx + 0x15], 0
// 0073ece4  8bd1                 mov edx, ecx
// 0073ece6  7550                 jne 0x73ed38
// 0073ece8  8b4108               mov eax, dword ptr [ecx + 8]
// 0073eceb  80781500             cmp byte ptr [eax + 0x15], 0
// 0073ecef  751f                 jne 0x73ed10
// 0073ecf1  8bc8                 mov ecx, eax
// 0073ecf3  8b01                 mov eax, dword ptr [ecx]
// 0073ecf5  80781500             cmp byte ptr [eax + 0x15], 0
// 0073ecf9  750f                 jne 0x73ed0a
// 0073ecfb  eb03                 jmp 0x73ed00
// 0073ecfd  8d4900               lea ecx, [ecx]
// 0073ed00  8bc8                 mov ecx, eax
// 0073ed02  8b01                 mov eax, dword ptr [ecx]
// 0073ed04  80781500             cmp byte ptr [eax + 0x15], 0
// 0073ed08  74f6                 je 0x73ed00
// 0073ed0a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073ed0e  eb28                 jmp 0x73ed38
// 0073ed10  8b4104               mov eax, dword ptr [ecx + 4]
// 0073ed13  80781500             cmp byte ptr [eax + 0x15], 0
// 0073ed17  751b                 jne 0x73ed34
// 0073ed19  8da42400000000       lea esp, [esp]
// 0073ed20  3b4808               cmp ecx, dword ptr [eax + 8]
// 0073ed23  750f                 jne 0x73ed34
// 0073ed25  8bc8                 mov ecx, eax
// 0073ed27  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073ed2b  8b4004               mov eax, dword ptr [eax + 4]
// 0073ed2e  80781500             cmp byte ptr [eax + 0x15], 0
// 0073ed32  74ec                 je 0x73ed20
// 0073ed34  89442410             mov dword ptr [esp + 0x10], eax
// 0073ed38  52                   push edx
// 0073ed39  8d442408             lea eax, [esp + 8]
// 0073ed3d  50                   push eax
// 0073ed3e  8bce                 mov ecx, esi
// 0073ed40  e83bfaffff           call 0x73e780
// 0073ed45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073ed49  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0073ed4d  7591                 jne 0x73ece0
// 0073ed4f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073ed53  8908                 mov dword ptr [eax], ecx
// 0073ed55  5e                   pop esi
// 0073ed56  59                   pop ecx
// 0073ed57  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
// roc 2011-06 0044f090  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044f090
//
// 0044f090  51                   push ecx
// 0044f091  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044f095  56                   push esi
// 0044f096  8bf1                 mov esi, ecx
// 0044f098  8b4604               mov eax, dword ptr [esi + 4]
// 0044f09b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044f09f  3b08                 cmp ecx, dword ptr [eax]
// 0044f0a1  7537                 jne 0x44f0da
// 0044f0a3  3bd0                 cmp edx, eax
// 0044f0a5  7533                 jne 0x44f0da
// 0044f0a7  8b4004               mov eax, dword ptr [eax + 4]
// 0044f0aa  50                   push eax
// 0044f0ab  8bce                 mov ecx, esi
// 0044f0ad  e8cefaffff           call 0x44eb80
// 0044f0b2  8b4604               mov eax, dword ptr [esi + 4]
// 0044f0b5  894004               mov dword ptr [eax + 4], eax
// 0044f0b8  8b4604               mov eax, dword ptr [esi + 4]
// 0044f0bb  c7460800000000       mov dword ptr [esi + 8], 0
// 0044f0c2  8900                 mov dword ptr [eax], eax
// 0044f0c4  8b4604               mov eax, dword ptr [esi + 4]
// 0044f0c7  894008               mov dword ptr [eax + 8], eax
// 0044f0ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044f0cd  8b11                 mov edx, dword ptr [ecx]
// 0044f0cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f0d3  8910                 mov dword ptr [eax], edx
// 0044f0d5  5e                   pop esi
// 0044f0d6  59                   pop ecx
// 0044f0d7  c20c00               ret 0xc
// 0044f0da  3bca                 cmp ecx, edx
// 0044f0dc  7471                 je 0x44f14f
// 0044f0de  8bff                 mov edi, edi
// 0044f0e0  80791500             cmp byte ptr [ecx + 0x15], 0
// 0044f0e4  8bd1                 mov edx, ecx
// 0044f0e6  7550                 jne 0x44f138
// 0044f0e8  8b4108               mov eax, dword ptr [ecx + 8]
// 0044f0eb  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f0ef  751f                 jne 0x44f110
// 0044f0f1  8bc8                 mov ecx, eax
// 0044f0f3  8b01                 mov eax, dword ptr [ecx]
// 0044f0f5  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f0f9  750f                 jne 0x44f10a
// 0044f0fb  eb03                 jmp 0x44f100
// 0044f0fd  8d4900               lea ecx, [ecx]
// 0044f100  8bc8                 mov ecx, eax
// 0044f102  8b01                 mov eax, dword ptr [ecx]
// 0044f104  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f108  74f6                 je 0x44f100
// 0044f10a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044f10e  eb28                 jmp 0x44f138
// 0044f110  8b4104               mov eax, dword ptr [ecx + 4]
// 0044f113  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f117  751b                 jne 0x44f134
// 0044f119  8da42400000000       lea esp, [esp]
// 0044f120  3b4808               cmp ecx, dword ptr [eax + 8]
// 0044f123  750f                 jne 0x44f134
// 0044f125  8bc8                 mov ecx, eax
// 0044f127  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044f12b  8b4004               mov eax, dword ptr [eax + 4]
// 0044f12e  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f132  74ec                 je 0x44f120
// 0044f134  89442410             mov dword ptr [esp + 0x10], eax
// 0044f138  52                   push edx
// 0044f139  8d442408             lea eax, [esp + 8]
// 0044f13d  50                   push eax
// 0044f13e  8bce                 mov ecx, esi
// 0044f140  e86bf6ffff           call 0x44e7b0
// 0044f145  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044f149  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0044f14d  7591                 jne 0x44f0e0
// 0044f14f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f153  8908                 mov dword ptr [eax], ecx
// 0044f155  5e                   pop esi
// 0044f156  59                   pop ecx
// 0044f157  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;
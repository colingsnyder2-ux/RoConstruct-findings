// roc 2011-06 00490fc0  unit: CPropGrid::UpdateItemsJob  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00490fc0
//
// 00490fc0  51                   push ecx
// 00490fc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00490fc5  56                   push esi
// 00490fc6  8bf1                 mov esi, ecx
// 00490fc8  8b4604               mov eax, dword ptr [esi + 4]
// 00490fcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00490fcf  3b08                 cmp ecx, dword ptr [eax]
// 00490fd1  7537                 jne 0x49100a
// 00490fd3  3bd0                 cmp edx, eax
// 00490fd5  7533                 jne 0x49100a
// 00490fd7  8b4004               mov eax, dword ptr [eax + 4]
// 00490fda  50                   push eax
// 00490fdb  8bce                 mov ecx, esi
// 00490fdd  e8aefdffff           call 0x490d90
// 00490fe2  8b4604               mov eax, dword ptr [esi + 4]
// 00490fe5  894004               mov dword ptr [eax + 4], eax
// 00490fe8  8b4604               mov eax, dword ptr [esi + 4]
// 00490feb  c7460800000000       mov dword ptr [esi + 8], 0
// 00490ff2  8900                 mov dword ptr [eax], eax
// 00490ff4  8b4604               mov eax, dword ptr [esi + 4]
// 00490ff7  894008               mov dword ptr [eax + 8], eax
// 00490ffa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00490ffd  8b11                 mov edx, dword ptr [ecx]
// 00490fff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00491003  8910                 mov dword ptr [eax], edx
// 00491005  5e                   pop esi
// 00491006  59                   pop ecx
// 00491007  c20c00               ret 0xc
// 0049100a  3bca                 cmp ecx, edx
// 0049100c  7471                 je 0x49107f
// 0049100e  8bff                 mov edi, edi
// 00491010  80793100             cmp byte ptr [ecx + 0x31], 0
// 00491014  8bd1                 mov edx, ecx
// 00491016  7550                 jne 0x491068
// 00491018  8b4108               mov eax, dword ptr [ecx + 8]
// 0049101b  80783100             cmp byte ptr [eax + 0x31], 0
// 0049101f  751f                 jne 0x491040
// 00491021  8bc8                 mov ecx, eax
// 00491023  8b01                 mov eax, dword ptr [ecx]
// 00491025  80783100             cmp byte ptr [eax + 0x31], 0
// 00491029  750f                 jne 0x49103a
// 0049102b  eb03                 jmp 0x491030
// 0049102d  8d4900               lea ecx, [ecx]
// 00491030  8bc8                 mov ecx, eax
// 00491032  8b01                 mov eax, dword ptr [ecx]
// 00491034  80783100             cmp byte ptr [eax + 0x31], 0
// 00491038  74f6                 je 0x491030
// 0049103a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049103e  eb28                 jmp 0x491068
// 00491040  8b4104               mov eax, dword ptr [ecx + 4]
// 00491043  80783100             cmp byte ptr [eax + 0x31], 0
// 00491047  751b                 jne 0x491064
// 00491049  8da42400000000       lea esp, [esp]
// 00491050  3b4808               cmp ecx, dword ptr [eax + 8]
// 00491053  750f                 jne 0x491064
// 00491055  8bc8                 mov ecx, eax
// 00491057  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049105b  8b4004               mov eax, dword ptr [eax + 4]
// 0049105e  80783100             cmp byte ptr [eax + 0x31], 0
// 00491062  74ec                 je 0x491050
// 00491064  89442410             mov dword ptr [esp + 0x10], eax
// 00491068  52                   push edx
// 00491069  8d442408             lea eax, [esp + 8]
// 0049106d  50                   push eax
// 0049106e  8bce                 mov ecx, esi
// 00491070  e83bf8ffff           call 0x4908b0
// 00491075  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00491079  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0049107d  7591                 jne 0x491010
// 0049107f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00491083  8908                 mov dword ptr [eax], ecx
// 00491085  5e                   pop esi
// 00491086  59                   pop ecx
// 00491087  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;
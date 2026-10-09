// roc 2008-06 005613f0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005613f0
//
// 005613f0  6aff                 push -1
// 005613f2  68c8d37b00           push 0x7bd3c8
// 005613f7  64a100000000         mov eax, dword ptr fs:[0]
// 005613fd  50                   push eax
// 005613fe  64892500000000       mov dword ptr fs:[0], esp
// 00561405  51                   push ecx
// 00561406  56                   push esi
// 00561407  8bf1                 mov esi, ecx
// 00561409  89742404             mov dword ptr [esp + 4], esi
// 0056140d  e86eacffff           call 0x55c080
// 00561412  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056141a  e891feffff           call 0x5612b0
// 0056141f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561423  89461c               mov dword ptr [esi + 0x1c], eax
// 00561426  c7064cde8200         mov dword ptr [esi], 0x82de4c
// 0056142c  c746103cde8200       mov dword ptr [esi + 0x10], 0x82de3c
// 00561433  c7461434de8200       mov dword ptr [esi + 0x14], 0x82de34
// 0056143a  c746202cde8200       mov dword ptr [esi + 0x20], 0x82de2c
// 00561441  c746241cde8200       mov dword ptr [esi + 0x24], 0x82de1c
// 00561448  c746440cde8200       mov dword ptr [esi + 0x44], 0x82de0c
// 0056144f  c74664fcdd8200       mov dword ptr [esi + 0x64], 0x82ddfc
// 00561456  c78684000000ecdd8200 mov dword ptr [esi + 0x84], 0x82ddec
// 00561460  c786a4000000dcdd8200 mov dword ptr [esi + 0xa4], 0x82dddc
// 0056146a  c786c4000000ccdd8200 mov dword ptr [esi + 0xc4], 0x82ddcc
// 00561474  8bc6                 mov eax, esi
// 00561476  5e                   pop esi
// 00561477  64890d00000000       mov dword ptr fs:[0], ecx
// 0056147e  83c410               add esp, 0x10
// 00561481  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

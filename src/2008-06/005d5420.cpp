// roc 2008-06 005d5420  unit: RBX::VBodyColors::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5420
//
// 005d5420  6aff                 push -1
// 005d5422  68685a7d00           push 0x7d5a68
// 005d5427  64a100000000         mov eax, dword ptr fs:[0]
// 005d542d  50                   push eax
// 005d542e  64892500000000       mov dword ptr fs:[0], esp
// 005d5435  51                   push ecx
// 005d5436  56                   push esi
// 005d5437  8bf1                 mov esi, ecx
// 005d5439  89742404             mov dword ptr [esp + 4], esi
// 005d543d  e8eeeaffff           call 0x5d3f30
// 005d5442  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d544a  e861f8ffff           call 0x5d4cb0
// 005d544f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d5453  89461c               mov dword ptr [esi + 0x1c], eax
// 005d5456  c706b4c88300         mov dword ptr [esi], 0x83c8b4
// 005d545c  c74610a4c88300       mov dword ptr [esi + 0x10], 0x83c8a4
// 005d5463  c746149cc88300       mov dword ptr [esi + 0x14], 0x83c89c
// 005d546a  c7462094c88300       mov dword ptr [esi + 0x20], 0x83c894
// 005d5471  c7462484c88300       mov dword ptr [esi + 0x24], 0x83c884
// 005d5478  c7464474c88300       mov dword ptr [esi + 0x44], 0x83c874
// 005d547f  c7466464c88300       mov dword ptr [esi + 0x64], 0x83c864
// 005d5486  c7868400000054c88300 mov dword ptr [esi + 0x84], 0x83c854
// 005d5490  c786a400000044c88300 mov dword ptr [esi + 0xa4], 0x83c844
// 005d549a  c786c400000034c88300 mov dword ptr [esi + 0xc4], 0x83c834
// 005d54a4  c786300100002cc88300 mov dword ptr [esi + 0x130], 0x83c82c
// 005d54ae  8bc6                 mov eax, esi
// 005d54b0  5e                   pop esi
// 005d54b1  64890d00000000       mov dword ptr fs:[0], ecx
// 005d54b8  83c410               add esp, 0x10
// 005d54bb  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

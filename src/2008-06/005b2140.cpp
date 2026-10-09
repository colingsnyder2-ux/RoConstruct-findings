// roc 2008-06 005b2140  unit: RBX::VHat::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b2140
//
// 005b2140  6aff                 push -1
// 005b2142  6898377d00           push 0x7d3798
// 005b2147  64a100000000         mov eax, dword ptr fs:[0]
// 005b214d  50                   push eax
// 005b214e  64892500000000       mov dword ptr fs:[0], esp
// 005b2155  51                   push ecx
// 005b2156  56                   push esi
// 005b2157  8bf1                 mov esi, ecx
// 005b2159  89742404             mov dword ptr [esp + 4], esi
// 005b215d  e8fee8ffff           call 0x5b0a60
// 005b2162  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b216a  e8e1f7ffff           call 0x5b1950
// 005b216f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b2173  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2176  c706744e8300         mov dword ptr [esi], 0x834e74
// 005b217c  c74610644e8300       mov dword ptr [esi + 0x10], 0x834e64
// 005b2183  c746145c4e8300       mov dword ptr [esi + 0x14], 0x834e5c
// 005b218a  c74620544e8300       mov dword ptr [esi + 0x20], 0x834e54
// 005b2191  c74624444e8300       mov dword ptr [esi + 0x24], 0x834e44
// 005b2198  c74644344e8300       mov dword ptr [esi + 0x44], 0x834e34
// 005b219f  c74664244e8300       mov dword ptr [esi + 0x64], 0x834e24
// 005b21a6  c78684000000144e8300 mov dword ptr [esi + 0x84], 0x834e14
// 005b21b0  c786a4000000044e8300 mov dword ptr [esi + 0xa4], 0x834e04
// 005b21ba  c786c4000000f44d8300 mov dword ptr [esi + 0xc4], 0x834df4
// 005b21c4  8bc6                 mov eax, esi
// 005b21c6  5e                   pop esi
// 005b21c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b21ce  83c410               add esp, 0x10
// 005b21d1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

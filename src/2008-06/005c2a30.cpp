// roc 2008-06 005c2a30  unit: RBX::VRocket::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2a30
//
// 005c2a30  56                   push esi
// 005c2a31  8bf1                 mov esi, ecx
// 005c2a33  e8a88df9ff           call 0x55b7e0
// 005c2a38  c7061c8a8300         mov dword ptr [esi], 0x838a1c
// 005c2a3e  c74610108a8300       mov dword ptr [esi + 0x10], 0x838a10
// 005c2a45  c74614088a8300       mov dword ptr [esi + 0x14], 0x838a08
// 005c2a4c  c74620008a8300       mov dword ptr [esi + 0x20], 0x838a00
// 005c2a53  c74624f0898300       mov dword ptr [esi + 0x24], 0x8389f0
// 005c2a5a  c74644e0898300       mov dword ptr [esi + 0x44], 0x8389e0
// 005c2a61  c74664d0898300       mov dword ptr [esi + 0x64], 0x8389d0
// 005c2a68  c78684000000c0898300 mov dword ptr [esi + 0x84], 0x8389c0
// 005c2a72  c786a4000000b0898300 mov dword ptr [esi + 0xa4], 0x8389b0
// 005c2a7c  c786c4000000a0898300 mov dword ptr [esi + 0xc4], 0x8389a0
// 005c2a86  8bc6                 mov eax, esi
// 005c2a88  5e                   pop esi
// 005c2a89  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

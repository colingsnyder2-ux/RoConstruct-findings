// roc 2008-06 004a3af0  unit: RBX::VMessage::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3af0
//
// 004a3af0  56                   push esi
// 004a3af1  8bf1                 mov esi, ecx
// 004a3af3  e828961300           call 0x5dd120
// 004a3af8  c70654388200         mov dword ptr [esi], 0x823854
// 004a3afe  c7461044388200       mov dword ptr [esi + 0x10], 0x823844
// 004a3b05  c746143c388200       mov dword ptr [esi + 0x14], 0x82383c
// 004a3b0c  c7462034388200       mov dword ptr [esi + 0x20], 0x823834
// 004a3b13  c7462424388200       mov dword ptr [esi + 0x24], 0x823824
// 004a3b1a  c7464414388200       mov dword ptr [esi + 0x44], 0x823814
// 004a3b21  c7466404388200       mov dword ptr [esi + 0x64], 0x823804
// 004a3b28  c78684000000f4378200 mov dword ptr [esi + 0x84], 0x8237f4
// 004a3b32  c786a4000000e4378200 mov dword ptr [esi + 0xa4], 0x8237e4
// 004a3b3c  c786c4000000d4378200 mov dword ptr [esi + 0xc4], 0x8237d4
// 004a3b46  c78630010000bc378200 mov dword ptr [esi + 0x130], 0x8237bc
// 004a3b50  8bc6                 mov eax, esi
// 004a3b52  5e                   pop esi
// 004a3b53  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

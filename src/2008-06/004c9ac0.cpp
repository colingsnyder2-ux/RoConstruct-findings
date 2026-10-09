// roc 2008-06 004c9ac0  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9ac0
//
// 004c9ac0  56                   push esi
// 004c9ac1  8bf1                 mov esi, ecx
// 004c9ac3  e8181d0900           call 0x55b7e0
// 004c9ac8  c706ec678200         mov dword ptr [esi], 0x8267ec
// 004c9ace  c74610e0678200       mov dword ptr [esi + 0x10], 0x8267e0
// 004c9ad5  c74614d8678200       mov dword ptr [esi + 0x14], 0x8267d8
// 004c9adc  c74620d0678200       mov dword ptr [esi + 0x20], 0x8267d0
// 004c9ae3  c74624c0678200       mov dword ptr [esi + 0x24], 0x8267c0
// 004c9aea  c74644b0678200       mov dword ptr [esi + 0x44], 0x8267b0
// 004c9af1  c74664a0678200       mov dword ptr [esi + 0x64], 0x8267a0
// 004c9af8  c7868400000090678200 mov dword ptr [esi + 0x84], 0x826790
// 004c9b02  c786a400000080678200 mov dword ptr [esi + 0xa4], 0x826780
// 004c9b0c  c786c400000070678200 mov dword ptr [esi + 0xc4], 0x826770
// 004c9b16  8bc6                 mov eax, esi
// 004c9b18  5e                   pop esi
// 004c9b19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

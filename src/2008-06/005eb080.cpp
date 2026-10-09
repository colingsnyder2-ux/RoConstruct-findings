// roc 2008-06 005eb080  unit: RBX::World  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb080
//
// 005eb080  56                   push esi
// 005eb081  8bf1                 mov esi, ecx
// 005eb083  e85807f7ff           call 0x55b7e0
// 005eb088  c70644fa8300         mov dword ptr [esi], 0x83fa44
// 005eb08e  c7461034fa8300       mov dword ptr [esi + 0x10], 0x83fa34
// 005eb095  c746142cfa8300       mov dword ptr [esi + 0x14], 0x83fa2c
// 005eb09c  c7462024fa8300       mov dword ptr [esi + 0x20], 0x83fa24
// 005eb0a3  c7462414fa8300       mov dword ptr [esi + 0x24], 0x83fa14
// 005eb0aa  c7464404fa8300       mov dword ptr [esi + 0x44], 0x83fa04
// 005eb0b1  c74664f4f98300       mov dword ptr [esi + 0x64], 0x83f9f4
// 005eb0b8  c78684000000e4f98300 mov dword ptr [esi + 0x84], 0x83f9e4
// 005eb0c2  c786a4000000d4f98300 mov dword ptr [esi + 0xa4], 0x83f9d4
// 005eb0cc  c786c4000000c4f98300 mov dword ptr [esi + 0xc4], 0x83f9c4
// 005eb0d6  8bc6                 mov eax, esi
// 005eb0d8  5e                   pop esi
// 005eb0d9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

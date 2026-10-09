// roc 2008-06 004454d0  unit: VCRenderSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004454d0
//
// 004454d0  56                   push esi
// 004454d1  8bf1                 mov esi, ecx
// 004454d3  e82849fcff           call 0x409e00
// 004454d8  c7064c5d8100         mov dword ptr [esi], 0x815d4c
// 004454de  c746103c5d8100       mov dword ptr [esi + 0x10], 0x815d3c
// 004454e5  c74614345d8100       mov dword ptr [esi + 0x14], 0x815d34
// 004454ec  c746202c5d8100       mov dword ptr [esi + 0x20], 0x815d2c
// 004454f3  c746241c5d8100       mov dword ptr [esi + 0x24], 0x815d1c
// 004454fa  c746440c5d8100       mov dword ptr [esi + 0x44], 0x815d0c
// 00445501  c74664fc5c8100       mov dword ptr [esi + 0x64], 0x815cfc
// 00445508  c78684000000ec5c8100 mov dword ptr [esi + 0x84], 0x815cec
// 00445512  c786a4000000dc5c8100 mov dword ptr [esi + 0xa4], 0x815cdc
// 0044551c  c786c4000000cc5c8100 mov dword ptr [esi + 0xc4], 0x815ccc
// 00445526  8bc6                 mov eax, esi
// 00445528  5e                   pop esi
// 00445529  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

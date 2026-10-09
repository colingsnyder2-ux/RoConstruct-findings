// roc 2008-06 0062bad0  unit: RBX::VExplosion::?$SignalDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062bad0
//
// 0062bad0  56                   push esi
// 0062bad1  8bf1                 mov esi, ecx
// 0062bad3  e808fdf2ff           call 0x55b7e0
// 0062bad8  c70604618400         mov dword ptr [esi], 0x846104
// 0062bade  c74610f8608400       mov dword ptr [esi + 0x10], 0x8460f8
// 0062bae5  c74614f0608400       mov dword ptr [esi + 0x14], 0x8460f0
// 0062baec  c74620e8608400       mov dword ptr [esi + 0x20], 0x8460e8
// 0062baf3  c74624d8608400       mov dword ptr [esi + 0x24], 0x8460d8
// 0062bafa  c74644c8608400       mov dword ptr [esi + 0x44], 0x8460c8
// 0062bb01  c74664b8608400       mov dword ptr [esi + 0x64], 0x8460b8
// 0062bb08  c78684000000a8608400 mov dword ptr [esi + 0x84], 0x8460a8
// 0062bb12  c786a400000098608400 mov dword ptr [esi + 0xa4], 0x846098
// 0062bb1c  c786c400000088608400 mov dword ptr [esi + 0xc4], 0x846088
// 0062bb26  8bc6                 mov eax, esi
// 0062bb28  5e                   pop esi
// 0062bb29  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

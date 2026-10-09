// roc 2008-06 005d69c0  unit: RBX::VTeams::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d69c0
//
// 005d69c0  56                   push esi
// 005d69c1  8bf1                 mov esi, ecx
// 005d69c3  e8184ef8ff           call 0x55b7e0
// 005d69c8  c70614d08300         mov dword ptr [esi], 0x83d014
// 005d69ce  c7461004d08300       mov dword ptr [esi + 0x10], 0x83d004
// 005d69d5  c74614fccf8300       mov dword ptr [esi + 0x14], 0x83cffc
// 005d69dc  c74620f4cf8300       mov dword ptr [esi + 0x20], 0x83cff4
// 005d69e3  c74624e4cf8300       mov dword ptr [esi + 0x24], 0x83cfe4
// 005d69ea  c74644d4cf8300       mov dword ptr [esi + 0x44], 0x83cfd4
// 005d69f1  c74664c4cf8300       mov dword ptr [esi + 0x64], 0x83cfc4
// 005d69f8  c78684000000b4cf8300 mov dword ptr [esi + 0x84], 0x83cfb4
// 005d6a02  c786a4000000a4cf8300 mov dword ptr [esi + 0xa4], 0x83cfa4
// 005d6a0c  c786c400000094cf8300 mov dword ptr [esi + 0xc4], 0x83cf94
// 005d6a16  8bc6                 mov eax, esi
// 005d6a18  5e                   pop esi
// 005d6a19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

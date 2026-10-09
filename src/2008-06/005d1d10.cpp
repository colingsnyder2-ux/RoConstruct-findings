// roc 2008-06 005d1d10  unit: RBX::VBackpack::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1d10
//
// 005d1d10  56                   push esi
// 005d1d11  8bf1                 mov esi, ecx
// 005d1d13  e8c89af8ff           call 0x55b7e0
// 005d1d18  c70624bc8300         mov dword ptr [esi], 0x83bc24
// 005d1d1e  c7461018bc8300       mov dword ptr [esi + 0x10], 0x83bc18
// 005d1d25  c7461410bc8300       mov dword ptr [esi + 0x14], 0x83bc10
// 005d1d2c  c7462008bc8300       mov dword ptr [esi + 0x20], 0x83bc08
// 005d1d33  c74624f8bb8300       mov dword ptr [esi + 0x24], 0x83bbf8
// 005d1d3a  c74644e8bb8300       mov dword ptr [esi + 0x44], 0x83bbe8
// 005d1d41  c74664d8bb8300       mov dword ptr [esi + 0x64], 0x83bbd8
// 005d1d48  c78684000000c8bb8300 mov dword ptr [esi + 0x84], 0x83bbc8
// 005d1d52  c786a4000000b8bb8300 mov dword ptr [esi + 0xa4], 0x83bbb8
// 005d1d5c  c786c4000000a8bb8300 mov dword ptr [esi + 0xc4], 0x83bba8
// 005d1d66  8bc6                 mov eax, esi
// 005d1d68  5e                   pop esi
// 005d1d69  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2008-06 00563be0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563be0
//
// 00563be0  56                   push esi
// 00563be1  8bf1                 mov esi, ecx
// 00563be3  e81862eaff           call 0x409e00
// 00563be8  c706a4e18200         mov dword ptr [esi], 0x82e1a4
// 00563bee  c7461094e18200       mov dword ptr [esi + 0x10], 0x82e194
// 00563bf5  c746148ce18200       mov dword ptr [esi + 0x14], 0x82e18c
// 00563bfc  c7462084e18200       mov dword ptr [esi + 0x20], 0x82e184
// 00563c03  c7462474e18200       mov dword ptr [esi + 0x24], 0x82e174
// 00563c0a  c7464464e18200       mov dword ptr [esi + 0x44], 0x82e164
// 00563c11  c7466454e18200       mov dword ptr [esi + 0x64], 0x82e154
// 00563c18  c7868400000044e18200 mov dword ptr [esi + 0x84], 0x82e144
// 00563c22  c786a400000034e18200 mov dword ptr [esi + 0xa4], 0x82e134
// 00563c2c  c786c400000024e18200 mov dword ptr [esi + 0xc4], 0x82e124
// 00563c36  8bc6                 mov eax, esi
// 00563c38  5e                   pop esi
// 00563c39  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

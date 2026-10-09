// roc 2008-06 00489a40  unit: G3D::GWindow  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489a40
//
// 00489a40  56                   push esi
// 00489a41  8bf1                 mov esi, ecx
// 00489a43  e8981d0d00           call 0x55b7e0
// 00489a48  c70644158200         mov dword ptr [esi], 0x821544
// 00489a4e  c7461038158200       mov dword ptr [esi + 0x10], 0x821538
// 00489a55  c7461430158200       mov dword ptr [esi + 0x14], 0x821530
// 00489a5c  c7462028158200       mov dword ptr [esi + 0x20], 0x821528
// 00489a63  c7462418158200       mov dword ptr [esi + 0x24], 0x821518
// 00489a6a  c7464408158200       mov dword ptr [esi + 0x44], 0x821508
// 00489a71  c74664f8148200       mov dword ptr [esi + 0x64], 0x8214f8
// 00489a78  c78684000000e8148200 mov dword ptr [esi + 0x84], 0x8214e8
// 00489a82  c786a4000000d8148200 mov dword ptr [esi + 0xa4], 0x8214d8
// 00489a8c  c786c4000000c8148200 mov dword ptr [esi + 0xc4], 0x8214c8
// 00489a96  8bc6                 mov eax, esi
// 00489a98  5e                   pop esi
// 00489a99  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

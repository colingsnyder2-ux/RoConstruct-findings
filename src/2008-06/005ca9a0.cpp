// roc 2008-06 005ca9a0  unit: RBX::KeyboardSecondaryController  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca9a0
//
// 005ca9a0  56                   push esi
// 005ca9a1  8bf1                 mov esi, ecx
// 005ca9a3  e8380ef9ff           call 0x55b7e0
// 005ca9a8  c70674a08300         mov dword ptr [esi], 0x83a074
// 005ca9ae  c7461068a08300       mov dword ptr [esi + 0x10], 0x83a068
// 005ca9b5  c7461460a08300       mov dword ptr [esi + 0x14], 0x83a060
// 005ca9bc  c7462058a08300       mov dword ptr [esi + 0x20], 0x83a058
// 005ca9c3  c7462448a08300       mov dword ptr [esi + 0x24], 0x83a048
// 005ca9ca  c7464438a08300       mov dword ptr [esi + 0x44], 0x83a038
// 005ca9d1  c7466428a08300       mov dword ptr [esi + 0x64], 0x83a028
// 005ca9d8  c7868400000018a08300 mov dword ptr [esi + 0x84], 0x83a018
// 005ca9e2  c786a400000008a08300 mov dword ptr [esi + 0xa4], 0x83a008
// 005ca9ec  c786c4000000f89f8300 mov dword ptr [esi + 0xc4], 0x839ff8
// 005ca9f6  8bc6                 mov eax, esi
// 005ca9f8  5e                   pop esi
// 005ca9f9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

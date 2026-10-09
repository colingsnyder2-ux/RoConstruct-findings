// roc 2008-06 005cc180  unit: RBX::Camera  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc180
//
// 005cc180  56                   push esi
// 005cc181  8bf1                 mov esi, ecx
// 005cc183  e858f6f8ff           call 0x55b7e0
// 005cc188  c706a4a38300         mov dword ptr [esi], 0x83a3a4
// 005cc18e  c7461094a38300       mov dword ptr [esi + 0x10], 0x83a394
// 005cc195  c746148ca38300       mov dword ptr [esi + 0x14], 0x83a38c
// 005cc19c  c7462084a38300       mov dword ptr [esi + 0x20], 0x83a384
// 005cc1a3  c7462474a38300       mov dword ptr [esi + 0x24], 0x83a374
// 005cc1aa  c7464464a38300       mov dword ptr [esi + 0x44], 0x83a364
// 005cc1b1  c7466454a38300       mov dword ptr [esi + 0x64], 0x83a354
// 005cc1b8  c7868400000044a38300 mov dword ptr [esi + 0x84], 0x83a344
// 005cc1c2  c786a400000034a38300 mov dword ptr [esi + 0xa4], 0x83a334
// 005cc1cc  c786c400000024a38300 mov dword ptr [esi + 0xc4], 0x83a324
// 005cc1d6  8bc6                 mov eax, esi
// 005cc1d8  5e                   pop esi
// 005cc1d9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

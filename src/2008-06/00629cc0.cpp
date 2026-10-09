// roc 2008-06 00629cc0  unit: RBX::ClickDetector  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629cc0
//
// 00629cc0  56                   push esi
// 00629cc1  8bf1                 mov esi, ecx
// 00629cc3  e8181bf3ff           call 0x55b7e0
// 00629cc8  c706145c8400         mov dword ptr [esi], 0x845c14
// 00629cce  c74610045c8400       mov dword ptr [esi + 0x10], 0x845c04
// 00629cd5  c74614fc5b8400       mov dword ptr [esi + 0x14], 0x845bfc
// 00629cdc  c74620f45b8400       mov dword ptr [esi + 0x20], 0x845bf4
// 00629ce3  c74624e45b8400       mov dword ptr [esi + 0x24], 0x845be4
// 00629cea  c74644d45b8400       mov dword ptr [esi + 0x44], 0x845bd4
// 00629cf1  c74664c45b8400       mov dword ptr [esi + 0x64], 0x845bc4
// 00629cf8  c78684000000b45b8400 mov dword ptr [esi + 0x84], 0x845bb4
// 00629d02  c786a4000000a45b8400 mov dword ptr [esi + 0xa4], 0x845ba4
// 00629d0c  c786c4000000945b8400 mov dword ptr [esi + 0xc4], 0x845b94
// 00629d16  8bc6                 mov eax, esi
// 00629d18  5e                   pop esi
// 00629d19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2008-06 0040cdc0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cdc0
//
// 0040cdc0  56                   push esi
// 0040cdc1  8bf1                 mov esi, ecx
// 0040cdc3  e828fbffff           call 0x40c8f0
// 0040cdc8  c70664c88000         mov dword ptr [esi], 0x80c864
// 0040cdce  c7461054c88000       mov dword ptr [esi + 0x10], 0x80c854
// 0040cdd5  c746144cc88000       mov dword ptr [esi + 0x14], 0x80c84c
// 0040cddc  c7462044c88000       mov dword ptr [esi + 0x20], 0x80c844
// 0040cde3  c7462434c88000       mov dword ptr [esi + 0x24], 0x80c834
// 0040cdea  c7464424c88000       mov dword ptr [esi + 0x44], 0x80c824
// 0040cdf1  c7466414c88000       mov dword ptr [esi + 0x64], 0x80c814
// 0040cdf8  c7868400000004c88000 mov dword ptr [esi + 0x84], 0x80c804
// 0040ce02  c786a4000000f4c78000 mov dword ptr [esi + 0xa4], 0x80c7f4
// 0040ce0c  c786c4000000e4c78000 mov dword ptr [esi + 0xc4], 0x80c7e4
// 0040ce16  8bc6                 mov eax, esi
// 0040ce18  5e                   pop esi
// 0040ce19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

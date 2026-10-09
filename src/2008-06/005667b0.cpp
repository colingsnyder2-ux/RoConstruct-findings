// roc 2008-06 005667b0  unit: RBX::VTeam::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005667b0
//
// 005667b0  56                   push esi
// 005667b1  8bf1                 mov esi, ecx
// 005667b3  e82850ffff           call 0x55b7e0
// 005667b8  c706e4ec8200         mov dword ptr [esi], 0x82ece4
// 005667be  c74610d8ec8200       mov dword ptr [esi + 0x10], 0x82ecd8
// 005667c5  c74614d0ec8200       mov dword ptr [esi + 0x14], 0x82ecd0
// 005667cc  c74620c8ec8200       mov dword ptr [esi + 0x20], 0x82ecc8
// 005667d3  c74624b8ec8200       mov dword ptr [esi + 0x24], 0x82ecb8
// 005667da  c74644a8ec8200       mov dword ptr [esi + 0x44], 0x82eca8
// 005667e1  c7466498ec8200       mov dword ptr [esi + 0x64], 0x82ec98
// 005667e8  c7868400000088ec8200 mov dword ptr [esi + 0x84], 0x82ec88
// 005667f2  c786a400000078ec8200 mov dword ptr [esi + 0xa4], 0x82ec78
// 005667fc  c786c400000068ec8200 mov dword ptr [esi + 0xc4], 0x82ec68
// 00566806  8bc6                 mov eax, esi
// 00566808  5e                   pop esi
// 00566809  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

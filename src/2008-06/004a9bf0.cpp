// roc 2008-06 004a9bf0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9bf0
//
// 004a9bf0  56                   push esi
// 004a9bf1  8bf1                 mov esi, ecx
// 004a9bf3  e80802f6ff           call 0x409e00
// 004a9bf8  c706b43f8200         mov dword ptr [esi], 0x823fb4
// 004a9bfe  c74610a83f8200       mov dword ptr [esi + 0x10], 0x823fa8
// 004a9c05  c74614a03f8200       mov dword ptr [esi + 0x14], 0x823fa0
// 004a9c0c  c74620983f8200       mov dword ptr [esi + 0x20], 0x823f98
// 004a9c13  c74624883f8200       mov dword ptr [esi + 0x24], 0x823f88
// 004a9c1a  c74644783f8200       mov dword ptr [esi + 0x44], 0x823f78
// 004a9c21  c74664683f8200       mov dword ptr [esi + 0x64], 0x823f68
// 004a9c28  c78684000000583f8200 mov dword ptr [esi + 0x84], 0x823f58
// 004a9c32  c786a4000000483f8200 mov dword ptr [esi + 0xa4], 0x823f48
// 004a9c3c  c786c4000000383f8200 mov dword ptr [esi + 0xc4], 0x823f38
// 004a9c46  8bc6                 mov eax, esi
// 004a9c48  5e                   pop esi
// 004a9c49  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

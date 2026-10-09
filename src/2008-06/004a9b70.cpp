// roc 2008-06 004a9b70  unit: seg_004a0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9b70
//
// 004a9b70  c701b43f8200         mov dword ptr [ecx], 0x823fb4
// 004a9b76  c74110a83f8200       mov dword ptr [ecx + 0x10], 0x823fa8
// 004a9b7d  c74114a03f8200       mov dword ptr [ecx + 0x14], 0x823fa0
// 004a9b84  c74120983f8200       mov dword ptr [ecx + 0x20], 0x823f98
// 004a9b8b  c74124883f8200       mov dword ptr [ecx + 0x24], 0x823f88
// 004a9b92  c74144783f8200       mov dword ptr [ecx + 0x44], 0x823f78
// 004a9b99  c74164683f8200       mov dword ptr [ecx + 0x64], 0x823f68
// 004a9ba0  c78184000000583f8200 mov dword ptr [ecx + 0x84], 0x823f58
// 004a9baa  c781a4000000483f8200 mov dword ptr [ecx + 0xa4], 0x823f48
// 004a9bb4  c781c4000000383f8200 mov dword ptr [ecx + 0xc4], 0x823f38
// 004a9bbe  e97d090b00           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

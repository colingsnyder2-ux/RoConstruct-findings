// roc 2008-06 005b6a40  unit: RBX::DropperTool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6a40
//
// 005b6a40  c7011c758300         mov dword ptr [ecx], 0x83751c
// 005b6a46  c7411010758300       mov dword ptr [ecx + 0x10], 0x837510
// 005b6a4d  c7411408758300       mov dword ptr [ecx + 0x14], 0x837508
// 005b6a54  c7412000758300       mov dword ptr [ecx + 0x20], 0x837500
// 005b6a5b  c74124f0748300       mov dword ptr [ecx + 0x24], 0x8374f0
// 005b6a62  c74144e0748300       mov dword ptr [ecx + 0x44], 0x8374e0
// 005b6a69  c74164d0748300       mov dword ptr [ecx + 0x64], 0x8374d0
// 005b6a70  c78184000000c0748300 mov dword ptr [ecx + 0x84], 0x8374c0
// 005b6a7a  c781a4000000b0748300 mov dword ptr [ecx + 0xa4], 0x8374b0
// 005b6a84  c781c4000000a0748300 mov dword ptr [ecx + 0xc4], 0x8374a0
// 005b6a8e  e9ad3afaff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

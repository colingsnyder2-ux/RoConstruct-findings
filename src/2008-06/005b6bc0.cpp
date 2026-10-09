// roc 2008-06 005b6bc0  unit: RBX::DropperTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6bc0
//
// 005b6bc0  56                   push esi
// 005b6bc1  8bf1                 mov esi, ecx
// 005b6bc3  e8184cfaff           call 0x55b7e0
// 005b6bc8  c7061c758300         mov dword ptr [esi], 0x83751c
// 005b6bce  c7461010758300       mov dword ptr [esi + 0x10], 0x837510
// 005b6bd5  c7461408758300       mov dword ptr [esi + 0x14], 0x837508
// 005b6bdc  c7462000758300       mov dword ptr [esi + 0x20], 0x837500
// 005b6be3  c74624f0748300       mov dword ptr [esi + 0x24], 0x8374f0
// 005b6bea  c74644e0748300       mov dword ptr [esi + 0x44], 0x8374e0
// 005b6bf1  c74664d0748300       mov dword ptr [esi + 0x64], 0x8374d0
// 005b6bf8  c78684000000c0748300 mov dword ptr [esi + 0x84], 0x8374c0
// 005b6c02  c786a4000000b0748300 mov dword ptr [esi + 0xa4], 0x8374b0
// 005b6c0c  c786c4000000a0748300 mov dword ptr [esi + 0xc4], 0x8374a0
// 005b6c16  8bc6                 mov eax, esi
// 005b6c18  5e                   pop esi
// 005b6c19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

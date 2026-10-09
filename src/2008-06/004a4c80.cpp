// roc 2008-06 004a4c80  unit: RBX::VHint::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4c80
//
// 004a4c80  56                   push esi
// 004a4c81  8bf1                 mov esi, ecx
// 004a4c83  e8d8fdffff           call 0x4a4a60
// 004a4c88  c7066c3b8200         mov dword ptr [esi], 0x823b6c
// 004a4c8e  c74610603b8200       mov dword ptr [esi + 0x10], 0x823b60
// 004a4c95  c74614583b8200       mov dword ptr [esi + 0x14], 0x823b58
// 004a4c9c  c74620503b8200       mov dword ptr [esi + 0x20], 0x823b50
// 004a4ca3  c74624403b8200       mov dword ptr [esi + 0x24], 0x823b40
// 004a4caa  c74644303b8200       mov dword ptr [esi + 0x44], 0x823b30
// 004a4cb1  c74664203b8200       mov dword ptr [esi + 0x64], 0x823b20
// 004a4cb8  c78684000000103b8200 mov dword ptr [esi + 0x84], 0x823b10
// 004a4cc2  c786a4000000003b8200 mov dword ptr [esi + 0xa4], 0x823b00
// 004a4ccc  c786c4000000f03a8200 mov dword ptr [esi + 0xc4], 0x823af0
// 004a4cd6  c78630010000d83a8200 mov dword ptr [esi + 0x130], 0x823ad8
// 004a4ce0  8bc6                 mov eax, esi
// 004a4ce2  5e                   pop esi
// 004a4ce3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

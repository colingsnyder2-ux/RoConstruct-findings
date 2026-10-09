// roc 2008-06 005d3d30  unit: RBX::VBodyColors::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3d30
//
// 005d3d30  c70124c48300         mov dword ptr [ecx], 0x83c424
// 005d3d36  c7411014c48300       mov dword ptr [ecx + 0x10], 0x83c414
// 005d3d3d  c741140cc48300       mov dword ptr [ecx + 0x14], 0x83c40c
// 005d3d44  c7412004c48300       mov dword ptr [ecx + 0x20], 0x83c404
// 005d3d4b  c74124f4c38300       mov dword ptr [ecx + 0x24], 0x83c3f4
// 005d3d52  c74144e4c38300       mov dword ptr [ecx + 0x44], 0x83c3e4
// 005d3d59  c74164d4c38300       mov dword ptr [ecx + 0x64], 0x83c3d4
// 005d3d60  c78184000000c4c38300 mov dword ptr [ecx + 0x84], 0x83c3c4
// 005d3d6a  c781a4000000b4c38300 mov dword ptr [ecx + 0xa4], 0x83c3b4
// 005d3d74  c781c4000000a4c38300 mov dword ptr [ecx + 0xc4], 0x83c3a4
// 005d3d7e  c781300100009cc38300 mov dword ptr [ecx + 0x130], 0x83c39c
// 005d3d88  e9b367f8ff           jmp 0x55a540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

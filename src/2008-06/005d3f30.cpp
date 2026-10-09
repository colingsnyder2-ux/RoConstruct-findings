// roc 2008-06 005d3f30  unit: RBX::VSkin::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3f30
//
// 005d3f30  56                   push esi
// 005d3f31  8bf1                 mov esi, ecx
// 005d3f33  e8a878f8ff           call 0x55b7e0
// 005d3f38  c70624c48300         mov dword ptr [esi], 0x83c424
// 005d3f3e  c7461014c48300       mov dword ptr [esi + 0x10], 0x83c414
// 005d3f45  c746140cc48300       mov dword ptr [esi + 0x14], 0x83c40c
// 005d3f4c  c7462004c48300       mov dword ptr [esi + 0x20], 0x83c404
// 005d3f53  c74624f4c38300       mov dword ptr [esi + 0x24], 0x83c3f4
// 005d3f5a  c74644e4c38300       mov dword ptr [esi + 0x44], 0x83c3e4
// 005d3f61  c74664d4c38300       mov dword ptr [esi + 0x64], 0x83c3d4
// 005d3f68  c78684000000c4c38300 mov dword ptr [esi + 0x84], 0x83c3c4
// 005d3f72  c786a4000000b4c38300 mov dword ptr [esi + 0xa4], 0x83c3b4
// 005d3f7c  c786c4000000a4c38300 mov dword ptr [esi + 0xc4], 0x83c3a4
// 005d3f86  c786300100009cc38300 mov dword ptr [esi + 0x130], 0x83c39c
// 005d3f90  8bc6                 mov eax, esi
// 005d3f92  5e                   pop esi
// 005d3f93  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

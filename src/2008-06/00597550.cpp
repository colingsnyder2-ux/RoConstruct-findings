// roc 2008-06 00597550  unit: RBX::VTextureId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597550
//
// 00597550  56                   push esi
// 00597551  8bf1                 mov esi, ecx
// 00597553  e8d87f0500           call 0x5ef530
// 00597558  c70614248300         mov dword ptr [esi], 0x832414
// 0059755e  c7461004248300       mov dword ptr [esi + 0x10], 0x832404
// 00597565  c74614fc238300       mov dword ptr [esi + 0x14], 0x8323fc
// 0059756c  c74620f4238300       mov dword ptr [esi + 0x20], 0x8323f4
// 00597573  c74624e4238300       mov dword ptr [esi + 0x24], 0x8323e4
// 0059757a  c74644d4238300       mov dword ptr [esi + 0x44], 0x8323d4
// 00597581  c74664c4238300       mov dword ptr [esi + 0x64], 0x8323c4
// 00597588  c78684000000b4238300 mov dword ptr [esi + 0x84], 0x8323b4
// 00597592  c786a4000000a4238300 mov dword ptr [esi + 0xa4], 0x8323a4
// 0059759c  c786c400000094238300 mov dword ptr [esi + 0xc4], 0x832394
// 005975a6  c786300100007c238300 mov dword ptr [esi + 0x130], 0x83237c
// 005975b0  8bc6                 mov eax, esi
// 005975b2  5e                   pop esi
// 005975b3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

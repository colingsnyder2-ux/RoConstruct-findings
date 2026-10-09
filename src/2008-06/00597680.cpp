// roc 2008-06 00597680  unit: RBX::VDecal::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597680
//
// 00597680  c70114248300         mov dword ptr [ecx], 0x832414
// 00597686  c7411004248300       mov dword ptr [ecx + 0x10], 0x832404
// 0059768d  c74114fc238300       mov dword ptr [ecx + 0x14], 0x8323fc
// 00597694  c74120f4238300       mov dword ptr [ecx + 0x20], 0x8323f4
// 0059769b  c74124e4238300       mov dword ptr [ecx + 0x24], 0x8323e4
// 005976a2  c74144d4238300       mov dword ptr [ecx + 0x44], 0x8323d4
// 005976a9  c74164c4238300       mov dword ptr [ecx + 0x64], 0x8323c4
// 005976b0  c78184000000b4238300 mov dword ptr [ecx + 0x84], 0x8323b4
// 005976ba  c781a4000000a4238300 mov dword ptr [ecx + 0xa4], 0x8323a4
// 005976c4  c781c400000094238300 mov dword ptr [ecx + 0xc4], 0x832394
// 005976ce  c781300100007c238300 mov dword ptr [ecx + 0x130], 0x83237c
// 005976d8  e923feffff           jmp 0x597500
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

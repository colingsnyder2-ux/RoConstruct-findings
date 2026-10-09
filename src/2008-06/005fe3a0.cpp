// roc 2008-06 005fe3a0  unit: RBX::ToolMouseCommand  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe3a0
//
// 005fe3a0  c70104198400         mov dword ptr [ecx], 0x841904
// 005fe3a6  c74110f8188400       mov dword ptr [ecx + 0x10], 0x8418f8
// 005fe3ad  c74114f0188400       mov dword ptr [ecx + 0x14], 0x8418f0
// 005fe3b4  c74120e8188400       mov dword ptr [ecx + 0x20], 0x8418e8
// 005fe3bb  c74124d8188400       mov dword ptr [ecx + 0x24], 0x8418d8
// 005fe3c2  c74144c8188400       mov dword ptr [ecx + 0x44], 0x8418c8
// 005fe3c9  c74164b8188400       mov dword ptr [ecx + 0x64], 0x8418b8
// 005fe3d0  c78184000000a8188400 mov dword ptr [ecx + 0x84], 0x8418a8
// 005fe3da  c781a400000098188400 mov dword ptr [ecx + 0xa4], 0x841898
// 005fe3e4  c781c400000088188400 mov dword ptr [ecx + 0xc4], 0x841888
// 005fe3ee  c7813001000080188400 mov dword ptr [ecx + 0x130], 0x841880
// 005fe3f8  e9531afdff           jmp 0x5cfe50
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

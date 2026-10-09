// roc 2008-06 005cfb50  unit: ChatEnter  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfb50
//
// 005cfb50  c701fcac8300         mov dword ptr [ecx], 0x83acfc
// 005cfb56  c74110ecac8300       mov dword ptr [ecx + 0x10], 0x83acec
// 005cfb5d  c74114e4ac8300       mov dword ptr [ecx + 0x14], 0x83ace4
// 005cfb64  c74120dcac8300       mov dword ptr [ecx + 0x20], 0x83acdc
// 005cfb6b  c74124ccac8300       mov dword ptr [ecx + 0x24], 0x83accc
// 005cfb72  c74144bcac8300       mov dword ptr [ecx + 0x44], 0x83acbc
// 005cfb79  c74164acac8300       mov dword ptr [ecx + 0x64], 0x83acac
// 005cfb80  c781840000009cac8300 mov dword ptr [ecx + 0x84], 0x83ac9c
// 005cfb8a  c781a40000008cac8300 mov dword ptr [ecx + 0xa4], 0x83ac8c
// 005cfb94  c781c40000007cac8300 mov dword ptr [ecx + 0xc4], 0x83ac7c
// 005cfb9e  c7813001000074ac8300 mov dword ptr [ecx + 0x130], 0x83ac74
// 005cfba8  e9d3f6ffff           jmp 0x5cf280
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

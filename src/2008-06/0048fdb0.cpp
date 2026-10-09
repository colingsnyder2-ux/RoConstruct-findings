// roc 2008-06 0048fdb0  unit: RBX::VPants::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fdb0
//
// 0048fdb0  c7018c1a8200         mov dword ptr [ecx], 0x821a8c
// 0048fdb6  c74110801a8200       mov dword ptr [ecx + 0x10], 0x821a80
// 0048fdbd  c74114781a8200       mov dword ptr [ecx + 0x14], 0x821a78
// 0048fdc4  c74120701a8200       mov dword ptr [ecx + 0x20], 0x821a70
// 0048fdcb  c74124601a8200       mov dword ptr [ecx + 0x24], 0x821a60
// 0048fdd2  c74144501a8200       mov dword ptr [ecx + 0x44], 0x821a50
// 0048fdd9  c74164401a8200       mov dword ptr [ecx + 0x64], 0x821a40
// 0048fde0  c78184000000301a8200 mov dword ptr [ecx + 0x84], 0x821a30
// 0048fdea  c781a4000000201a8200 mov dword ptr [ecx + 0xa4], 0x821a20
// 0048fdf4  c781c4000000101a8200 mov dword ptr [ecx + 0xc4], 0x821a10
// 0048fdfe  c78130010000081a8200 mov dword ptr [ecx + 0x130], 0x821a08
// 0048fe08  e943fcffff           jmp 0x48fa50
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

// roc 2008-06 005e32b0  unit: RBX::VRotate::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e32b0
//
// 005e32b0  c7018ce78300         mov dword ptr [ecx], 0x83e78c
// 005e32b6  c7411080e78300       mov dword ptr [ecx + 0x10], 0x83e780
// 005e32bd  c7411478e78300       mov dword ptr [ecx + 0x14], 0x83e778
// 005e32c4  c7412070e78300       mov dword ptr [ecx + 0x20], 0x83e770
// 005e32cb  c7412460e78300       mov dword ptr [ecx + 0x24], 0x83e760
// 005e32d2  c7414450e78300       mov dword ptr [ecx + 0x44], 0x83e750
// 005e32d9  c7416440e78300       mov dword ptr [ecx + 0x64], 0x83e740
// 005e32e0  c7818400000030e78300 mov dword ptr [ecx + 0x84], 0x83e730
// 005e32ea  c781a400000020e78300 mov dword ptr [ecx + 0xa4], 0x83e720
// 005e32f4  c781c400000010e78300 mov dword ptr [ecx + 0xc4], 0x83e710
// 005e32fe  c78130010000f8e68300 mov dword ptr [ecx + 0x130], 0x83e6f8
// 005e3308  e903fbffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

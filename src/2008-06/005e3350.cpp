// roc 2008-06 005e3350  unit: RBX::VRotateP::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3350
//
// 005e3350  c70164e88300         mov dword ptr [ecx], 0x83e864
// 005e3356  c7411058e88300       mov dword ptr [ecx + 0x10], 0x83e858
// 005e335d  c7411450e88300       mov dword ptr [ecx + 0x14], 0x83e850
// 005e3364  c7412048e88300       mov dword ptr [ecx + 0x20], 0x83e848
// 005e336b  c7412438e88300       mov dword ptr [ecx + 0x24], 0x83e838
// 005e3372  c7414428e88300       mov dword ptr [ecx + 0x44], 0x83e828
// 005e3379  c7416418e88300       mov dword ptr [ecx + 0x64], 0x83e818
// 005e3380  c7818400000008e88300 mov dword ptr [ecx + 0x84], 0x83e808
// 005e338a  c781a4000000f8e78300 mov dword ptr [ecx + 0xa4], 0x83e7f8
// 005e3394  c781c4000000e8e78300 mov dword ptr [ecx + 0xc4], 0x83e7e8
// 005e339e  c78130010000d0e78300 mov dword ptr [ecx + 0x130], 0x83e7d0
// 005e33a8  e963faffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

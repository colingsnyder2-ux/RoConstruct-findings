// roc 2008-06 005cfeb0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfeb0
//
// 005cfeb0  c70124ae8300         mov dword ptr [ecx], 0x83ae24
// 005cfeb6  c7411018ae8300       mov dword ptr [ecx + 0x10], 0x83ae18
// 005cfebd  c7411410ae8300       mov dword ptr [ecx + 0x14], 0x83ae10
// 005cfec4  c7412008ae8300       mov dword ptr [ecx + 0x20], 0x83ae08
// 005cfecb  c74124f8ad8300       mov dword ptr [ecx + 0x24], 0x83adf8
// 005cfed2  c74144e8ad8300       mov dword ptr [ecx + 0x44], 0x83ade8
// 005cfed9  c74164d8ad8300       mov dword ptr [ecx + 0x64], 0x83add8
// 005cfee0  c78184000000c8ad8300 mov dword ptr [ecx + 0x84], 0x83adc8
// 005cfeea  c781a4000000b8ad8300 mov dword ptr [ecx + 0xa4], 0x83adb8
// 005cfef4  c781c4000000a8ad8300 mov dword ptr [ecx + 0xc4], 0x83ada8
// 005cfefe  c78130010000a0ad8300 mov dword ptr [ecx + 0x130], 0x83ada0
// 005cff08  e943ffffff           jmp 0x5cfe50
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

// roc 2008-06 0060a7c0  unit: RBX::VelocityMotor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a7c0
//
// 0060a7c0  c7012c2e8400         mov dword ptr [ecx], 0x842e2c
// 0060a7c6  c74110202e8400       mov dword ptr [ecx + 0x10], 0x842e20
// 0060a7cd  c74114182e8400       mov dword ptr [ecx + 0x14], 0x842e18
// 0060a7d4  c74120102e8400       mov dword ptr [ecx + 0x20], 0x842e10
// 0060a7db  c74124002e8400       mov dword ptr [ecx + 0x24], 0x842e00
// 0060a7e2  c74144f02d8400       mov dword ptr [ecx + 0x44], 0x842df0
// 0060a7e9  c74164e02d8400       mov dword ptr [ecx + 0x64], 0x842de0
// 0060a7f0  c78184000000d02d8400 mov dword ptr [ecx + 0x84], 0x842dd0
// 0060a7fa  c781a4000000c02d8400 mov dword ptr [ecx + 0xa4], 0x842dc0
// 0060a804  c781c4000000b02d8400 mov dword ptr [ecx + 0xc4], 0x842db0
// 0060a80e  c78130010000982d8400 mov dword ptr [ecx + 0x130], 0x842d98
// 0060a818  e943fbffff           jmp 0x60a360
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

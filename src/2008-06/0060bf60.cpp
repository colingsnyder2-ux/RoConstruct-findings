// roc 2008-06 0060bf60  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060bf60
//
// 0060bf60  56                   push esi
// 0060bf61  8bf1                 mov esi, ecx
// 0060bf63  e8f8feffff           call 0x60be60
// 0060bf68  c7062c2e8400         mov dword ptr [esi], 0x842e2c
// 0060bf6e  c74610202e8400       mov dword ptr [esi + 0x10], 0x842e20
// 0060bf75  c74614182e8400       mov dword ptr [esi + 0x14], 0x842e18
// 0060bf7c  c74620102e8400       mov dword ptr [esi + 0x20], 0x842e10
// 0060bf83  c74624002e8400       mov dword ptr [esi + 0x24], 0x842e00
// 0060bf8a  c74644f02d8400       mov dword ptr [esi + 0x44], 0x842df0
// 0060bf91  c74664e02d8400       mov dword ptr [esi + 0x64], 0x842de0
// 0060bf98  c78684000000d02d8400 mov dword ptr [esi + 0x84], 0x842dd0
// 0060bfa2  c786a4000000c02d8400 mov dword ptr [esi + 0xa4], 0x842dc0
// 0060bfac  c786c4000000b02d8400 mov dword ptr [esi + 0xc4], 0x842db0
// 0060bfb6  c78630010000982d8400 mov dword ptr [esi + 0x130], 0x842d98
// 0060bfc0  8bc6                 mov eax, esi
// 0060bfc2  5e                   pop esi
// 0060bfc3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

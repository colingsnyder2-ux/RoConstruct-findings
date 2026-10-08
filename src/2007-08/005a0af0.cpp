// roc 2007-08 005a0af0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0af0
//
// 005a0af0  56                   push esi
// 005a0af1  8bf1                 mov esi, ecx
// 005a0af3  e8b8fcffff           call 0x5a07b0
// 005a0af8  c70654397b00         mov dword ptr [esi], 0x7b3954
// 005a0afe  c746044c397b00       mov dword ptr [esi + 4], 0x7b394c
// 005a0b05  c7461044397b00       mov dword ptr [esi + 0x10], 0x7b3944
// 005a0b0c  c7461434397b00       mov dword ptr [esi + 0x14], 0x7b3934
// 005a0b13  c7462c24397b00       mov dword ptr [esi + 0x2c], 0x7b3924
// 005a0b1a  c7464414397b00       mov dword ptr [esi + 0x44], 0x7b3914
// 005a0b21  c7465c04397b00       mov dword ptr [esi + 0x5c], 0x7b3904
// 005a0b28  c74674f4387b00       mov dword ptr [esi + 0x74], 0x7b38f4
// 005a0b2f  c7868c000000e4387b00 mov dword ptr [esi + 0x8c], 0x7b38e4
// 005a0b39  8bc6                 mov eax, esi
// 005a0b3b  5e                   pop esi
// 005a0b3c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

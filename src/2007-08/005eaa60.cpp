// roc 2007-08 005eaa60  unit: RBX::VFlagStand::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eaa60
//
// 005eaa60  56                   push esi
// 005eaa61  8bf1                 mov esi, ecx
// 005eaa63  e858fcffff           call 0x5ea6c0
// 005eaa68  c70654e37b00         mov dword ptr [esi], 0x7be354
// 005eaa6e  c746044ce37b00       mov dword ptr [esi + 4], 0x7be34c
// 005eaa75  c7461044e37b00       mov dword ptr [esi + 0x10], 0x7be344
// 005eaa7c  c7461434e37b00       mov dword ptr [esi + 0x14], 0x7be334
// 005eaa83  c7462c24e37b00       mov dword ptr [esi + 0x2c], 0x7be324
// 005eaa8a  c7464414e37b00       mov dword ptr [esi + 0x44], 0x7be314
// 005eaa91  c7465c04e37b00       mov dword ptr [esi + 0x5c], 0x7be304
// 005eaa98  c74674f4e27b00       mov dword ptr [esi + 0x74], 0x7be2f4
// 005eaa9f  c7868c000000e4e27b00 mov dword ptr [esi + 0x8c], 0x7be2e4
// 005eaaa9  8bc6                 mov eax, esi
// 005eaaab  5e                   pop esi
// 005eaaac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

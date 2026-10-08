// roc 2007-08 0052f120  unit: RBX::VRunService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f120
//
// 0052f120  56                   push esi
// 0052f121  8bf1                 mov esi, ecx
// 0052f123  e868fbffff           call 0x52ec90
// 0052f128  c706c44b7a00         mov dword ptr [esi], 0x7a4bc4
// 0052f12e  c74604b84b7a00       mov dword ptr [esi + 4], 0x7a4bb8
// 0052f135  c74610b04b7a00       mov dword ptr [esi + 0x10], 0x7a4bb0
// 0052f13c  c74614a04b7a00       mov dword ptr [esi + 0x14], 0x7a4ba0
// 0052f143  c7462c904b7a00       mov dword ptr [esi + 0x2c], 0x7a4b90
// 0052f14a  c74644804b7a00       mov dword ptr [esi + 0x44], 0x7a4b80
// 0052f151  c7465c704b7a00       mov dword ptr [esi + 0x5c], 0x7a4b70
// 0052f158  c74674604b7a00       mov dword ptr [esi + 0x74], 0x7a4b60
// 0052f15f  c7868c000000504b7a00 mov dword ptr [esi + 0x8c], 0x7a4b50
// 0052f169  8bc6                 mov eax, esi
// 0052f16b  5e                   pop esi
// 0052f16c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 005f57f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f57f0
//
// 005f57f0  56                   push esi
// 005f57f1  8bf1                 mov esi, ecx
// 005f57f3  e8a8f1ffff           call 0x5f49a0
// 005f57f8  c706b40f7c00         mov dword ptr [esi], 0x7c0fb4
// 005f57fe  c74604ac0f7c00       mov dword ptr [esi + 4], 0x7c0fac
// 005f5805  c74610a40f7c00       mov dword ptr [esi + 0x10], 0x7c0fa4
// 005f580c  c74614940f7c00       mov dword ptr [esi + 0x14], 0x7c0f94
// 005f5813  c7462c840f7c00       mov dword ptr [esi + 0x2c], 0x7c0f84
// 005f581a  c74644740f7c00       mov dword ptr [esi + 0x44], 0x7c0f74
// 005f5821  c7465c640f7c00       mov dword ptr [esi + 0x5c], 0x7c0f64
// 005f5828  c74674540f7c00       mov dword ptr [esi + 0x74], 0x7c0f54
// 005f582f  c7868c000000440f7c00 mov dword ptr [esi + 0x8c], 0x7c0f44
// 005f5839  8bc6                 mov eax, esi
// 005f583b  5e                   pop esi
// 005f583c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

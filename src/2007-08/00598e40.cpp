// roc 2007-08 00598e40  unit: RBX::PlayerController  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598e40
//
// 00598e40  56                   push esi
// 00598e41  8bf1                 mov esi, ecx
// 00598e43  e808f9ffff           call 0x598750
// 00598e48  c706dc137b00         mov dword ptr [esi], 0x7b13dc
// 00598e4e  c74604d0137b00       mov dword ptr [esi + 4], 0x7b13d0
// 00598e55  c74610c8137b00       mov dword ptr [esi + 0x10], 0x7b13c8
// 00598e5c  c74614b8137b00       mov dword ptr [esi + 0x14], 0x7b13b8
// 00598e63  c7462ca8137b00       mov dword ptr [esi + 0x2c], 0x7b13a8
// 00598e6a  c7464498137b00       mov dword ptr [esi + 0x44], 0x7b1398
// 00598e71  c7465c88137b00       mov dword ptr [esi + 0x5c], 0x7b1388
// 00598e78  c7467478137b00       mov dword ptr [esi + 0x74], 0x7b1378
// 00598e7f  c7868c00000068137b00 mov dword ptr [esi + 0x8c], 0x7b1368
// 00598e89  8bc6                 mov eax, esi
// 00598e8b  5e                   pop esi
// 00598e8c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

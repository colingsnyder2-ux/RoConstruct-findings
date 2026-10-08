// roc 2007-08 005afca0  unit: RBX::AssemblyStage  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afca0
//
// 005afca0  56                   push esi
// 005afca1  8bf1                 mov esi, ecx
// 005afca3  e87828f9ff           call 0x542520
// 005afca8  c706b45f7b00         mov dword ptr [esi], 0x7b5fb4
// 005afcae  c74604ac5f7b00       mov dword ptr [esi + 4], 0x7b5fac
// 005afcb5  c74610a45f7b00       mov dword ptr [esi + 0x10], 0x7b5fa4
// 005afcbc  c74614945f7b00       mov dword ptr [esi + 0x14], 0x7b5f94
// 005afcc3  c7462c845f7b00       mov dword ptr [esi + 0x2c], 0x7b5f84
// 005afcca  c74644745f7b00       mov dword ptr [esi + 0x44], 0x7b5f74
// 005afcd1  c7465c645f7b00       mov dword ptr [esi + 0x5c], 0x7b5f64
// 005afcd8  c74674545f7b00       mov dword ptr [esi + 0x74], 0x7b5f54
// 005afcdf  c7868c000000445f7b00 mov dword ptr [esi + 0x8c], 0x7b5f44
// 005afce9  8bc6                 mov eax, esi
// 005afceb  5e                   pop esi
// 005afcec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

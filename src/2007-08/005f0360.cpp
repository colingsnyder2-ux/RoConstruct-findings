// roc 2007-08 005f0360  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0360
//
// 005f0360  56                   push esi
// 005f0361  8bf1                 mov esi, ecx
// 005f0363  e8b821f5ff           call 0x542520
// 005f0368  c706cc027c00         mov dword ptr [esi], 0x7c02cc
// 005f036e  c74604c4027c00       mov dword ptr [esi + 4], 0x7c02c4
// 005f0375  c74610bc027c00       mov dword ptr [esi + 0x10], 0x7c02bc
// 005f037c  c74614ac027c00       mov dword ptr [esi + 0x14], 0x7c02ac
// 005f0383  c7462c9c027c00       mov dword ptr [esi + 0x2c], 0x7c029c
// 005f038a  c746448c027c00       mov dword ptr [esi + 0x44], 0x7c028c
// 005f0391  c7465c7c027c00       mov dword ptr [esi + 0x5c], 0x7c027c
// 005f0398  c746746c027c00       mov dword ptr [esi + 0x74], 0x7c026c
// 005f039f  c7868c0000005c027c00 mov dword ptr [esi + 0x8c], 0x7c025c
// 005f03a9  8bc6                 mov eax, esi
// 005f03ab  5e                   pop esi
// 005f03ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

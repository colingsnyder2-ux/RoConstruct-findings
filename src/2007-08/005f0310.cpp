// roc 2007-08 005f0310  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0310
//
// 005f0310  56                   push esi
// 005f0311  8bf1                 mov esi, ecx
// 005f0313  e80822f5ff           call 0x542520
// 005f0318  c70614027c00         mov dword ptr [esi], 0x7c0214
// 005f031e  c746040c027c00       mov dword ptr [esi + 4], 0x7c020c
// 005f0325  c7461004027c00       mov dword ptr [esi + 0x10], 0x7c0204
// 005f032c  c74614f4017c00       mov dword ptr [esi + 0x14], 0x7c01f4
// 005f0333  c7462ce4017c00       mov dword ptr [esi + 0x2c], 0x7c01e4
// 005f033a  c74644d4017c00       mov dword ptr [esi + 0x44], 0x7c01d4
// 005f0341  c7465cc4017c00       mov dword ptr [esi + 0x5c], 0x7c01c4
// 005f0348  c74674b4017c00       mov dword ptr [esi + 0x74], 0x7c01b4
// 005f034f  c7868c000000a4017c00 mov dword ptr [esi + 0x8c], 0x7c01a4
// 005f0359  8bc6                 mov eax, esi
// 005f035b  5e                   pop esi
// 005f035c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

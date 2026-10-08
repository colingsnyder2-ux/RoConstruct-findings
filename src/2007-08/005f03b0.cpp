// roc 2007-08 005f03b0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f03b0
//
// 005f03b0  56                   push esi
// 005f03b1  8bf1                 mov esi, ecx
// 005f03b3  e86821f5ff           call 0x542520
// 005f03b8  c70684037c00         mov dword ptr [esi], 0x7c0384
// 005f03be  c746047c037c00       mov dword ptr [esi + 4], 0x7c037c
// 005f03c5  c7461074037c00       mov dword ptr [esi + 0x10], 0x7c0374
// 005f03cc  c7461464037c00       mov dword ptr [esi + 0x14], 0x7c0364
// 005f03d3  c7462c54037c00       mov dword ptr [esi + 0x2c], 0x7c0354
// 005f03da  c7464444037c00       mov dword ptr [esi + 0x44], 0x7c0344
// 005f03e1  c7465c34037c00       mov dword ptr [esi + 0x5c], 0x7c0334
// 005f03e8  c7467424037c00       mov dword ptr [esi + 0x74], 0x7c0324
// 005f03ef  c7868c00000014037c00 mov dword ptr [esi + 0x8c], 0x7c0314
// 005f03f9  8bc6                 mov eax, esi
// 005f03fb  5e                   pop esi
// 005f03fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

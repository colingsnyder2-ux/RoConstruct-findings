// roc 2007-08 005f04a0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f04a0
//
// 005f04a0  56                   push esi
// 005f04a1  8bf1                 mov esi, ecx
// 005f04a3  e87820f5ff           call 0x542520
// 005f04a8  c706ac057c00         mov dword ptr [esi], 0x7c05ac
// 005f04ae  c74604a4057c00       mov dword ptr [esi + 4], 0x7c05a4
// 005f04b5  c746109c057c00       mov dword ptr [esi + 0x10], 0x7c059c
// 005f04bc  c746148c057c00       mov dword ptr [esi + 0x14], 0x7c058c
// 005f04c3  c7462c7c057c00       mov dword ptr [esi + 0x2c], 0x7c057c
// 005f04ca  c746446c057c00       mov dword ptr [esi + 0x44], 0x7c056c
// 005f04d1  c7465c5c057c00       mov dword ptr [esi + 0x5c], 0x7c055c
// 005f04d8  c746744c057c00       mov dword ptr [esi + 0x74], 0x7c054c
// 005f04df  c7868c0000003c057c00 mov dword ptr [esi + 0x8c], 0x7c053c
// 005f04e9  8bc6                 mov eax, esi
// 005f04eb  5e                   pop esi
// 005f04ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 005f0450  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0450
//
// 005f0450  56                   push esi
// 005f0451  8bf1                 mov esi, ecx
// 005f0453  e8c820f5ff           call 0x542520
// 005f0458  c706f4047c00         mov dword ptr [esi], 0x7c04f4
// 005f045e  c74604ec047c00       mov dword ptr [esi + 4], 0x7c04ec
// 005f0465  c74610e4047c00       mov dword ptr [esi + 0x10], 0x7c04e4
// 005f046c  c74614d4047c00       mov dword ptr [esi + 0x14], 0x7c04d4
// 005f0473  c7462cc4047c00       mov dword ptr [esi + 0x2c], 0x7c04c4
// 005f047a  c74644b4047c00       mov dword ptr [esi + 0x44], 0x7c04b4
// 005f0481  c7465ca4047c00       mov dword ptr [esi + 0x5c], 0x7c04a4
// 005f0488  c7467494047c00       mov dword ptr [esi + 0x74], 0x7c0494
// 005f048f  c7868c00000084047c00 mov dword ptr [esi + 0x8c], 0x7c0484
// 005f0499  8bc6                 mov eax, esi
// 005f049b  5e                   pop esi
// 005f049c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 005a4a10  unit: RBX::Humanoid  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4a10
//
// 005a4a10  56                   push esi
// 005a4a11  8bf1                 mov esi, ecx
// 005a4a13  e808dbf9ff           call 0x542520
// 005a4a18  c706dc527b00         mov dword ptr [esi], 0x7b52dc
// 005a4a1e  c74604d0527b00       mov dword ptr [esi + 4], 0x7b52d0
// 005a4a25  c74610c8527b00       mov dword ptr [esi + 0x10], 0x7b52c8
// 005a4a2c  c74614b8527b00       mov dword ptr [esi + 0x14], 0x7b52b8
// 005a4a33  c7462ca8527b00       mov dword ptr [esi + 0x2c], 0x7b52a8
// 005a4a3a  c7464498527b00       mov dword ptr [esi + 0x44], 0x7b5298
// 005a4a41  c7465c88527b00       mov dword ptr [esi + 0x5c], 0x7b5288
// 005a4a48  c7467478527b00       mov dword ptr [esi + 0x74], 0x7b5278
// 005a4a4f  c7868c00000068527b00 mov dword ptr [esi + 0x8c], 0x7b5268
// 005a4a59  8bc6                 mov eax, esi
// 005a4a5b  5e                   pop esi
// 005a4a5c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

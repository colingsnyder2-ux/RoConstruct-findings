// roc 2007-08 005735b0  unit: RBX::Decal  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005735b0
//
// 005735b0  56                   push esi
// 005735b1  8bf1                 mov esi, ecx
// 005735b3  e868ffffff           call 0x573520
// 005735b8  c70644a77a00         mov dword ptr [esi], 0x7aa744
// 005735be  c746043ca77a00       mov dword ptr [esi + 4], 0x7aa73c
// 005735c5  c7461034a77a00       mov dword ptr [esi + 0x10], 0x7aa734
// 005735cc  c7461424a77a00       mov dword ptr [esi + 0x14], 0x7aa724
// 005735d3  c7462c14a77a00       mov dword ptr [esi + 0x2c], 0x7aa714
// 005735da  c7464404a77a00       mov dword ptr [esi + 0x44], 0x7aa704
// 005735e1  c7465cf4a67a00       mov dword ptr [esi + 0x5c], 0x7aa6f4
// 005735e8  c74674e4a67a00       mov dword ptr [esi + 0x74], 0x7aa6e4
// 005735ef  c7868c000000d4a67a00 mov dword ptr [esi + 0x8c], 0x7aa6d4
// 005735f9  8bc6                 mov eax, esi
// 005735fb  5e                   pop esi
// 005735fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

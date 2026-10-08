// roc 2007-08 005a27b0  unit: RBX::VBodyColors::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a27b0
//
// 005a27b0  56                   push esi
// 005a27b1  8bf1                 mov esi, ecx
// 005a27b3  e8f8fdffff           call 0x5a25b0
// 005a27b8  c7067c467b00         mov dword ptr [esi], 0x7b467c
// 005a27be  c7460470467b00       mov dword ptr [esi + 4], 0x7b4670
// 005a27c5  c7461068467b00       mov dword ptr [esi + 0x10], 0x7b4668
// 005a27cc  c7461458467b00       mov dword ptr [esi + 0x14], 0x7b4658
// 005a27d3  c7462c48467b00       mov dword ptr [esi + 0x2c], 0x7b4648
// 005a27da  c7464438467b00       mov dword ptr [esi + 0x44], 0x7b4638
// 005a27e1  c7465c28467b00       mov dword ptr [esi + 0x5c], 0x7b4628
// 005a27e8  c7467418467b00       mov dword ptr [esi + 0x74], 0x7b4618
// 005a27ef  c7868c00000008467b00 mov dword ptr [esi + 0x8c], 0x7b4608
// 005a27f9  8bc6                 mov eax, esi
// 005a27fb  5e                   pop esi
// 005a27fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

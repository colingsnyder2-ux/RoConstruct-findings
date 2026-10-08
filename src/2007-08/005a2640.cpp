// roc 2007-08 005a2640  unit: RBX::VBodyColors::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2640
//
// 005a2640  56                   push esi
// 005a2641  8bf1                 mov esi, ecx
// 005a2643  e8c8fdffff           call 0x5a2410
// 005a2648  c706fc447b00         mov dword ptr [esi], 0x7b44fc
// 005a264e  c74604f0447b00       mov dword ptr [esi + 4], 0x7b44f0
// 005a2655  c74610e8447b00       mov dword ptr [esi + 0x10], 0x7b44e8
// 005a265c  c74614d8447b00       mov dword ptr [esi + 0x14], 0x7b44d8
// 005a2663  c7462cc8447b00       mov dword ptr [esi + 0x2c], 0x7b44c8
// 005a266a  c74644b8447b00       mov dword ptr [esi + 0x44], 0x7b44b8
// 005a2671  c7465ca8447b00       mov dword ptr [esi + 0x5c], 0x7b44a8
// 005a2678  c7467498447b00       mov dword ptr [esi + 0x74], 0x7b4498
// 005a267f  c7868c00000088447b00 mov dword ptr [esi + 0x8c], 0x7b4488
// 005a2689  8bc6                 mov eax, esi
// 005a268b  5e                   pop esi
// 005a268c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

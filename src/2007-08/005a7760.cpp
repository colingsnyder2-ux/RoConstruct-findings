// roc 2007-08 005a7760  unit: RBX::VHumanoid::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7760
//
// 005a7760  56                   push esi
// 005a7761  8bf1                 mov esi, ecx
// 005a7763  e848faffff           call 0x5a71b0
// 005a7768  c706e4567b00         mov dword ptr [esi], 0x7b56e4
// 005a776e  c74604dc567b00       mov dword ptr [esi + 4], 0x7b56dc
// 005a7775  c74610d4567b00       mov dword ptr [esi + 0x10], 0x7b56d4
// 005a777c  c74614c4567b00       mov dword ptr [esi + 0x14], 0x7b56c4
// 005a7783  c7462cb4567b00       mov dword ptr [esi + 0x2c], 0x7b56b4
// 005a778a  c74644a4567b00       mov dword ptr [esi + 0x44], 0x7b56a4
// 005a7791  c7465c94567b00       mov dword ptr [esi + 0x5c], 0x7b5694
// 005a7798  c7467484567b00       mov dword ptr [esi + 0x74], 0x7b5684
// 005a779f  c7868c00000074567b00 mov dword ptr [esi + 0x8c], 0x7b5674
// 005a77a9  8bc6                 mov eax, esi
// 005a77ab  5e                   pop esi
// 005a77ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

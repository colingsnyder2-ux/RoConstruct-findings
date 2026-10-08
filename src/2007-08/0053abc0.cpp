// roc 2007-08 0053abc0  unit: RBX::VScriptContext::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053abc0
//
// 0053abc0  56                   push esi
// 0053abc1  8bf1                 mov esi, ecx
// 0053abc3  e888f9ffff           call 0x53a550
// 0053abc8  c7061c5a7a00         mov dword ptr [esi], 0x7a5a1c
// 0053abce  c74604105a7a00       mov dword ptr [esi + 4], 0x7a5a10
// 0053abd5  c74610085a7a00       mov dword ptr [esi + 0x10], 0x7a5a08
// 0053abdc  c74614f8597a00       mov dword ptr [esi + 0x14], 0x7a59f8
// 0053abe3  c7462ce8597a00       mov dword ptr [esi + 0x2c], 0x7a59e8
// 0053abea  c74644d8597a00       mov dword ptr [esi + 0x44], 0x7a59d8
// 0053abf1  c7465cc8597a00       mov dword ptr [esi + 0x5c], 0x7a59c8
// 0053abf8  c74674b8597a00       mov dword ptr [esi + 0x74], 0x7a59b8
// 0053abff  c7868c000000a8597a00 mov dword ptr [esi + 0x8c], 0x7a59a8
// 0053ac09  8bc6                 mov eax, esi
// 0053ac0b  5e                   pop esi
// 0053ac0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

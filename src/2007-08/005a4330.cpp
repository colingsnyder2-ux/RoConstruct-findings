// roc 2007-08 005a4330  unit: RBX::VTimerService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4330
//
// 005a4330  56                   push esi
// 005a4331  8bf1                 mov esi, ecx
// 005a4333  e828ffffff           call 0x5a4260
// 005a4338  c70614517b00         mov dword ptr [esi], 0x7b5114
// 005a433e  c746040c517b00       mov dword ptr [esi + 4], 0x7b510c
// 005a4345  c7461004517b00       mov dword ptr [esi + 0x10], 0x7b5104
// 005a434c  c74614f4507b00       mov dword ptr [esi + 0x14], 0x7b50f4
// 005a4353  c7462ce4507b00       mov dword ptr [esi + 0x2c], 0x7b50e4
// 005a435a  c74644d4507b00       mov dword ptr [esi + 0x44], 0x7b50d4
// 005a4361  c7465cc4507b00       mov dword ptr [esi + 0x5c], 0x7b50c4
// 005a4368  c74674b4507b00       mov dword ptr [esi + 0x74], 0x7b50b4
// 005a436f  c7868c000000a4507b00 mov dword ptr [esi + 0x8c], 0x7b50a4
// 005a4379  8bc6                 mov eax, esi
// 005a437b  5e                   pop esi
// 005a437c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 004251a0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004251a0
//
// 004251a0  56                   push esi
// 004251a1  8bf1                 mov esi, ecx
// 004251a3  e8a8faffff           call 0x424c50
// 004251a8  c706448d7800         mov dword ptr [esi], 0x788d44
// 004251ae  c74604388d7800       mov dword ptr [esi + 4], 0x788d38
// 004251b5  c74610308d7800       mov dword ptr [esi + 0x10], 0x788d30
// 004251bc  c74614208d7800       mov dword ptr [esi + 0x14], 0x788d20
// 004251c3  c7462c108d7800       mov dword ptr [esi + 0x2c], 0x788d10
// 004251ca  c74644008d7800       mov dword ptr [esi + 0x44], 0x788d00
// 004251d1  c7465cf08c7800       mov dword ptr [esi + 0x5c], 0x788cf0
// 004251d8  c74674e08c7800       mov dword ptr [esi + 0x74], 0x788ce0
// 004251df  c7868c000000d08c7800 mov dword ptr [esi + 0x8c], 0x788cd0
// 004251e9  8bc6                 mov eax, esi
// 004251eb  5e                   pop esi
// 004251ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

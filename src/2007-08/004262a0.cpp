// roc 2007-08 004262a0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004262a0
//
// 004262a0  56                   push esi
// 004262a1  8bf1                 mov esi, ecx
// 004262a3  e888f9ffff           call 0x425c30
// 004262a8  c7064c947800         mov dword ptr [esi], 0x78944c
// 004262ae  c7460444947800       mov dword ptr [esi + 4], 0x789444
// 004262b5  c746103c947800       mov dword ptr [esi + 0x10], 0x78943c
// 004262bc  c746142c947800       mov dword ptr [esi + 0x14], 0x78942c
// 004262c3  c7462c1c947800       mov dword ptr [esi + 0x2c], 0x78941c
// 004262ca  c746440c947800       mov dword ptr [esi + 0x44], 0x78940c
// 004262d1  c7465cfc937800       mov dword ptr [esi + 0x5c], 0x7893fc
// 004262d8  c74674ec937800       mov dword ptr [esi + 0x74], 0x7893ec
// 004262df  c7868c000000dc937800 mov dword ptr [esi + 0x8c], 0x7893dc
// 004262e9  8bc6                 mov eax, esi
// 004262eb  5e                   pop esi
// 004262ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

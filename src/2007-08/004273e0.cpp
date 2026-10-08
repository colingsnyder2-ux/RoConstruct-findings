// roc 2007-08 004273e0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004273e0
//
// 004273e0  56                   push esi
// 004273e1  8bf1                 mov esi, ecx
// 004273e3  e8b8fdffff           call 0x4271a0
// 004273e8  c706549f7800         mov dword ptr [esi], 0x789f54
// 004273ee  c746044c9f7800       mov dword ptr [esi + 4], 0x789f4c
// 004273f5  c74610449f7800       mov dword ptr [esi + 0x10], 0x789f44
// 004273fc  c74614349f7800       mov dword ptr [esi + 0x14], 0x789f34
// 00427403  c7462c249f7800       mov dword ptr [esi + 0x2c], 0x789f24
// 0042740a  c74644149f7800       mov dword ptr [esi + 0x44], 0x789f14
// 00427411  c7465c049f7800       mov dword ptr [esi + 0x5c], 0x789f04
// 00427418  c74674f49e7800       mov dword ptr [esi + 0x74], 0x789ef4
// 0042741f  c7868c000000e49e7800 mov dword ptr [esi + 0x8c], 0x789ee4
// 00427429  8bc6                 mov eax, esi
// 0042742b  5e                   pop esi
// 0042742c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

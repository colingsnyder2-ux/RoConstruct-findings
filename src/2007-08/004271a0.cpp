// roc 2007-08 004271a0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004271a0
//
// 004271a0  56                   push esi
// 004271a1  8bf1                 mov esi, ecx
// 004271a3  e8f8feffff           call 0x4270a0
// 004271a8  c706e49d7800         mov dword ptr [esi], 0x789de4
// 004271ae  c74604dc9d7800       mov dword ptr [esi + 4], 0x789ddc
// 004271b5  c74610d49d7800       mov dword ptr [esi + 0x10], 0x789dd4
// 004271bc  c74614c49d7800       mov dword ptr [esi + 0x14], 0x789dc4
// 004271c3  c7462cb49d7800       mov dword ptr [esi + 0x2c], 0x789db4
// 004271ca  c74644a49d7800       mov dword ptr [esi + 0x44], 0x789da4
// 004271d1  c7465c949d7800       mov dword ptr [esi + 0x5c], 0x789d94
// 004271d8  c74674849d7800       mov dword ptr [esi + 0x74], 0x789d84
// 004271df  c7868c000000749d7800 mov dword ptr [esi + 0x8c], 0x789d74
// 004271e9  8bc6                 mov eax, esi
// 004271eb  5e                   pop esi
// 004271ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

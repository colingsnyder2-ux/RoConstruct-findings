// roc 2007-08 0059f6e0  unit: RBX::VGameSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f6e0
//
// 0059f6e0  56                   push esi
// 0059f6e1  8bf1                 mov esi, ecx
// 0059f6e3  e80858eaff           call 0x444ef0
// 0059f6e8  c70684317b00         mov dword ptr [esi], 0x7b3184
// 0059f6ee  c746047c317b00       mov dword ptr [esi + 4], 0x7b317c
// 0059f6f5  c7461074317b00       mov dword ptr [esi + 0x10], 0x7b3174
// 0059f6fc  c7461464317b00       mov dword ptr [esi + 0x14], 0x7b3164
// 0059f703  c7462c54317b00       mov dword ptr [esi + 0x2c], 0x7b3154
// 0059f70a  c7464444317b00       mov dword ptr [esi + 0x44], 0x7b3144
// 0059f711  c7465c34317b00       mov dword ptr [esi + 0x5c], 0x7b3134
// 0059f718  c7467424317b00       mov dword ptr [esi + 0x74], 0x7b3124
// 0059f71f  c7868c00000014317b00 mov dword ptr [esi + 0x8c], 0x7b3114
// 0059f729  8bc6                 mov eax, esi
// 0059f72b  5e                   pop esi
// 0059f72c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

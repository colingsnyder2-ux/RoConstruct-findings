// roc 2007-08 005aec70  unit: RBX::VLighting::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aec70
//
// 005aec70  56                   push esi
// 005aec71  8bf1                 mov esi, ecx
// 005aec73  e828fcffff           call 0x5ae8a0
// 005aec78  c706e45b7b00         mov dword ptr [esi], 0x7b5be4
// 005aec7e  c74604dc5b7b00       mov dword ptr [esi + 4], 0x7b5bdc
// 005aec85  c74610d45b7b00       mov dword ptr [esi + 0x10], 0x7b5bd4
// 005aec8c  c74614c45b7b00       mov dword ptr [esi + 0x14], 0x7b5bc4
// 005aec93  c7462cb45b7b00       mov dword ptr [esi + 0x2c], 0x7b5bb4
// 005aec9a  c74644a45b7b00       mov dword ptr [esi + 0x44], 0x7b5ba4
// 005aeca1  c7465c945b7b00       mov dword ptr [esi + 0x5c], 0x7b5b94
// 005aeca8  c74674845b7b00       mov dword ptr [esi + 0x74], 0x7b5b84
// 005aecaf  c7868c000000745b7b00 mov dword ptr [esi + 0x8c], 0x7b5b74
// 005aecb9  8bc6                 mov eax, esi
// 005aecbb  5e                   pop esi
// 005aecbc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

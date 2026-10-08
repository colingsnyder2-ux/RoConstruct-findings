// roc 2007-08 004a44a0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a44a0
//
// 004a44a0  56                   push esi
// 004a44a1  8bf1                 mov esi, ecx
// 004a44a3  e8480afaff           call 0x444ef0
// 004a44a8  c70674cd7900         mov dword ptr [esi], 0x79cd74
// 004a44ae  c746046ccd7900       mov dword ptr [esi + 4], 0x79cd6c
// 004a44b5  c7461064cd7900       mov dword ptr [esi + 0x10], 0x79cd64
// 004a44bc  c7461454cd7900       mov dword ptr [esi + 0x14], 0x79cd54
// 004a44c3  c7462c44cd7900       mov dword ptr [esi + 0x2c], 0x79cd44
// 004a44ca  c7464434cd7900       mov dword ptr [esi + 0x44], 0x79cd34
// 004a44d1  c7465c24cd7900       mov dword ptr [esi + 0x5c], 0x79cd24
// 004a44d8  c7467414cd7900       mov dword ptr [esi + 0x74], 0x79cd14
// 004a44df  c7868c00000004cd7900 mov dword ptr [esi + 0x8c], 0x79cd04
// 004a44e9  8bc6                 mov eax, esi
// 004a44eb  5e                   pop esi
// 004a44ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 005f5870  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5870
//
// 005f5870  56                   push esi
// 005f5871  8bf1                 mov esi, ecx
// 005f5873  e828f2ffff           call 0x5f4aa0
// 005f5878  c7066c107c00         mov dword ptr [esi], 0x7c106c
// 005f587e  c7460464107c00       mov dword ptr [esi + 4], 0x7c1064
// 005f5885  c746105c107c00       mov dword ptr [esi + 0x10], 0x7c105c
// 005f588c  c746144c107c00       mov dword ptr [esi + 0x14], 0x7c104c
// 005f5893  c7462c3c107c00       mov dword ptr [esi + 0x2c], 0x7c103c
// 005f589a  c746442c107c00       mov dword ptr [esi + 0x44], 0x7c102c
// 005f58a1  c7465c1c107c00       mov dword ptr [esi + 0x5c], 0x7c101c
// 005f58a8  c746740c107c00       mov dword ptr [esi + 0x74], 0x7c100c
// 005f58af  c7868c000000fc0f7c00 mov dword ptr [esi + 0x8c], 0x7c0ffc
// 005f58b9  8bc6                 mov eax, esi
// 005f58bb  5e                   pop esi
// 005f58bc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

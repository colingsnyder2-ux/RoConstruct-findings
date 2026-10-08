// roc 2007-08 0059b8e0  unit: RBX::VCamera::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b8e0
//
// 0059b8e0  56                   push esi
// 0059b8e1  8bf1                 mov esi, ecx
// 0059b8e3  e838fdffff           call 0x59b620
// 0059b8e8  c7066c187b00         mov dword ptr [esi], 0x7b186c
// 0059b8ee  c7460464187b00       mov dword ptr [esi + 4], 0x7b1864
// 0059b8f5  c746105c187b00       mov dword ptr [esi + 0x10], 0x7b185c
// 0059b8fc  c746144c187b00       mov dword ptr [esi + 0x14], 0x7b184c
// 0059b903  c7462c3c187b00       mov dword ptr [esi + 0x2c], 0x7b183c
// 0059b90a  c746442c187b00       mov dword ptr [esi + 0x44], 0x7b182c
// 0059b911  c7465c1c187b00       mov dword ptr [esi + 0x5c], 0x7b181c
// 0059b918  c746740c187b00       mov dword ptr [esi + 0x74], 0x7b180c
// 0059b91f  c7868c000000fc177b00 mov dword ptr [esi + 0x8c], 0x7b17fc
// 0059b929  8bc6                 mov eax, esi
// 0059b92b  5e                   pop esi
// 0059b92c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

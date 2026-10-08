// roc 2007-08 005a18e0  unit: RBX::VSkin::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a18e0
//
// 005a18e0  56                   push esi
// 005a18e1  8bf1                 mov esi, ecx
// 005a18e3  e898fdffff           call 0x5a1680
// 005a18e8  c706ac407b00         mov dword ptr [esi], 0x7b40ac
// 005a18ee  c74604a0407b00       mov dword ptr [esi + 4], 0x7b40a0
// 005a18f5  c7461098407b00       mov dword ptr [esi + 0x10], 0x7b4098
// 005a18fc  c7461488407b00       mov dword ptr [esi + 0x14], 0x7b4088
// 005a1903  c7462c78407b00       mov dword ptr [esi + 0x2c], 0x7b4078
// 005a190a  c7464468407b00       mov dword ptr [esi + 0x44], 0x7b4068
// 005a1911  c7465c58407b00       mov dword ptr [esi + 0x5c], 0x7b4058
// 005a1918  c7467448407b00       mov dword ptr [esi + 0x74], 0x7b4048
// 005a191f  c7868c00000038407b00 mov dword ptr [esi + 0x8c], 0x7b4038
// 005a1929  8bc6                 mov eax, esi
// 005a192b  5e                   pop esi
// 005a192c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

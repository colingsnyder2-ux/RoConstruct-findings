// roc 2007-08 005a3860  unit: RBX::Teams  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3860
//
// 005a3860  56                   push esi
// 005a3861  8bf1                 mov esi, ecx
// 005a3863  e878fcffff           call 0x5a34e0
// 005a3868  c706ac4e7b00         mov dword ptr [esi], 0x7b4eac
// 005a386e  c74604a44e7b00       mov dword ptr [esi + 4], 0x7b4ea4
// 005a3875  c746109c4e7b00       mov dword ptr [esi + 0x10], 0x7b4e9c
// 005a387c  c746148c4e7b00       mov dword ptr [esi + 0x14], 0x7b4e8c
// 005a3883  c7462c7c4e7b00       mov dword ptr [esi + 0x2c], 0x7b4e7c
// 005a388a  c746446c4e7b00       mov dword ptr [esi + 0x44], 0x7b4e6c
// 005a3891  c7465c5c4e7b00       mov dword ptr [esi + 0x5c], 0x7b4e5c
// 005a3898  c746744c4e7b00       mov dword ptr [esi + 0x74], 0x7b4e4c
// 005a389f  c7868c0000003c4e7b00 mov dword ptr [esi + 0x8c], 0x7b4e3c
// 005a38a9  8bc6                 mov eax, esi
// 005a38ab  5e                   pop esi
// 005a38ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

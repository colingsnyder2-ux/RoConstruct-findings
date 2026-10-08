// roc 2007-08 005b59e0  unit: RBX::VSky::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b59e0
//
// 005b59e0  56                   push esi
// 005b59e1  8bf1                 mov esi, ecx
// 005b59e3  e838cbf8ff           call 0x542520
// 005b59e8  c7060c807b00         mov dword ptr [esi], 0x7b800c
// 005b59ee  c7460404807b00       mov dword ptr [esi + 4], 0x7b8004
// 005b59f5  c74610fc7f7b00       mov dword ptr [esi + 0x10], 0x7b7ffc
// 005b59fc  c74614ec7f7b00       mov dword ptr [esi + 0x14], 0x7b7fec
// 005b5a03  c7462cdc7f7b00       mov dword ptr [esi + 0x2c], 0x7b7fdc
// 005b5a0a  c74644cc7f7b00       mov dword ptr [esi + 0x44], 0x7b7fcc
// 005b5a11  c7465cbc7f7b00       mov dword ptr [esi + 0x5c], 0x7b7fbc
// 005b5a18  c74674ac7f7b00       mov dword ptr [esi + 0x74], 0x7b7fac
// 005b5a1f  c7868c0000009c7f7b00 mov dword ptr [esi + 0x8c], 0x7b7f9c
// 005b5a29  8bc6                 mov eax, esi
// 005b5a2b  5e                   pop esi
// 005b5a2c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 004a49d0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a49d0
//
// 004a49d0  56                   push esi
// 004a49d1  8bf1                 mov esi, ecx
// 004a49d3  e8a8feffff           call 0x4a4880
// 004a49d8  c7060ccf7900         mov dword ptr [esi], 0x79cf0c
// 004a49de  c7460404cf7900       mov dword ptr [esi + 4], 0x79cf04
// 004a49e5  c74610fcce7900       mov dword ptr [esi + 0x10], 0x79cefc
// 004a49ec  c74614ecce7900       mov dword ptr [esi + 0x14], 0x79ceec
// 004a49f3  c7462cdcce7900       mov dword ptr [esi + 0x2c], 0x79cedc
// 004a49fa  c74644ccce7900       mov dword ptr [esi + 0x44], 0x79cecc
// 004a4a01  c7465cbcce7900       mov dword ptr [esi + 0x5c], 0x79cebc
// 004a4a08  c74674acce7900       mov dword ptr [esi + 0x74], 0x79ceac
// 004a4a0f  c7868c0000009cce7900 mov dword ptr [esi + 0x8c], 0x79ce9c
// 004a4a19  8bc6                 mov eax, esi
// 004a4a1b  5e                   pop esi
// 004a4a1c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

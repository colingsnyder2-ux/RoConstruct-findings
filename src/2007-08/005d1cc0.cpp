// roc 2007-08 005d1cc0  unit: RBX::Tool  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1cc0
//
// 005d1cc0  56                   push esi
// 005d1cc1  8bf1                 mov esi, ecx
// 005d1cc3  e85808f7ff           call 0x542520
// 005d1cc8  c70604af7b00         mov dword ptr [esi], 0x7baf04
// 005d1cce  c74604f8ae7b00       mov dword ptr [esi + 4], 0x7baef8
// 005d1cd5  c74610f0ae7b00       mov dword ptr [esi + 0x10], 0x7baef0
// 005d1cdc  c74614e0ae7b00       mov dword ptr [esi + 0x14], 0x7baee0
// 005d1ce3  c7462cd0ae7b00       mov dword ptr [esi + 0x2c], 0x7baed0
// 005d1cea  c74644c0ae7b00       mov dword ptr [esi + 0x44], 0x7baec0
// 005d1cf1  c7465cb0ae7b00       mov dword ptr [esi + 0x5c], 0x7baeb0
// 005d1cf8  c74674a0ae7b00       mov dword ptr [esi + 0x74], 0x7baea0
// 005d1cff  c7868c00000090ae7b00 mov dword ptr [esi + 0x8c], 0x7bae90
// 005d1d09  8bc6                 mov eax, esi
// 005d1d0b  5e                   pop esi
// 005d1d0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

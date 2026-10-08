// roc 2007-08 00542e20  unit: RBX::VDebugSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542e20
//
// 00542e20  56                   push esi
// 00542e21  8bf1                 mov esi, ecx
// 00542e23  e8c820f0ff           call 0x444ef0
// 00542e28  c706ac687a00         mov dword ptr [esi], 0x7a68ac
// 00542e2e  c74604a4687a00       mov dword ptr [esi + 4], 0x7a68a4
// 00542e35  c746109c687a00       mov dword ptr [esi + 0x10], 0x7a689c
// 00542e3c  c746148c687a00       mov dword ptr [esi + 0x14], 0x7a688c
// 00542e43  c7462c7c687a00       mov dword ptr [esi + 0x2c], 0x7a687c
// 00542e4a  c746446c687a00       mov dword ptr [esi + 0x44], 0x7a686c
// 00542e51  c7465c5c687a00       mov dword ptr [esi + 0x5c], 0x7a685c
// 00542e58  c746744c687a00       mov dword ptr [esi + 0x74], 0x7a684c
// 00542e5f  c7868c0000003c687a00 mov dword ptr [esi + 0x8c], 0x7a683c
// 00542e69  8bc6                 mov eax, esi
// 00542e6b  5e                   pop esi
// 00542e6c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

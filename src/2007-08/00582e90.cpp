// roc 2007-08 00582e90  unit: RBX::Accoutrement  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00582e90
//
// 00582e90  56                   push esi
// 00582e91  8bf1                 mov esi, ecx
// 00582e93  e818f8ffff           call 0x5826b0
// 00582e98  c706a4c47a00         mov dword ptr [esi], 0x7ac4a4
// 00582e9e  c746049cc47a00       mov dword ptr [esi + 4], 0x7ac49c
// 00582ea5  c7461094c47a00       mov dword ptr [esi + 0x10], 0x7ac494
// 00582eac  c7461484c47a00       mov dword ptr [esi + 0x14], 0x7ac484
// 00582eb3  c7462c74c47a00       mov dword ptr [esi + 0x2c], 0x7ac474
// 00582eba  c7464464c47a00       mov dword ptr [esi + 0x44], 0x7ac464
// 00582ec1  c7465c54c47a00       mov dword ptr [esi + 0x5c], 0x7ac454
// 00582ec8  c7467444c47a00       mov dword ptr [esi + 0x74], 0x7ac444
// 00582ecf  c7868c00000034c47a00 mov dword ptr [esi + 0x8c], 0x7ac434
// 00582ed9  8bc6                 mov eax, esi
// 00582edb  5e                   pop esi
// 00582edc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

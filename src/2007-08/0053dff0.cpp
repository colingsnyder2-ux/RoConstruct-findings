// roc 2007-08 0053dff0  unit: RBX::Script  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053dff0
//
// 0053dff0  56                   push esi
// 0053dff1  8bf1                 mov esi, ecx
// 0053dff3  e848fdffff           call 0x53dd40
// 0053dff8  c706ac5f7a00         mov dword ptr [esi], 0x7a5fac
// 0053dffe  c74604a45f7a00       mov dword ptr [esi + 4], 0x7a5fa4
// 0053e005  c746109c5f7a00       mov dword ptr [esi + 0x10], 0x7a5f9c
// 0053e00c  c746148c5f7a00       mov dword ptr [esi + 0x14], 0x7a5f8c
// 0053e013  c7462c7c5f7a00       mov dword ptr [esi + 0x2c], 0x7a5f7c
// 0053e01a  c746446c5f7a00       mov dword ptr [esi + 0x44], 0x7a5f6c
// 0053e021  c7465c5c5f7a00       mov dword ptr [esi + 0x5c], 0x7a5f5c
// 0053e028  c746744c5f7a00       mov dword ptr [esi + 0x74], 0x7a5f4c
// 0053e02f  c7868c0000003c5f7a00 mov dword ptr [esi + 0x8c], 0x7a5f3c
// 0053e039  8bc6                 mov eax, esi
// 0053e03b  5e                   pop esi
// 0053e03c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

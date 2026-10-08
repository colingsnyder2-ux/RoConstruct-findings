// roc 2007-08 0045aa70  unit: RBX::VCamera::?$FactoryProduct::Creator  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045aa70
//
// 0045aa70  56                   push esi
// 0045aa71  8bf1                 mov esi, ecx
// 0045aa73  e8b8faffff           call 0x45a530
// 0045aa78  c70604387900         mov dword ptr [esi], 0x793804
// 0045aa7e  c74604fc377900       mov dword ptr [esi + 4], 0x7937fc
// 0045aa85  c74610f4377900       mov dword ptr [esi + 0x10], 0x7937f4
// 0045aa8c  c74614e4377900       mov dword ptr [esi + 0x14], 0x7937e4
// 0045aa93  c7462cd4377900       mov dword ptr [esi + 0x2c], 0x7937d4
// 0045aa9a  c74644c4377900       mov dword ptr [esi + 0x44], 0x7937c4
// 0045aaa1  c7465cb4377900       mov dword ptr [esi + 0x5c], 0x7937b4
// 0045aaa8  c74674a4377900       mov dword ptr [esi + 0x74], 0x7937a4
// 0045aaaf  c7868c00000094377900 mov dword ptr [esi + 0x8c], 0x793794
// 0045aab9  8bc6                 mov eax, esi
// 0045aabb  5e                   pop esi
// 0045aabc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

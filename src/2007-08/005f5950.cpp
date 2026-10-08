// roc 2007-08 005f5950  unit: RBX::M$1?sFloatValue::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5950
//
// 005f5950  56                   push esi
// 005f5951  8bf1                 mov esi, ecx
// 005f5953  e8f8f2ffff           call 0x5f4c50
// 005f5958  c706dc117c00         mov dword ptr [esi], 0x7c11dc
// 005f595e  c74604d4117c00       mov dword ptr [esi + 4], 0x7c11d4
// 005f5965  c74610cc117c00       mov dword ptr [esi + 0x10], 0x7c11cc
// 005f596c  c74614bc117c00       mov dword ptr [esi + 0x14], 0x7c11bc
// 005f5973  c7462cac117c00       mov dword ptr [esi + 0x2c], 0x7c11ac
// 005f597a  c746449c117c00       mov dword ptr [esi + 0x44], 0x7c119c
// 005f5981  c7465c8c117c00       mov dword ptr [esi + 0x5c], 0x7c118c
// 005f5988  c746747c117c00       mov dword ptr [esi + 0x74], 0x7c117c
// 005f598f  c7868c0000006c117c00 mov dword ptr [esi + 0x8c], 0x7c116c
// 005f5999  8bc6                 mov eax, esi
// 005f599b  5e                   pop esi
// 005f599c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

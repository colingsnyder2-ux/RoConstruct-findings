// roc 2007-08 005f5a20  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5a20
//
// 005f5a20  56                   push esi
// 005f5a21  8bf1                 mov esi, ecx
// 005f5a23  e8e8f2ffff           call 0x5f4d10
// 005f5a28  c70694127c00         mov dword ptr [esi], 0x7c1294
// 005f5a2e  c746048c127c00       mov dword ptr [esi + 4], 0x7c128c
// 005f5a35  c7461084127c00       mov dword ptr [esi + 0x10], 0x7c1284
// 005f5a3c  c7461474127c00       mov dword ptr [esi + 0x14], 0x7c1274
// 005f5a43  c7462c64127c00       mov dword ptr [esi + 0x2c], 0x7c1264
// 005f5a4a  c7464454127c00       mov dword ptr [esi + 0x44], 0x7c1254
// 005f5a51  c7465c44127c00       mov dword ptr [esi + 0x5c], 0x7c1244
// 005f5a58  c7467434127c00       mov dword ptr [esi + 0x74], 0x7c1234
// 005f5a5f  c7868c00000024127c00 mov dword ptr [esi + 0x8c], 0x7c1224
// 005f5a69  8bc6                 mov eax, esi
// 005f5a6b  5e                   pop esi
// 005f5a6c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

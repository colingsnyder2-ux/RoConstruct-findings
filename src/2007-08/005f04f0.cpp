// roc 2007-08 005f04f0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f04f0
//
// 005f04f0  56                   push esi
// 005f04f1  8bf1                 mov esi, ecx
// 005f04f3  e82820f5ff           call 0x542520
// 005f04f8  c70664067c00         mov dword ptr [esi], 0x7c0664
// 005f04fe  c746045c067c00       mov dword ptr [esi + 4], 0x7c065c
// 005f0505  c7461054067c00       mov dword ptr [esi + 0x10], 0x7c0654
// 005f050c  c7461444067c00       mov dword ptr [esi + 0x14], 0x7c0644
// 005f0513  c7462c34067c00       mov dword ptr [esi + 0x2c], 0x7c0634
// 005f051a  c7464424067c00       mov dword ptr [esi + 0x44], 0x7c0624
// 005f0521  c7465c14067c00       mov dword ptr [esi + 0x5c], 0x7c0614
// 005f0528  c7467404067c00       mov dword ptr [esi + 0x74], 0x7c0604
// 005f052f  c7868c000000f4057c00 mov dword ptr [esi + 0x8c], 0x7c05f4
// 005f0539  8bc6                 mov eax, esi
// 005f053b  5e                   pop esi
// 005f053c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

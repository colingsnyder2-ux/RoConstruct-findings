// roc 2007-08 00486a10  unit: G3D::GWindow  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486a10
//
// 00486a10  56                   push esi
// 00486a11  8bf1                 mov esi, ecx
// 00486a13  e808bb0b00           call 0x542520
// 00486a18  c70694ad7900         mov dword ptr [esi], 0x79ad94
// 00486a1e  c7460488ad7900       mov dword ptr [esi + 4], 0x79ad88
// 00486a25  c7461080ad7900       mov dword ptr [esi + 0x10], 0x79ad80
// 00486a2c  c7461470ad7900       mov dword ptr [esi + 0x14], 0x79ad70
// 00486a33  c7462c60ad7900       mov dword ptr [esi + 0x2c], 0x79ad60
// 00486a3a  c7464450ad7900       mov dword ptr [esi + 0x44], 0x79ad50
// 00486a41  c7465c40ad7900       mov dword ptr [esi + 0x5c], 0x79ad40
// 00486a48  c7467430ad7900       mov dword ptr [esi + 0x74], 0x79ad30
// 00486a4f  c7868c00000020ad7900 mov dword ptr [esi + 0x8c], 0x79ad20
// 00486a59  8bc6                 mov eax, esi
// 00486a5b  5e                   pop esi
// 00486a5c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

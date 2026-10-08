// roc 2007-08 004b0ec0  unit: RBX::Network::VReplicator::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b0ec0
//
// 004b0ec0  56                   push esi
// 004b0ec1  8bf1                 mov esi, ecx
// 004b0ec3  e8f8f3ffff           call 0x4b02c0
// 004b0ec8  c70674da7900         mov dword ptr [esi], 0x79da74
// 004b0ece  c7460468da7900       mov dword ptr [esi + 4], 0x79da68
// 004b0ed5  c7461060da7900       mov dword ptr [esi + 0x10], 0x79da60
// 004b0edc  c7461450da7900       mov dword ptr [esi + 0x14], 0x79da50
// 004b0ee3  c7462c40da7900       mov dword ptr [esi + 0x2c], 0x79da40
// 004b0eea  c7464430da7900       mov dword ptr [esi + 0x44], 0x79da30
// 004b0ef1  c7465c20da7900       mov dword ptr [esi + 0x5c], 0x79da20
// 004b0ef8  c7467410da7900       mov dword ptr [esi + 0x74], 0x79da10
// 004b0eff  c7868c00000000da7900 mov dword ptr [esi + 0x8c], 0x79da00
// 004b0f09  8bc6                 mov eax, esi
// 004b0f0b  5e                   pop esi
// 004b0f0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

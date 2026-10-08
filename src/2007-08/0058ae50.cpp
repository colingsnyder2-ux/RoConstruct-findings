// roc 2007-08 0058ae50  unit: RBX::VSoundChannel::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ae50
//
// 0058ae50  56                   push esi
// 0058ae51  8bf1                 mov esi, ecx
// 0058ae53  e8d8f9ffff           call 0x58a830
// 0058ae58  c7068cef7a00         mov dword ptr [esi], 0x7aef8c
// 0058ae5e  c7460484ef7a00       mov dword ptr [esi + 4], 0x7aef84
// 0058ae65  c746107cef7a00       mov dword ptr [esi + 0x10], 0x7aef7c
// 0058ae6c  c746146cef7a00       mov dword ptr [esi + 0x14], 0x7aef6c
// 0058ae73  c7462c5cef7a00       mov dword ptr [esi + 0x2c], 0x7aef5c
// 0058ae7a  c746444cef7a00       mov dword ptr [esi + 0x44], 0x7aef4c
// 0058ae81  c7465c3cef7a00       mov dword ptr [esi + 0x5c], 0x7aef3c
// 0058ae88  c746742cef7a00       mov dword ptr [esi + 0x74], 0x7aef2c
// 0058ae8f  c7868c0000001cef7a00 mov dword ptr [esi + 0x8c], 0x7aef1c
// 0058ae99  8bc6                 mov eax, esi
// 0058ae9b  5e                   pop esi
// 0058ae9c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

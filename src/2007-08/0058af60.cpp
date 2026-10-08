// roc 2007-08 0058af60  unit: RBX::VSoundService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058af60
//
// 0058af60  56                   push esi
// 0058af61  8bf1                 mov esi, ecx
// 0058af63  e868f9ffff           call 0x58a8d0
// 0058af68  c70644f07a00         mov dword ptr [esi], 0x7af044
// 0058af6e  c746043cf07a00       mov dword ptr [esi + 4], 0x7af03c
// 0058af75  c7461034f07a00       mov dword ptr [esi + 0x10], 0x7af034
// 0058af7c  c7461424f07a00       mov dword ptr [esi + 0x14], 0x7af024
// 0058af83  c7462c14f07a00       mov dword ptr [esi + 0x2c], 0x7af014
// 0058af8a  c7464404f07a00       mov dword ptr [esi + 0x44], 0x7af004
// 0058af91  c7465cf4ef7a00       mov dword ptr [esi + 0x5c], 0x7aeff4
// 0058af98  c74674e4ef7a00       mov dword ptr [esi + 0x74], 0x7aefe4
// 0058af9f  c7868c000000d4ef7a00 mov dword ptr [esi + 0x8c], 0x7aefd4
// 0058afa9  8bc6                 mov eax, esi
// 0058afab  5e                   pop esi
// 0058afac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

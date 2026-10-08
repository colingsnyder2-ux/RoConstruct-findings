// roc 2007-08 005a26d0  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a26d0
//
// 005a26d0  56                   push esi
// 005a26d1  8bf1                 mov esi, ecx
// 005a26d3  e838feffff           call 0x5a2510
// 005a26d8  c706bc457b00         mov dword ptr [esi], 0x7b45bc
// 005a26de  c74604b0457b00       mov dword ptr [esi + 4], 0x7b45b0
// 005a26e5  c74610a8457b00       mov dword ptr [esi + 0x10], 0x7b45a8
// 005a26ec  c7461498457b00       mov dword ptr [esi + 0x14], 0x7b4598
// 005a26f3  c7462c88457b00       mov dword ptr [esi + 0x2c], 0x7b4588
// 005a26fa  c7464478457b00       mov dword ptr [esi + 0x44], 0x7b4578
// 005a2701  c7465c68457b00       mov dword ptr [esi + 0x5c], 0x7b4568
// 005a2708  c7467458457b00       mov dword ptr [esi + 0x74], 0x7b4558
// 005a270f  c7868c00000048457b00 mov dword ptr [esi + 0x8c], 0x7b4548
// 005a2719  8bc6                 mov eax, esi
// 005a271b  5e                   pop esi
// 005a271c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

// roc 2007-08 005996b0  unit: RBX::VCamera::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005996b0
//
// 005996b0  56                   push esi
// 005996b1  8bf1                 mov esi, ecx
// 005996b3  e8688efaff           call 0x542520
// 005996b8  c706c4157b00         mov dword ptr [esi], 0x7b15c4
// 005996be  c74604bc157b00       mov dword ptr [esi + 4], 0x7b15bc
// 005996c5  c74610b4157b00       mov dword ptr [esi + 0x10], 0x7b15b4
// 005996cc  c74614a4157b00       mov dword ptr [esi + 0x14], 0x7b15a4
// 005996d3  c7462c94157b00       mov dword ptr [esi + 0x2c], 0x7b1594
// 005996da  c7464484157b00       mov dword ptr [esi + 0x44], 0x7b1584
// 005996e1  c7465c74157b00       mov dword ptr [esi + 0x5c], 0x7b1574
// 005996e8  c7467464157b00       mov dword ptr [esi + 0x74], 0x7b1564
// 005996ef  c7868c00000054157b00 mov dword ptr [esi + 0x8c], 0x7b1554
// 005996f9  8bc6                 mov eax, esi
// 005996fb  5e                   pop esi
// 005996fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

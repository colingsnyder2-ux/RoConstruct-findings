// roc 2007-08 005a3cb0  unit: RBX::VTimerService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3cb0
//
// 005a3cb0  56                   push esi
// 005a3cb1  8bf1                 mov esi, ecx
// 005a3cb3  e868e8f9ff           call 0x542520
// 005a3cb8  c706a44f7b00         mov dword ptr [esi], 0x7b4fa4
// 005a3cbe  c746049c4f7b00       mov dword ptr [esi + 4], 0x7b4f9c
// 005a3cc5  c74610944f7b00       mov dword ptr [esi + 0x10], 0x7b4f94
// 005a3ccc  c74614844f7b00       mov dword ptr [esi + 0x14], 0x7b4f84
// 005a3cd3  c7462c744f7b00       mov dword ptr [esi + 0x2c], 0x7b4f74
// 005a3cda  c74644644f7b00       mov dword ptr [esi + 0x44], 0x7b4f64
// 005a3ce1  c7465c544f7b00       mov dword ptr [esi + 0x5c], 0x7b4f54
// 005a3ce8  c74674444f7b00       mov dword ptr [esi + 0x74], 0x7b4f44
// 005a3cef  c7868c000000344f7b00 mov dword ptr [esi + 0x8c], 0x7b4f34
// 005a3cf9  8bc6                 mov eax, esi
// 005a3cfb  5e                   pop esi
// 005a3cfc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

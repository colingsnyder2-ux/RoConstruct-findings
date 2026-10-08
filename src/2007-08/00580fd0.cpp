// roc 2007-08 00580fd0  unit: RBX::Accoutrement  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580fd0
//
// 00580fd0  56                   push esi
// 00580fd1  8bf1                 mov esi, ecx
// 00580fd3  e84815fcff           call 0x542520
// 00580fd8  c706ccc07a00         mov dword ptr [esi], 0x7ac0cc
// 00580fde  c74604c4c07a00       mov dword ptr [esi + 4], 0x7ac0c4
// 00580fe5  c74610bcc07a00       mov dword ptr [esi + 0x10], 0x7ac0bc
// 00580fec  c74614acc07a00       mov dword ptr [esi + 0x14], 0x7ac0ac
// 00580ff3  c7462c9cc07a00       mov dword ptr [esi + 0x2c], 0x7ac09c
// 00580ffa  c746448cc07a00       mov dword ptr [esi + 0x44], 0x7ac08c
// 00581001  c7465c7cc07a00       mov dword ptr [esi + 0x5c], 0x7ac07c
// 00581008  c746746cc07a00       mov dword ptr [esi + 0x74], 0x7ac06c
// 0058100f  c7868c0000005cc07a00 mov dword ptr [esi + 0x8c], 0x7ac05c
// 00581019  8bc6                 mov eax, esi
// 0058101b  5e                   pop esi
// 0058101c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

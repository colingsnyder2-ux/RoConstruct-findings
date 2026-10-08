// roc 2007-08 004193a0  unit: VDHTMLWindow::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004193a0
//
// 004193a0  56                   push esi
// 004193a1  8bf1                 mov esi, ecx
// 004193a3  e878911200           call 0x542520
// 004193a8  c7064c757800         mov dword ptr [esi], 0x78754c
// 004193ae  c7460444757800       mov dword ptr [esi + 4], 0x787544
// 004193b5  c746103c757800       mov dword ptr [esi + 0x10], 0x78753c
// 004193bc  c746142c757800       mov dword ptr [esi + 0x14], 0x78752c
// 004193c3  c7462c1c757800       mov dword ptr [esi + 0x2c], 0x78751c
// 004193ca  c746440c757800       mov dword ptr [esi + 0x44], 0x78750c
// 004193d1  c7465cfc747800       mov dword ptr [esi + 0x5c], 0x7874fc
// 004193d8  c74674ec747800       mov dword ptr [esi + 0x74], 0x7874ec
// 004193df  c7868c000000dc747800 mov dword ptr [esi + 0x8c], 0x7874dc
// 004193e9  8bc6                 mov eax, esi
// 004193eb  5e                   pop esi
// 004193ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

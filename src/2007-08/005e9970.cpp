// roc 2007-08 005e9970  unit: RBX::VExplosion::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9970
//
// 005e9970  56                   push esi
// 005e9971  8bf1                 mov esi, ecx
// 005e9973  e8a88bf5ff           call 0x542520
// 005e9978  c70654de7b00         mov dword ptr [esi], 0x7bde54
// 005e997e  c746044cde7b00       mov dword ptr [esi + 4], 0x7bde4c
// 005e9985  c7461044de7b00       mov dword ptr [esi + 0x10], 0x7bde44
// 005e998c  c7461434de7b00       mov dword ptr [esi + 0x14], 0x7bde34
// 005e9993  c7462c24de7b00       mov dword ptr [esi + 0x2c], 0x7bde24
// 005e999a  c7464414de7b00       mov dword ptr [esi + 0x44], 0x7bde14
// 005e99a1  c7465c04de7b00       mov dword ptr [esi + 0x5c], 0x7bde04
// 005e99a8  c74674f4dd7b00       mov dword ptr [esi + 0x74], 0x7bddf4
// 005e99af  c7868c000000e4dd7b00 mov dword ptr [esi + 0x8c], 0x7bdde4
// 005e99b9  8bc6                 mov eax, esi
// 005e99bb  5e                   pop esi
// 005e99bc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

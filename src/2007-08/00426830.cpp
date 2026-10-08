// roc 2007-08 00426830  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426830
//
// 00426830  56                   push esi
// 00426831  8bf1                 mov esi, ecx
// 00426833  e878fbffff           call 0x4263b0
// 00426838  c70654997800         mov dword ptr [esi], 0x789954
// 0042683e  c746044c997800       mov dword ptr [esi + 4], 0x78994c
// 00426845  c7461044997800       mov dword ptr [esi + 0x10], 0x789944
// 0042684c  c7461434997800       mov dword ptr [esi + 0x14], 0x789934
// 00426853  c7462c24997800       mov dword ptr [esi + 0x2c], 0x789924
// 0042685a  c7464414997800       mov dword ptr [esi + 0x44], 0x789914
// 00426861  c7465c04997800       mov dword ptr [esi + 0x5c], 0x789904
// 00426868  c74674f4987800       mov dword ptr [esi + 0x74], 0x7898f4
// 0042686f  c7868c000000e4987800 mov dword ptr [esi + 0x8c], 0x7898e4
// 00426879  8bc6                 mov eax, esi
// 0042687b  5e                   pop esi
// 0042687c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

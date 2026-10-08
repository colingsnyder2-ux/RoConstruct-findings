// roc 2007-08 004475f0  unit: VCRenderSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004475f0
//
// 004475f0  56                   push esi
// 004475f1  8bf1                 mov esi, ecx
// 004475f3  e8f8fbffff           call 0x4471f0
// 004475f8  c7066cff7800         mov dword ptr [esi], 0x78ff6c
// 004475fe  c7460460ff7800       mov dword ptr [esi + 4], 0x78ff60
// 00447605  c7461058ff7800       mov dword ptr [esi + 0x10], 0x78ff58
// 0044760c  c7461448ff7800       mov dword ptr [esi + 0x14], 0x78ff48
// 00447613  c7462c38ff7800       mov dword ptr [esi + 0x2c], 0x78ff38
// 0044761a  c7464428ff7800       mov dword ptr [esi + 0x44], 0x78ff28
// 00447621  c7465c18ff7800       mov dword ptr [esi + 0x5c], 0x78ff18
// 00447628  c7467408ff7800       mov dword ptr [esi + 0x74], 0x78ff08
// 0044762f  c7868c000000f8fe7800 mov dword ptr [esi + 0x8c], 0x78fef8
// 00447639  8bc6                 mov eax, esi
// 0044763b  5e                   pop esi
// 0044763c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

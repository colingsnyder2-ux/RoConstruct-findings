// roc 2008-06 005985a0  unit: RBX::Decal  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005985a0
//
// 005985a0  56                   push esi
// 005985a1  8bf1                 mov esi, ecx
// 005985a3  e858feffff           call 0x598400
// 005985a8  c7065c258300         mov dword ptr [esi], 0x83255c
// 005985ae  c7461050258300       mov dword ptr [esi + 0x10], 0x832550
// 005985b5  c7461448258300       mov dword ptr [esi + 0x14], 0x832548
// 005985bc  c7462040258300       mov dword ptr [esi + 0x20], 0x832540
// 005985c3  c7462430258300       mov dword ptr [esi + 0x24], 0x832530
// 005985ca  c7464420258300       mov dword ptr [esi + 0x44], 0x832520
// 005985d1  c7466410258300       mov dword ptr [esi + 0x64], 0x832510
// 005985d8  c7868400000000258300 mov dword ptr [esi + 0x84], 0x832500
// 005985e2  c786a4000000f0248300 mov dword ptr [esi + 0xa4], 0x8324f0
// 005985ec  c786c4000000e0248300 mov dword ptr [esi + 0xc4], 0x8324e0
// 005985f6  c78630010000c8248300 mov dword ptr [esi + 0x130], 0x8324c8
// 00598600  8bc6                 mov eax, esi
// 00598602  5e                   pop esi
// 00598603  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

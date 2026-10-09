// roc 2008-06 005fcac0  unit: RBX::LocalBackpack  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fcac0
//
// 005fcac0  6aff                 push -1
// 005fcac2  68387e7d00           push 0x7d7e38
// 005fcac7  64a100000000         mov eax, dword ptr fs:[0]
// 005fcacd  50                   push eax
// 005fcace  64892500000000       mov dword ptr fs:[0], esp
// 005fcad5  51                   push ecx
// 005fcad6  56                   push esi
// 005fcad7  8bf1                 mov esi, ecx
// 005fcad9  89742404             mov dword ptr [esp + 4], esi
// 005fcadd  e8aeedffff           call 0x5fb890
// 005fcae2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fcaea  e8f139fcff           call 0x5c04e0
// 005fcaef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fcaf3  89461c               mov dword ptr [esi + 0x1c], eax
// 005fcaf6  c70654148400         mov dword ptr [esi], 0x841454
// 005fcafc  c7461044148400       mov dword ptr [esi + 0x10], 0x841444
// 005fcb03  c746143c148400       mov dword ptr [esi + 0x14], 0x84143c
// 005fcb0a  c7462034148400       mov dword ptr [esi + 0x20], 0x841434
// 005fcb11  c7462424148400       mov dword ptr [esi + 0x24], 0x841424
// 005fcb18  c7464414148400       mov dword ptr [esi + 0x44], 0x841414
// 005fcb1f  c7466404148400       mov dword ptr [esi + 0x64], 0x841404
// 005fcb26  c78684000000f4138400 mov dword ptr [esi + 0x84], 0x8413f4
// 005fcb30  c786a4000000e4138400 mov dword ptr [esi + 0xa4], 0x8413e4
// 005fcb3a  c786c4000000d4138400 mov dword ptr [esi + 0xc4], 0x8413d4
// 005fcb44  c78630010000cc138400 mov dword ptr [esi + 0x130], 0x8413cc
// 005fcb4e  8bc6                 mov eax, esi
// 005fcb50  5e                   pop esi
// 005fcb51  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcb58  83c410               add esp, 0x10
// 005fcb5b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

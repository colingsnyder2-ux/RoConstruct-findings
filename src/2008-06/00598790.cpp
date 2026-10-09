// roc 2008-06 00598790  unit: RBX::Decal  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598790
//
// 00598790  6aff                 push -1
// 00598792  6808257d00           push 0x7d2508
// 00598797  64a100000000         mov eax, dword ptr fs:[0]
// 0059879d  50                   push eax
// 0059879e  64892500000000       mov dword ptr fs:[0], esp
// 005987a5  51                   push ecx
// 005987a6  56                   push esi
// 005987a7  8bf1                 mov esi, ecx
// 005987a9  89742404             mov dword ptr [esp + 4], esi
// 005987ad  e8eefdffff           call 0x5985a0
// 005987b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005987ba  e8d1f8ffff           call 0x598090
// 005987bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005987c3  89461c               mov dword ptr [esi + 0x1c], eax
// 005987c6  c7068c288300         mov dword ptr [esi], 0x83288c
// 005987cc  c7461080288300       mov dword ptr [esi + 0x10], 0x832880
// 005987d3  c7461478288300       mov dword ptr [esi + 0x14], 0x832878
// 005987da  c7462070288300       mov dword ptr [esi + 0x20], 0x832870
// 005987e1  c7462460288300       mov dword ptr [esi + 0x24], 0x832860
// 005987e8  c7464450288300       mov dword ptr [esi + 0x44], 0x832850
// 005987ef  c7466440288300       mov dword ptr [esi + 0x64], 0x832840
// 005987f6  c7868400000030288300 mov dword ptr [esi + 0x84], 0x832830
// 00598800  c786a400000020288300 mov dword ptr [esi + 0xa4], 0x832820
// 0059880a  c786c400000010288300 mov dword ptr [esi + 0xc4], 0x832810
// 00598814  c78630010000f8278300 mov dword ptr [esi + 0x130], 0x8327f8
// 0059881e  8bc6                 mov eax, esi
// 00598820  5e                   pop esi
// 00598821  64890d00000000       mov dword ptr fs:[0], ecx
// 00598828  83c410               add esp, 0x10
// 0059882b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

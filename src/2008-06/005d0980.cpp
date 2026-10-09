// roc 2008-06 005d0980  unit: RBX::LegacyHopperService  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0980
//
// 005d0980  6aff                 push -1
// 005d0982  6878567d00           push 0x7d5678
// 005d0987  64a100000000         mov eax, dword ptr fs:[0]
// 005d098d  50                   push eax
// 005d098e  64892500000000       mov dword ptr fs:[0], esp
// 005d0995  51                   push ecx
// 005d0996  56                   push esi
// 005d0997  8bf1                 mov esi, ecx
// 005d0999  89742404             mov dword ptr [esp + 4], esi
// 005d099d  e8ceefffff           call 0x5cf970
// 005d09a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d09aa  e8d1f6feff           call 0x5c0080
// 005d09af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d09b3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d09b6  c706f4b08300         mov dword ptr [esi], 0x83b0f4
// 005d09bc  c74610e8b08300       mov dword ptr [esi + 0x10], 0x83b0e8
// 005d09c3  c74614e0b08300       mov dword ptr [esi + 0x14], 0x83b0e0
// 005d09ca  c74620d8b08300       mov dword ptr [esi + 0x20], 0x83b0d8
// 005d09d1  c74624c8b08300       mov dword ptr [esi + 0x24], 0x83b0c8
// 005d09d8  c74644b8b08300       mov dword ptr [esi + 0x44], 0x83b0b8
// 005d09df  c74664a8b08300       mov dword ptr [esi + 0x64], 0x83b0a8
// 005d09e6  c7868400000098b08300 mov dword ptr [esi + 0x84], 0x83b098
// 005d09f0  c786a400000088b08300 mov dword ptr [esi + 0xa4], 0x83b088
// 005d09fa  c786c400000078b08300 mov dword ptr [esi + 0xc4], 0x83b078
// 005d0a04  c7863001000070b08300 mov dword ptr [esi + 0x130], 0x83b070
// 005d0a0e  8bc6                 mov eax, esi
// 005d0a10  5e                   pop esi
// 005d0a11  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0a18  83c410               add esp, 0x10
// 005d0a1b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

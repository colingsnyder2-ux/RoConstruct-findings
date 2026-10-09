// roc 2008-06 005d5350  unit: RBX::VClothing::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5350
//
// 005d5350  6aff                 push -1
// 005d5352  68485a7d00           push 0x7d5a48
// 005d5357  64a100000000         mov eax, dword ptr fs:[0]
// 005d535d  50                   push eax
// 005d535e  64892500000000       mov dword ptr fs:[0], esp
// 005d5365  51                   push ecx
// 005d5366  56                   push esi
// 005d5367  8bf1                 mov esi, ecx
// 005d5369  89742404             mov dword ptr [esp + 4], esi
// 005d536d  e84eebffff           call 0x5d3ec0
// 005d5372  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d537a  e8c1aefeff           call 0x5c0240
// 005d537f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d5383  89461c               mov dword ptr [esi + 0x1c], eax
// 005d5386  c706e4c78300         mov dword ptr [esi], 0x83c7e4
// 005d538c  c74610d4c78300       mov dword ptr [esi + 0x10], 0x83c7d4
// 005d5393  c74614ccc78300       mov dword ptr [esi + 0x14], 0x83c7cc
// 005d539a  c74620c4c78300       mov dword ptr [esi + 0x20], 0x83c7c4
// 005d53a1  c74624b4c78300       mov dword ptr [esi + 0x24], 0x83c7b4
// 005d53a8  c74644a4c78300       mov dword ptr [esi + 0x44], 0x83c7a4
// 005d53af  c7466494c78300       mov dword ptr [esi + 0x64], 0x83c794
// 005d53b6  c7868400000084c78300 mov dword ptr [esi + 0x84], 0x83c784
// 005d53c0  c786a400000074c78300 mov dword ptr [esi + 0xa4], 0x83c774
// 005d53ca  c786c400000064c78300 mov dword ptr [esi + 0xc4], 0x83c764
// 005d53d4  c786300100005cc78300 mov dword ptr [esi + 0x130], 0x83c75c
// 005d53de  8bc6                 mov eax, esi
// 005d53e0  5e                   pop esi
// 005d53e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005d53e8  83c410               add esp, 0x10
// 005d53eb  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp

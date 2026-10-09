// roc 2008-06 00598340  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598340
//
// 00598340  6aff                 push -1
// 00598342  68a8247d00           push 0x7d24a8
// 00598347  64a100000000         mov eax, dword ptr fs:[0]
// 0059834d  50                   push eax
// 0059834e  64892500000000       mov dword ptr fs:[0], esp
// 00598355  51                   push ecx
// 00598356  56                   push esi
// 00598357  8bf1                 mov esi, ecx
// 00598359  89742404             mov dword ptr [esp + 4], esi
// 0059835d  e8eef1ffff           call 0x597550
// 00598362  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059836a  e8b1fcffff           call 0x598020
// 0059836f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00598373  89461c               mov dword ptr [esi + 0x1c], eax
// 00598376  c706d4268300         mov dword ptr [esi], 0x8326d4
// 0059837c  c74610c4268300       mov dword ptr [esi + 0x10], 0x8326c4
// 00598383  c74614bc268300       mov dword ptr [esi + 0x14], 0x8326bc
// 0059838a  c74620b4268300       mov dword ptr [esi + 0x20], 0x8326b4
// 00598391  c74624a4268300       mov dword ptr [esi + 0x24], 0x8326a4
// 00598398  c7464494268300       mov dword ptr [esi + 0x44], 0x832694
// 0059839f  c7466484268300       mov dword ptr [esi + 0x64], 0x832684
// 005983a6  c7868400000074268300 mov dword ptr [esi + 0x84], 0x832674
// 005983b0  c786a400000064268300 mov dword ptr [esi + 0xa4], 0x832664
// 005983ba  c786c400000054268300 mov dword ptr [esi + 0xc4], 0x832654
// 005983c4  c786300100003c268300 mov dword ptr [esi + 0x130], 0x83263c
// 005983ce  8bc6                 mov eax, esi
// 005983d0  5e                   pop esi
// 005983d1  64890d00000000       mov dword ptr fs:[0], ecx
// 005983d8  83c410               add esp, 0x10
// 005983db  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
